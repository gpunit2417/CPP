//leetcode
class Solution{
    public:
    void movezeroes(vector<int> &nums){
        //what?
        //shift all non zero element to the left 
        int nonzero = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i], nums[nonzero]);
                nonzero++;
            }
        }
    }
};