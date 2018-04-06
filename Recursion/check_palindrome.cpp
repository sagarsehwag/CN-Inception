// QUESTION
// Check if a given String S is palindrome or not (using recursion). Return true or false.



#include<cstring>
using namespace std;
bool helperFunction(char input[], int start, int len){
  	if(start == len or start >= len){
      	return true;
    }
   	if(input[start] != input[len]) {
      	return false;
    } else {
     	return helperFunction(input, start+1, len-1); 	
    }
}

bool checkPalindrome(char input[]) {
    // Write your code here
	int len = strlen(input);
  	if(len == 0){
      	return true; 
    } else {
      	len = len-1;
    }
  	//cout << len << endl;
  	int start = 0;
  	return helperFunction(input, start, len);
}