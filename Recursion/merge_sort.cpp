// MERGE SORT

void merge(int input[], int start, int mid, int end){
    // end - SIZE OF THE ARRAY NOT INDEX.
  	int arr[end - start];
  	int i = start, j = mid, k = 0;
  	while(i < mid and j < end){
      	if(input[i] < input[j]){
          	arr[k++] = input[i++];
        } else if(input[j] < input[i]){
          	arr[k++] = input[j++];
        } else {
          	arr[k++] = input[i++];
          	arr[k++] = input[j++];
        }
    }
  	while(i < mid){
      	arr[k++] = input[i++];
    }
  	while(j < end){
      	arr[k++] = input[j++];
    }
  	for(int i = start, k = 0; i < end; i++, k++){
      	input[i] = arr[k];
    }
}

void mergeSort(int input[], int end, int start = 0){
  	if(end - start == 1) return;
  	int mid = (end + start)/2;
  	
  	mergeSort(input, mid, start);
  	mergeSort(input, end, mid);
  	merge(input, start, mid, end);
}