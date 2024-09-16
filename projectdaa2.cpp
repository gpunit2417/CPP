// #include <cstdlib>
// #include<time.h>
// #include<iostream>
// using namespace std;

// void swap(int *xp, int *yp){
// 	int temp = *xp;
// 	*xp = *yp;
// 	*yp = temp;
// }
// void selectionSort(int arr[], int n){
// 	int i, j, min_idx;
// 	for (i = 0; i < n-1; i++){
// 		min_idx = i;
// 		for (j = i+1; j < n; j++)
// 		if (arr[j] < arr[min_idx]){
//             min_idx = j;
//         }
// 		if(min_idx!=i){
// 			swap(&arr[min_idx], &arr[i]);
//         }
// 	}
// }

// void insertionSort(int arr[], int n){
// 	int i, key, j;
// 	for (i = 1; i < n; i++)			//index is from 0
// {
// 		key = arr[i];
// 		j = i - 1;
// 		while (j >= 0 && arr[j] > key){
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
// 	}
// }

// void bubbleSort(int arr[], int n){
// 	int i, j;
// 	for (i = 0; i < n - 1; i++)
// 		for (j = 0; j < n - i - 1; j++)
// 			if (arr[j] > arr[j + 1])
// 				swap(arr[j], arr[j + 1]);
// }

// void printArray(int arr[], int n){
// 	for(int i = 0; i<n; i++){
// 		cout<<arr[i]<<" ";
// 	}
// }
// int main(){
// 	int MyNumber;
// 	cout<<"Enter the array size number::";
// 	cin>>MyNumber;
// 	int Rand[MyNumber];
// 	// int arr[MyNumber];
// 	if(MyNumber < 25){
// 		for(int i = 0; i<MyNumber; i++){
// 			cout<<"enter the array element"<<endl;
// 			cout<<Rand[i]<<" "<<endl;
// 		}
// 	}
// 	else{
// 		      						//10 is written just to avoid error otherwise MyNumber was written here
// 		srand(time(NULL)); 						// generate random numbers every time.... if don't use same numbers will come...
// 		for(int r= 0; r <MyNumber; r++){
// 			Rand[r]=rand()%1000;
// 		}
// 		cout<<"Array Elements::"<<endl;
// 		for(int r=0; r<MyNumber ; r++){
// 			cout<<Rand[r]<<" ";
// 		}
// 	}
// 	int start = clock();
// 	cout<<endl;
// 	cout<<"sorted array is "<<endl<<endl;
// 	cout<<"by selection sort "<<endl;
// 	selectionSort(Rand, MyNumber);
// 	printArray(Rand, MyNumber);
// 	int end = clock();
// 	cout<<""<<endl;
// 	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
//     cout << "Time taken by program is : " << fixed << time_taken ;
//     cout << " sec " << endl;
// 	cout<<endl;


// 	int start1 = clock();
// 	cout<<"by insertion sort"<<endl;
// 	insertionSort(Rand, MyNumber);
// 	printArray(Rand, MyNumber);
// 	int end1 = clock();
// 	cout<<endl;
// 	double time_taken1 = double(end1 - start1) / double(CLOCKS_PER_SEC);
//     cout << "Time taken by program is : " << fixed << time_taken1 ;
//     cout << " sec " << endl;
// 	cout<<endl;


// 	int start2 = clock();
// 	cout<<"by bubble sort"<<endl;
// 	bubbleSort(Rand, MyNumber);
// 	printArray(Rand, MyNumber);
// 	int end2 = clock();
// 	cout<<endl;
// 	double time_taken2 = double(end2 - start) / double(CLOCKS_PER_SEC);
//     cout << "Time taken by program is : " << fixed << time_taken2 ;
//     cout << " sec " << endl;

// 	return 0;
// }

#include<iostream> 
#include<chrono> 
#include<cstdlib> 
#include<climits> 
#include<algorithm> 
#include<vector> 
using namespace std::chrono; 
using namespace std; 
 
