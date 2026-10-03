class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int> v;
        int N = nums.size() / 2;
        for(int i = 0; i < N; i++){
            v.push_back(nums[i]);
            v.push_back(nums[N + i]);
        }
        return v;
    }
};
