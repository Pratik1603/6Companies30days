#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
          int right=0, left=0,c=0;
    unordered_map<int, int> mp;
   
    while(right<fruits.size()){
        if(mp.find(fruits[right])==mp.end()){
            if(mp.size()==2){
                int ind = right-1, temp = fruits[ind];
               
                cout<<temp;
                while(ind>=0){
                    if(fruits[ind]!=temp){
                        mp.erase(fruits[ind]);
                        break;
                    }
                    ind--;
                }
                left = ind+1;
            }
            mp.insert({fruits[right], 1});
        }
     
        right++;
        c = max(c, right-left);
    }
    return c;
    }
};