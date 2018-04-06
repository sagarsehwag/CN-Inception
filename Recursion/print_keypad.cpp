// QUESTION
// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.



#include <string>
string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void printKeypad(int number) {
  	if(number == 0){
      	//cout << str << endl;
      	return;
    }
  	int digit = number%10;
  	for(int i = 0; arr[digit][i]; i++){
      	cout << arr[digit][i];
      	printKeypad(number/10);
      	if()
      	cout  << endl;
    }
}