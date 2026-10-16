class Solution {
public:
//P = {N = v.size() 0 < N <= 3*10^4 /\ Pt. i : 0 <= i < N : -100 < nums[i] < 100}
//Invariante = {0 <= i < N /\ cont = #(Pt. j : 0 <= j < i : nums[j] = nums[i])} cambiar
//Q = {cont = #(Pt. i : 0 <= i < N - 1 : v[i] = v[i + 1])}
    int removeDuplicates(vector<int>& nums) {
        int N = nums.size();
        if(N == 1)
            return 1;
        int i = 1;
        while(i < N){
            if(nums[i - 1] == nums[i]){
                for(int j = i; j < N - 1; j++){
                    nums[j] = nums[j + 1];
                }
                N--;
            }else{
                i++;
            }
        }
        return i;
    }
};
