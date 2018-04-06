/* Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.*/



#include <string>
using namespace std;

int returnPermutations(string input, string output[], int index = 0, int oIndex = 0, int count = 0){
  	if(input[index] == '\0'){
      	return count+1;
    }
  	int newOIndex = oIndex;
  	for(int i = 0; i <= oIndex; i++){
      	for(int j = 0; j <= index; j++){
          	string newStr = "";
        	for(int k = 0; k < j; k++){
              	newStr += output[i][k];
            }
          	newStr += input[index];
          	for(int k = j; k < index; k++){
              	newStr += output[i][k];
            }
          	if(j == index) {
              	output[i] = newStr;
            } else {
              	output[++newOIndex] = newStr;
              	count++;
            }
          	//if(index == input.length()-1) cout << newStr <<  endl;
        }
    }
  	count = returnPermutations(input, output, index+1, newOIndex, count);
  	return count;
}