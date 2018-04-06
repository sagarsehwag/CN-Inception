// Question
// Given a string, compute recursively a new string where all 'x' chars have been removed.



// Change in the given string itself. So no need to return or print anything

void removeX(char input[], int i = 0, int j = 0) {
    // Write your code here
	if(input[i] == '\0'){
     	input[j] = '\0';
      	return ;
    } else if(input[i] == 'x'){
      	
    } else {
      	input[j++] = input[i];
    }
  	removeX(input, i+1, j);
}