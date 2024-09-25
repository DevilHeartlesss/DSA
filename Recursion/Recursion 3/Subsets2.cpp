#include<iostream>
#include<vector>
#include<string>
using namespace std;
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