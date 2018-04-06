/* Given a string, find and print all the possible permutations of the input string.
Note : The order of permutations are not important. Just print them in different lines.*/



#include <string>
using namespace std;
string output[1000000];
void printPermutations(string input, int index = 0, int oIndex = 0){
  	if(input[index] == '\0'){
      	return ;
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
            }
          	if(index == input.length()-1) cout << newStr << endl;
        }
    }
  	printPermutations(input, index+1, newOIndex);
}