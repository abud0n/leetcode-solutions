class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = 0;
        if(haystack == needle){
            return 0;
        }
        for(;a + needle.length() - 1 < haystack.length(); ){
            if(haystack.substr(a, needle.length()) == needle){
                return a;
            }
            a++;
        }
        return -1;        
    }
};
