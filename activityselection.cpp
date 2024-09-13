// #include <iostream>
// using namespace std;

// void sort_ftime(int arr[], int n){
//     for(int i=0; i<n; i++){
// 		for(int j=0; j<n; j++){
// 			if(arr[j] > arr[j+1]){
// 				swap(arr[j+1], arr[j]);
// 			}
// 		}
//     }
	
// }

// void activity_selector(int start_time[], int finish_time[], int n)
// {
//     sort_ftime(finish_time, n);
    
//     int i = 0;
//     cout << i << " ";
//     for (int j = 1; j < n; j++)
//     {
//         if (start_time[j] >= finish_time[i])
//         {
//             cout << j << " ";
//             i = j;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "enter the size of stime array " << endl;
//     cin >> n;

//     cout << "enter the stime array elements " << endl;
//     int stime[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> stime[i];
//     }

//     cout << "enter the ftime array elements " << endl;
//     int ftime[n];
//     for (int j = 0; j < n; j++)
//     {
//         cin >> ftime[j];
//     }

//     sort_ftime(ftime, n);
//     cout<<"sorted array is "<<endl;
//     for(int x=0; x<n; x++){
//         cout<<ftime[x]<<" ";
//     }
//     cout<<endl;

//     cout<<"the selected activities are: "<<endl;
//     activity_selector(stime, ftime, n);

// }

#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
    return a.second.second<b.second.second;
}
int main(){
    int n;
    cout<<"Enter number of processes "<<endl;
    cin>>n;
    vector<pair<int,pair<int,int>>>task;
    for(int i=0;i<n;i++){
        int st,et;
        cout<<"Enter start time of process p"<<i+1<<"  "<<endl;
        cin>>st;
        cout<<"Enter end time of process p"<<i+1<<" "<<endl;
        cin>>et;
        
        task.push_back(make_pair(i+1,make_pair(st,et)));
    }
    sort(task.begin(),task.end(),compare);
    
    int count=0;
    int time=0;
    vector<int> arr;
    for(int i=0;i<n;i++){
        if(time==0){
            time=task[i].second.second;
            arr.push_back(task[i].first);
            count++;
        }
        else{
            if(task[i].second.first>=time){
                time=task[i].second.second;
                arr.push_back(task[i].first);
                count++;
            }
        }
    }
    cout<<"Total no. of processes run = "<<count<<endl;
    cout<<"Processes that ran was/were ";
    for(int i=0;i<count;i++){
        cout<<"p"<<arr[i]<<"  ";
    }
    cout<<endl;

    return 0;
}