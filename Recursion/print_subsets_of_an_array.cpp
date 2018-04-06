/* Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)*/



using namespace std;
int output[10000000][20];
void printSubsetsOfArray(int input[], int n, int row = 0, int index = 0) {
  	if(index >= n){
      	return ;
    }
  	output[row][0] = 1;
  	output[row][1] = input[index];
  	cout << input[index] << endl;
  	int lastRow = row;
  	for(int i = 0; i < lastRow; i++){
      	int addLocation = output[i][0];
      	for(int j = 0; j <= addLocation; j++){
          	output[row+1][j] = output[i][j];
          	if(j != 0) {
            	cout << output[i][j] << " ";
            }
        }
      	output[row+1][addLocation+1] = input[index];
      	cout << input[index] << endl;
      	output[row+1][0]++;
      	row++;
    }
    printSubsetsOfArray(input, n, row+1, index+1);
}