void copy(int *arr1, int *arr2, int n) { 
    for (int i = 0; i < n; i++) { 
        arr2[i] = arr1[i]; 
    } 
} 
int insertion(int *arr, int n) { 
	cout << "Insertion sort" << endl; 
    cout << "Input data" << endl;     
	for (int i = 0; i < n; i++) 
    { 
        cout << arr[i] << " "; 
    } 
    cout << endl;     
	int arr2[n] = {0};     
	copy(arr, arr2, n); 
    auto start = high_resolution_clock::now();           
	for (int i = 0; i < n; i++) { 
        int j = i - 1;         
		int temp = arr2[i]; 
        while (j >= 0 && arr2[j] > temp){ 
            arr2[j + 1] = arr2[j];             j--; 
        } 
        arr2[j + 1] = temp; 
    } 
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start); 
    cout << "Insertion sort takes " << duration.count() << " millisecond" << endl;         
	cout << "output data" << endl;     
	for (int i = 0; i < n; i++) { 
        cout << arr2[i] << " "; 
    } 
    cout << endl; 
    return duration.count(); 
} 
 
int bubble(int *arr, int n) { 
 
    cout << "bubble sort" << endl; 
    cout << "Input data" << endl; 
    for (int i = 0; i < n; i++) 
    { 
        cout << arr[i] << " "; 
    } 
    cout << endl;     
	int arr2[n] = {0};     
	copy(arr, arr2, n); 
    auto start = high_resolution_clock::now();       
	int i = n - 1; 
    while (i >= 0) { 
        for (int j = 0; j < n; j++) { 
            if (arr2[j] > arr2[j + 1]) { 
                swap(arr2[j], arr2[j + 1]); 
            } 
        } 
        i--; 
    } 
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start); 
    cout << "Bubble sort takes " << duration.count() << "milliseconds" << endl;        
	cout << "output data" << endl;     
	for (int i = 0; i < n; i++) { 
        cout << arr2[i] << " "; 
    } 
    cout << endl; 
    return duration.count(); 
} 
int countSort(int* arr,int n){ 
    cout << "Count sort" << endl; 
    cout << "Input data" << endl; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    auto start = high_resolution_clock::now();          
	cout << endl;     
	int maxE=INT_MIN;     
	for(int i=0;i<n;i++){ 
        maxE=max(maxE,arr[i]); 
    } 
    vector<int> freq(maxE+1,0);     
	vector<int> output(n,0);     
	for(int i=0;i<n;i++){ 
        freq[arr[i]]++; 
    } 
 
    for(int i=1;i<maxE+1;i++){ 
        freq[i]+=freq[i-1]; 
    } 
    for(int i=n-1;i>=0;i--){         
		output[--freq[arr[i]]]=arr[i]; 
    } 
  	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start); 
    cout << "Counting sort takes " << duration.count() << "milliseconds" << endl;        
	cout << "output data" << endl;     
	for (int i = 0; i < n; i++) { 
        cout << output[i] << " "; 
    } 
    cout << endl; 
    return duration.count(); 
} 
void Merge(int *a, int low, int high, int mid) { 
 	int i, j, k, temp[high-low+1];  	
	i = low;  	
	k = 0;  	
	j = mid + 1; 
 	while (i <= mid && j <= high) { 
 	 	if (a[i] < a[j]) { 
 	 	 	temp[k] = a[i];  	 	 	
			k++; 
 	 	 	i++; 
 	 	} 
 	 	else { 
 	 	 	temp[k] = a[j]; 
 	 	 	k++;  	 	 	
			j++; 
 	 	} 
 	} 
 	while (i <= mid) { 
 	 	temp[k] = a[i]; 
 	 	k++;  	 	
		i++; 
 	} 
 	while (j <= high) { 
 	 	temp[k] = a[j]; 
 	 	k++;  	 	
		j++; 
 	} 
 	for (i = low; i <= high; i++) { 
 	 	a[i] = temp[i-low]; 
 	} 
} 
void MergeSort(int *a, int low, int high) 
{ 
 	int mid; 
 	if (low < high) { 
 	 	mid=(low+high)/2;  	 	
		MergeSort(a, low, mid); 
 	 	MergeSort(a, mid+1, high); 
 	 	Merge(a, low, high, mid); 
 	} 
} 
int mergeSort(int *arr,int n){ 
    cout << "Merge sort" << endl;     
	cout << "Input data" << endl; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl;     
	int arr2[n] = {0};     
	copy(arr, arr2, n);     
	auto start = high_resolution_clock::now();         
	MergeSort(arr2,0,n-1); 
  	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start); 
    cout << "Merge sort takes " << duration.count() << "milliseconds" << endl;        
	cout << "output data" << endl;     for (int i = 0; i < n; i++) { 
        cout << arr2[i] << " "; 
    } 
    cout << endl; 
    return duration.count();  
} 
int selectionSort(int arr[], int n) { 
    cout << "Selection sort" << endl; 
    cout << "Input data" << endl; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl;     
	int arr2[n] = {0};     
	copy(arr, arr2, n); 
    auto start = high_resolution_clock::now();        
	int i, j, min_idx; 
    for (i = 0; i < n-1; i++) { 
        min_idx = i; 
        for (j = i+1; j < n; j++) { 
			if (arr2[j] < arr2[min_idx])               
			min_idx = j; 
        } 
        if (min_idx!=i) 
            swap(arr2[min_idx], arr2[i]); 
    } 
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start); 
    cout << "Selection sort takes " << duration.count() << "milliseconds" << endl;        
	cout << "output data" << endl;     
	for (int i = 0; i < n; i++) 
    { 
        cout << arr2[i] << " "; 
    } 
    cout << endl; 
    return duration.count();  
} 
 
