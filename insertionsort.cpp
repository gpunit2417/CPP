#include <iostream>
using namespace std;

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
	
	int i, key, j;
	
	for (i = 1; i < n; i++)			//index is from 0
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int size;
    cout<<"enter the size of the array "<<endl;
    cin>>size;
    int arr[size];

    cout<<"enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"sorted array is: "<<endl;
    insertionSort(arr, size);
    printArray(arr, size);
	return 0;
}



// //code studio
// void insertionSort(vector<int> &arr, int n){
// 	for(int i=1; i<n; i++){
// 		int temp= arr[i];
// 		int j=i-1;
// 		for(; j>=0; j--){
// 			if(arr[j]>temp){
// 				arr[j+1] = arr[j];
// 			}
// 			else{
// 				break;
// 			}
// 		}
// 		arr[j+1]= temp;
// 	}
// }