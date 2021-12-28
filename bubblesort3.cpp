#include <iostream>
using namespace std; 

void swap(int *a, int *b){
	int temp = *a;
	*a = *b; 
	*b = temp; 
  } 
void bubbleSort(int arr[], int n){
	bool swapped;
	for(int i = 0; i < n -1; i++){
		swapped = false; 
	for(int j = 0; j < n-1-i; j++){
		if(arr[j] > arr[j+1]){
		swap(&arr[j],&arr[j+1]);
		swapped = true;  
	}
	}
		if(swapped == false)
			break; 
	}
	}
void printArray(int arr[], int size){
	for(int i = 0; i < size; i++)
	cout << arr[i] << " " << endl; 
	
	}
int main(){
	int arr[] = {1,4,7,19,63,49,21};
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n);
	printArray(arr, n); 


	return 0;


}