int main() {     
	int it; 
    cout<<"Enter number of iterations"<<endl;     
	cin>>it;     
	int res1[it][2]={};     
	int res2[it][2]={};     
	int res3[it][2]={};     
	int res4[it][2]={};    
	int res5[it][2]={};     
	int iteration=0;  
	while(iteration<it){    
    int n; 
    cout<<"Enter input size of data"<<endl;     
	cin >> n; 
    int *arr; 
    if(n<=20){ 
        cout<<"Enter the values of data"<<endl;         
		arr=new int[n]; 
        for(int i=0;i<n;i++){ 
            cin>>arr[i]; 
        } 
    } 
    else{ 
		arr = (int*)calloc(n, sizeof(int)); 
		for (int i = 0; i < n; i++) 
		{ 
			arr[i] = 1 + (rand() % 100); 
		} 
    } 
    
    int time1=insertion(arr, n);     
	res1[iteration][0]=n;     
	res1[iteration][1]=time1;     
	int time2=bubble(arr, n);     
	res2[iteration][0]=n;     
	res2[iteration][1]=time2;     
	int time3=countSort(arr, n);     
	res3[iteration][0]=n;     
	res3[iteration][1]=time3;     
	int time4=mergeSort(arr, n);     
	res4[iteration][0]=n;     
	res4[iteration][1]=time4;     
	int time5=selectionSort(arr, n);     
	res5[iteration][0]=n;     
	res5[iteration][1]=time5;     
	delete arr;     
	iteration++; 
    } 
    cout<<"Insertion sort values:-"<<endl; 
    cout<<"Input size"<<"   "<<"time"<<endl;     
	for(int i=0;i<it;i++){         
		cout<<"  "<<res1[i][0]<<"         "; 
        cout<<res1[i][1]<<endl; 
    } 
    cout<<"Bubble sort values:-"<<endl; 
    cout<<"Input size"<<"   "<<"time"<<endl;     
	for(int i=0;i<it;i++){         
		cout<<"  "<<res2[i][0]<<"         ";         
		cout<<res2[i][1]<<endl; 
    } 
    cout<<"Count sort values:-"<<endl; 
    cout<<"Input size"<<"   "<<"time"<<endl;     
	for(int i=0;i<it;i++){         
		cout<<"  "<<res3[i][0]<<"         "; 
        cout<<res3[i][1]<<endl; 
    } 
    cout<<"Merge sort values:-"<<endl; 
    cout<<"Input size"<<"   "<<"time"<<endl;     
	for(int i=0;i<it;i++){         
		cout<<"  "<<res4[i][0]<<"         "; 
        cout<<res4[i][1]<<endl; 
    } 
    cout<<"Selection sort values:-"<<endl; 
    cout<<"Input size"<<"   "<<"time"<<endl;     
	for(int i=0;i<it;i++){         
		cout<<"  "<<res5[i][0]<<"         "; 
        cout<<res5[i][1]<<endl; 
    }     
    return 0; 
} 
