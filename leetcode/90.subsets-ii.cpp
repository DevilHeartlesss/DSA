// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem90.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
 void go(vector<int>&a,int idx,vector<vector<int>>&v,vector<int>temp){
    if(idx==a.size()){
        v.push_back(temp);
        return;

    }
    go(a,idx+1,v,temp);

    //pick 
    temp.push_back(a[idx]);
    go(a,idx+1,v,temp);
    temp.pop_back();
    // go(a,idx+1,v,temp);
 }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
     vector<vector<int>>v;
     vector<int>temp;

     go(a,0,v,temp);   
     return v;
    }
};
// @lc code=end

