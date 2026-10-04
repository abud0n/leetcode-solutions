#include <cmath> //first medium problem solved! 
class Solution {
public:
    double myPow(double x, int n) {
        if(x == -1){
            if(n % 2 == 0){
                return 1;
            }
            else return -1;
        }

        if(n == 0){
            return 1;
        }
        if(n % 2 == 0){
            if(n < 0){
                double mitad = myPow(x, abs(n / 2));
                return 1 / (mitad * mitad);
            }
            double mitad = myPow(x, n / 2);
            return mitad * mitad;
        }
        if(n % 2 != 0){
            if(n < 0){
                
                return 1 / (x * myPow(x, abs(n + 1)));
            }
            return x * myPow(x, n - 1);
        }
        return 1;
    }
};
