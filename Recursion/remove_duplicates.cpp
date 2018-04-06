// QUESTION
// Given a string S, remove consecutive duplicates from it recursively.



void removeConsecutiveDuplicates(char *input, int i = 0, int j = 0) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
	if(input[i+1] == '\0'){
      	input[j++] = input[i];
      	input[j] = '\0';
       	return ;
    }
  	if(input[i] == input[i+1]){
      	
    } else {
      	input[j++] = input[i];
    }
  	removeConsecutiveDuplicates(input, i+1, j);
}