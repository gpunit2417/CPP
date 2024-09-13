#include <iostream>
using namespace std;

// // A function to implement bubble sort
// void bubbleSort(int arr[], int n)
// {
// 	int i, j;
// 	for (i = 0; i < n - 1; i++)

// 		// Last i elements are already
// 		// in place
// 		for (j = 0; j < n - i - 1; j++)
// 			if (arr[j] > arr[j + 1])
// 				swap(arr[j], arr[j + 1]);
// }

// // Function to print an array
// void printArray(int arr[], int size)
// {
// 	int i;
// 	for (i = 0; i < size; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 5, 1, 4, 2, 8};
// 	int N = sizeof(arr) / sizeof(arr[0]);
// 	bubbleSort(arr, N);
// 	cout << "Sorted array: \n";
// 	printArray(arr, N);
// 	return 0;
// }
// // This code is contributed by rathbhupendra

//code studio
// void bubbleSort(vector<int> &arr, int n){
// 	for(int i=1; i<n; i++){
// 		for(int j=0; j<n-1; j++){
// 			if(arr[j]< arr[j+1]){
// 				swap(arr[j], arr[j+1]);
// 			}
// 		}
// 	}
// }

//by babbar code below
// void sort(int *arr, int n){
// 	//already sorted base case
// 	if(n==0 || n==1){
// 		return;
// 	}
// 	//1 case solved-- largest element at its position
// 	for(int i=0; i<n-1; i++){
// 		if(arr[i] > arr[i+1]){
// 			swap(arr[i], arr[i+1]);
// 		}
// 	}
// 	sort(arr, n-1);
// }
		
// int main(){
// 	int arr[5] = {3,5,2,7,2};
// 	int size = 5;
// 	sort(arr, size);

// 	for(int i=0; i<size; i++){
// 		cout<<arr[i]<<" ";
// 	}

// 	return 0;
// }

//mycode ... same as above... just change in bubblesort function
void bubblesort(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j+1], arr[j]);
			}
		}
	}
}

void printArray(int arr[], int n){
	for(int a=0; a<n; a++){
		cout<<arr[a]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[6] = {2, 5, 3, 7, 9, 6};
	int n = 6;
	cout<<"sorted array is "<<endl;
	bubblesort(arr, n);
	printArray(arr, n);
	return 0;
}