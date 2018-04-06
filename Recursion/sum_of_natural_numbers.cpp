// QUESTION
// Given an integer n, find and return the sum of numbers from 1 to n using recursion.



int sum(int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	if(n <= 1){
      	return 1;
    }
  	return n + sum(n-1);
}