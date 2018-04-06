// Question
// Given a string, compute recursively (no loops) a new string where all appearances of "pi" have been replaced by "3.14".



// Change in the given string itself. So no need to return or print anything

void replacePi(char input[], int count = 0) {
	// Write your code here
	if(*input == '\0'){
      	*(input+2*count) = *input;
      	return;
    }
  	if(*input == 'p' and *(input+1) == 'i'){
		count++;
      	replacePi((input+2), count);
    } else {
     	replacePi(input+1, count); 	
    }
  	if(*input == 'p' and *(input+1) == 'i'){
      	*(input+2*count-2) = '3';
      	*(input+2*count-2+1) = '.';
      	*(input+2*count-2+2) = '1';
      	*(input+2*count-2+3) = '4';
      	count--;
    } else if(*input == '3' or *input == '.' or *input == '1' or *input == '4'){
      	
    } else {
      	*(input+2*count) = *input;
    }
}