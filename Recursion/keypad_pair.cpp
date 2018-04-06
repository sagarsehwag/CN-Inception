// QUESTION
// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.



#include <string>
using namespace std;
string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int keypad(int number, string output[], string str = "", int count = 0){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
  	if(number == 0){
      	output[count] = str;
      	return count+1;
    }
  	int digit = number%10;
  	for(int i = 0; arr[digit][i]; i++){
       	count = keypad(number/10, output, arr[digit][i] + str, count);
    }
  	return count;
}