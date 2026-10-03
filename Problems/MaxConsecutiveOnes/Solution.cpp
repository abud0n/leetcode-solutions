class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int aux = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                if(aux > l){
                    l = aux;
                }
                aux = 0;
            }
            else{
            aux++;
            }
        }
        if(aux > l){
            l = aux;
        }
        return l;
    }
};
