// Question
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.



void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
	if(*input == '\0'){
      	return;
    }
  	if(*input == c1){
      	*input = c2;
    }
  	replaceCharacter(input+1, c1, c2);
  	return;
}