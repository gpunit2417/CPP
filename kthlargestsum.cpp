//code studio
#include<algorithm>
int getKthLargest(vector<int> &arr, int n){
    vector<int> sumStore;
    int k = arr.size();
    for(int i = 0; i<k; i++){
        int sum =0;

        for(int j = i; j<k; j++){
            sum = sum+arr[j];
            sumStor.push_back(sum);
        }
    }
    sort(sumStore.begin(), sumStore.end());
    return sumStore(sumStore.size()-1);
}