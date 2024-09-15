//code studio
#include<algorithm>
int getKthLargest(vector<int> &arr, int k){
    vector<int> sum;
    for(int i=0; i<arr.size(); i++){
        int sum=0;
        for(int j=i; j<arr.size(); j++){
            sum = sum + arr[j];
            sum.push_back(sum);
        }
    }
    sort(sum.begin(), sum.end());
    return  sum[sum.size() - k];
}


//another approach
#include<queue>
int getKthLargest(vector<int> &arr, int k){
    priority_queue<int, vector<int>, greater<int> > mini;
    for(int i=0; i<arr.size(); i++){
        int sum=0;
        for(int j=0; j<arr.size(); j++){
            sum = sum + arr[i];
            if(mini.size() < k){
                mini.push_back(sum);
            }
            else{
                if(sum > mini.top()){
                    mini.pop();
                    mini.push_back(sum);
                }
            }
        }
    }
    return mini.top();
}