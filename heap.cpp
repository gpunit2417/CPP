#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deletion(){
        if(size == 0){
            cout<<"kya delete krega re tu"<<endl;
            return;
        }

        arr[1] = arr[size];

        size--;
        int i = 1;
        while(i<size){
            int left = 2*i;
            int right = 2*i + 1;

            if(left<size && arr[i] < arr[left]){
                swap(arr[i], arr[left]);
                i = left;
            }
            else if(right<size && arr[i] > arr[right]){
                swap(arr[i], arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

//max heap
void heapify(int arr[], int n, int index){
    int largest = index;
    int left = 2*index;
    int right = 2*index + 1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != index){
        swap(arr[largest], arr[index]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n){
    int size = n;
    while(size>1){
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}
int main(){
    heap h;
    h.insert(34);
    h.insert(45);
    h.insert(233);
    h.insert(78);
    h.insert(25);
    h.print();
    h.deletion(); 
    h.print();

    int arr[6] = {-1, 45, 34, 25, 233, 78};
    int n = 5;
    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }

    cout<<"printing "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    heapsort(arr, n);
    cout<<"printing "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<" max heap using priority queue"<<endl;
    priority_queue<int> pq;
    pq.push(34);
    pq.push(23);
    pq.push(78);
    pq.push(12);

    cout<<"top element "<<pq.top()<<endl;
    cout<<"size is "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"empty "<<endl;
    }
    else{
        cout<<"not empty "<<endl;
    }
    cout<<endl;
    cout<<"min heap using priority queue "<<endl;
    priority_queue<int, vector<int>, greater<int> > mh;
    mh.push(34);
    mh.push(23);
    mh.push(78);
    mh.push(12);

    cout<<"top element "<<mh.top()<<endl;
    cout<<"size is "<<mh.size()<<endl;
    if(mh.empty()){
        cout<<"empty "<<endl;
    }
    else{
        cout<<"not empty "<<endl;
    }
    return 0;
}

//code studio
//minheap
// void heapify(int arr[], int n, int index){
//     int smallest = index;
//     int left = 2*index;
//     int right = 2*index + 1;

//     if(left < n && arr[smallest] < arr[left]){
//         smallest = left;
//     }
//     if(right < n && arr[smallest] < arr[right]){
//         smallest = right;
//     }

//     if(smallest != index){
//         swap(arr[smallest], arr[index]);
//         heapify(arr, n, smallest);
//     }
// }

// vector<int> buildMeanHeap(vector<int> &arr){
//     int n = arr.size();
//     for(int i=n/2 - 1; i>0; i--){
//         heapify(arr, n, i);
//     }
//     return ans;
// }