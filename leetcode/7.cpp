#include<bits/stdc++.h> 
// 7. Reverse Integer


class Solution {
public:
    int reverse(int x) {
        
        int ans = 0;
        
        while(x != 0)
        {
            int rem = x % 10;
            
//          to cantrol the overflow condition
            if((ans > INT_MAX/10) || (ans < INT_MIN/10))
            {
                return 0;
            }
            ans = ans * 10 + rem;
            x = x / 10;
        }
        return ans;
    }
};