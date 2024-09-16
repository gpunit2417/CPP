// #include<stdio.h>
// #include<sys/time.h>
// void swap(int *x,int *y)
// {
// int temp;
// temp=*x;
// *x=*y;
// *y=temp;
// }
// void generate_random(int a[],int n)
// { int i;
// srand(time(0));
// for(i=0;i<n;i++)
// a[i]=rand()%1000;
// }
// int Partition(int a[10],int l,int h)
// {
// int i,j,p;
// i=l;j=h+1; p=l;
// do{
// do{
//  i=i+1;
// }while(a[i]<a[p]);
// do{
// j=j-1;
// }while(a[j]>a[p]);
// swap(&a[i],&a[j]);
// }while(i<=j);
// swap(&a[i],&a[j]);
// swap(&a[l],&a[j]);
// return j;
// }
// int Quicksort(int a[10],int m,int n)
// {
// int s;
// if(m<n+1)
// {
// s=Partition(a,m,n);
// Quicksort(a,m,s-1);
// Quicksort(a,s+1,n);
// return a;
// }
// }
// int main()
// {
// int a[100000],i,ch,n;
// struct timeval t;
// double start,end;
// FILE *fp;
// printf("Enter the type of operation\n");
// printf("1-Randomly generate numbers and quicksort\n");
// printf("2-Enter the number of values to generate and sort\n");
// scanf("%d",&ch);
// switch(ch)
// {case 1:
//  fp=fopen("quicksort.txt","w");
//  for(i=10000;i<100000;i=i+5000)
//  {
// generate_random(a,i);
// gettimeofday(&t,NULL);
// start=t.tv_sec+(t.tv_usec/1000000.0);
// Quicksort(a,0,i-1);
// gettimeofday(&t,NULL);
// end=t.tv_sec+(t.tv_usec/1000000.0);
// printf("%d\t%lf\n",i,end-start);
// fprintf(fp,"%d\t%lf\n",i,end-start);
// }
// fclose(fp); break;
// case 2:printf("Enter the number of values to be generated\n");
//  scanf("%d",&i);
//  generate_random(a,i);
//  gettimeofday(&t,NULL);
// start=t.tv_sec+(t.tv_usec/1000000.0);
// Quicksort(a,0,i-1);
// gettimeofday(&t,NULL);
// end=t.tv_sec+(t.tv_usec/1000000.0);
// printf("%d\t%lf\n",i,end-start);
// printf("Sorted numbers are\n");
// printf("The sorted array is\n");
// for(n=0;n<i;n++)
// printf("%d\t",a[n]);
// break;
//  default: printf("Invalid choice\n");
// }
// return 0; }


#include <cstdlib>
#include<time.h>
#include<iostream>
using namespace std;

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionSort(int arr[], int n){
	int i, j, min_idx;
	for (i = 0; i < n-1; i++){
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx]){
            min_idx = j;
        }
		if(min_idx!=i){
			swap(&arr[min_idx], &arr[i]);
        }
	}
}

void insertionSort(int arr[], int n){
	int i, key, j;
	for (i = 1; i < n; i++)			//index is from 0
{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void bubbleSort(int arr[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

int maximum(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int n){
    int i, j;
    int max = maximum(arr, n);
    int *count = (int *) malloc((max+1)*sizeof(int));
    for(i=0; i<max+1; i++){
        count[i] = 0;
    }
    for(i=0; i<n; i++){
        count[arr[i]] ++;
    }
    i=0;
    j=0;
    while(i<max+1){
        if(count[i]>0){
            arr[j] = i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
    }
}

void printArray(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int MyNumber;
	cout<<"Enter the array size number::";
	cin>>MyNumber;
	int Rand[MyNumber];
	if(MyNumber < 25){
		cout<<"enter the array element"<<endl;
		for(int i = 0; i<MyNumber; i++){
			cin>>Rand[i];
		}
		cout<<endl;
	}
	else{     									//10 is written just to avoid error otherwise MyNumber was written here
		srand(time(NULL)); 						// generate random numbers every time.... if don't use same numbers will come...
		for(int r= 0; r <MyNumber; r++){
			Rand[r]=rand()%1000;
		}
		cout<<"Array Elements::"<<endl;
		for(int r=0; r<MyNumber ; r++){
			cout<<Rand[r]<<" ";
		}
	}
	int start = clock();
	cout<<endl;
	cout<<"sorted array is "<<endl<<endl;
	cout<<"by selection sort "<<endl;
	selectionSort(Rand, MyNumber);
	printArray(Rand, MyNumber);
	int end = clock();
	cout<<""<<endl;
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken ;
    cout << " sec " << endl;
	cout<<endl;

	int start1 = clock();
	cout<<"by insertion sort"<<endl;
	insertionSort(Rand, MyNumber);
	printArray(Rand, MyNumber);
	int end1 = clock();
	cout<<endl;
	double time_taken1 = double(end1 - start1) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken1 ;
    cout << " sec " << endl;
	cout<<endl;

	int start2 = clock();
	cout<<"by bubble sort"<<endl;
	bubbleSort(Rand, MyNumber);
	printArray(Rand, MyNumber);
	int end2 = clock();
	cout<<endl;
	double time_taken2 = double(end2 - start2) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken2 ;
    cout << " sec " << endl;
	cout<<endl;

	int start3 = clock();
	cout<<"by counting sort"<<endl;
	countingSort(Rand, MyNumber);
	printArray(Rand, MyNumber);
	int end3 = clock();
	cout<<endl;
	double time_taken3 = double(end3 - start3) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken3 ;
    cout << " sec " << endl;
	cout<<endl;
	
	// int start4 = clock();
	// cout<<"by counting sort"<<endl;
	// quickSort(Rand, MyNumber);
	// printArray(Rand, MyNumber);
	// int end4 = clock();
	// cout<<endl;
	// double time_taken4 = double(end4 - start4) / double(CLOCKS_PER_SEC);
    // cout << "Time taken by program is : " << fixed << time_taken4 ;
    // cout << " sec " << endl;
	// cout<<endl;



	return 0;
}