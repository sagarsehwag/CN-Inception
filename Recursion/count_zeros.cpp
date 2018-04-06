// QUESTION
// Given an integer n, count and return the number of zeros that are present in the given integer using recursion.



int countZeros(int n) {
    // Write your code here
	if(n == 0){
      	return 0;
    }
  	int count = countZeros(n/10);
  	if(n%10 == 0){
      	return count+1;
    }
  	return count;
}