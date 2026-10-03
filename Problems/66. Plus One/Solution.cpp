class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        suma(digits, n);
        return digits;
    }

    void suma(std::vector<int> & v, int n){
        v[n] += 1;
        if(v[n] > 9){
            v[n] = 0;
            if(n == 0){
                for(int i = n; i >= 0; i--){
                    int a = v[i];
                    v.push_back(a);
                }
                v[0] = 1;
                
                return;
            }
            suma(v, n - 1);
        }
    }
};
