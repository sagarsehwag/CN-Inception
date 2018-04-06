// Question
//Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.



//Forward Traversal
#include <cstring>
int stringToNumber(char input[], int number = 0){
	if(*input == '\0'){
      	return number;
    }
  	
  	number = number * 10 + (int(*input)-48);
  	number = stringToNumber(input+1, number);
  	return number;
}