#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int magicalString(int n) {
        if(n <= 3) return 1;
        string s = "122";
        int cnt = 1;
        int i = 2;
        int next_to_add = 1;
        while(s.size() < n){
            if(s[i] == '2'){
                if(next_to_add == 1) s += "11" , cnt += 2;
                else s += "22";              
            }
            else{
                if(next_to_add == 1) s += "1" , cnt += 1;
                else s += "2";
            }
            if(next_to_add == 1) next_to_add = 2;
            else next_to_add = 1;
            i++;
        }
        int diff = s.size() - n;
        i = s.size() - 1;
        while(i >= 0 && diff > 0){
            if(s[i--] == '1') cnt--;
            diff--;
        }
        return cnt;
    }
};