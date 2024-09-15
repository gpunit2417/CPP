//code studio
int maximumFrequency(vector<int> &arr, int n){
    unordered_map<int, int> m;
    int maxFreq = 0;
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        m[arr[i]]++;
        maxFreq = max(maxFreq, m[arr[i]]);
    }

    for(int i=0; i<arr.size(); i++){
        if(maxFreq == m[arr[i]]){
            ans = arr[i];
            break;
        }
    }
    return ans;
}