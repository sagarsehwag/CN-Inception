/* Given an array A of size n and an integer K, return all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important.
Input format :
Line 1 : Integer n, Size of input array
Line 2 : Array elements separated by space
Line 3 : K */


using namespace std;
int subset(int input[], int n, int output[][20], int row = 0, int index = 0) {
  	if(index >= n) {
      	return row;
    }
  	output[row][0] = 1;
  	output[row][1] = input[index];
  	//cout << input[index] << endl;
  	int lastRow = row;
  	for(int i = 0; i < lastRow; i++){
      	int addLocation = output[i][0];
      	for(int j = 0; j <= addLocation; j++){
          	output[row+1][j] = output[i][j];
          	if(j != 0) {
            	//cout << output[i][j] << " ";
            }
        }
      	output[row+1][addLocation+1] = input[index];
      	//cout << input[index] << endl;
      	output[row+1][0]++;
      	row++;
    }
    row = subset(input, n, output, row+1, index+1);
  	return row;
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
  	int outArr[10000000][20];
  	int mainRow = 0;
	int row = subset(input, n, outArr);
  	for(int i = 0; i < row; i++){
      	int colSize = outArr[i][0];
      	int sum = 0;
      	for(int j = 1; j <= colSize; j++){
          	sum += outArr[i][j];
        }
      	if(sum == k){
          	for(int j = 0; j <= colSize; j++){
              	output[mainRow][j] = outArr[i][j];
              	//if(j != 0)cout << output[mainRow][j] << " ";
            }
          	cout << endl;
          	mainRow++;
        }
    }
  	return mainRow;
}