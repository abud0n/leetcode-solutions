#include <cmath>
#include <algorithm>
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int i = 0;
        if(arr.size() <= 2)
            return true;
        std::sort(arr.begin(), arr.end());
        while(i + 2 < arr.size()){
            if(abs(arr[i] - arr[i + 1]) != abs(arr[i + 1] - arr[i + 2])){
                return false;
            }
            i++;
        }
            return true;
        
    }
};
