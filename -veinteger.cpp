vector<long long int> printFirstNegativeInteger(long long int A[], long long int N, long long int K){
    deque<long long int>d;
    vector<long long> ans;

    for(int i=0; i<K; i++){
        if(A[i]<0){
            d.push_back(i);
        }
    }

    if(d.size()>0){
        ans.push_back(A[d.front()]);
    }
    else{
        ans.push_back(0);
    } 
    for(int i=K; i<N; i++){
        if(!d.empty() && i-d.front()>=K){       //removal logic
            d.pop_front();
        }
        if(A[i]<0){                             //addition
            d.push_back(i);
        }
        if(d.size()>0){                         //ans storing
            ans.push_back(A[d.front()]);
        }
        else{
            ans.push_back(0);
        } 
    } 
    return ans;
}
//gfg