// QUESTION
// Given two integers m & n, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
// Input format : m and n (separated by space)



int multiplyNumbers(int m, int n) {
    // Write your code here
	if(n == 0){
    	return 0;
    }
  	return m + multiplyNumbers(m, n-1);
}