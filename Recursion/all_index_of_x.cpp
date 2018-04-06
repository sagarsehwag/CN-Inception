// QUESTION
// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
//Do this recursively. Indexing in the array starts from 0.



int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
	if(size == 0){
      	return 0;
    }
  	int count = allIndexes(input, size-1, x, output);
  
  	if(input[size-1] == x){
      	output[count++] = size-1;
    }
  	return count;
}