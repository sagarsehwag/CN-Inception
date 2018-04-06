/* Suppose you have a string made up of only 'a' and 'b'. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.*/

bool checkAB(char input[], int index = 0) {
  	if(input[index] == '\0'){
      	return true;
    }
	if(input[0] != 'a'){
      	return false;
    }
  
  	bool flag;
	if(input[index] == 'a'){
		if(input[index+1] == 'a'){
			flag = checkAB(input, index+1);
		} else if(input[index+1] == 'b' and input[index+2] == 'b'){
			flag = checkAB(input, index+1);
		} else if(input[index+1] == '\0'){
          	return true;
        } else {
			return false;
		}
	} else if(input[index] == 'b' and input[index+1] == 'b'){
		if(input[index+2] == 'a'){
			flag = checkAB(input, index+2);
		} else if(input[index+2] == '\0'){
          	return true;
        } else {
			return false;
		}
	} else {
      	return false;
    }  
	return flag;
}