class Queue{
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue(){
        size= 10001;
        arr=new int(size);
        front=0;
        rear=0;
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    int enqueue(int data){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]==data;
            rear++;       }
    }

    int dequeue(int data){
        if(front==rear){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front]= -1;
            front++;
            if(front==rear){
                front= 0;
                rear= 0;
            }
            return ans;
        }
    }
    int front(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
//time complexity is O(1)
//code studio