/* Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :

Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched) */



int binarySearch(int input[], int size, int element, int index = 0){
	if(input[index] == element){
      	return index;
    } else if(index > size){
      	return -1;
    }
  	int mid = (index + size)/2;
  	if(element < input[mid]){
      	size = mid;
    } else if(element > input[mid]){
      	index = mid+1;
    } else {
      	return mid;
    }
  	index = binarySearch(input, size, element, index);
  	return index;
}