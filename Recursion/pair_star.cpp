// Question
// Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".



// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[], int count = 0) {
	if(*(input+1) == '\0'){
      	*(input+count+1) = *(input+1);
      	*(input+count) = *(input);
      	return;
    }
  	if(*input == *(input+1)){
      	count++;
    }
  	pairStar(input+1, count);
  	if(*input == *(input+1)){
      	*(input+count+1) = *(input+1);
      	*(input+count) = '*';
      	*(input+count-1) = *input;
    } else {
      	*(input+count) = *input;
    }
}
