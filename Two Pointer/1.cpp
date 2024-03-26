#include<iostream>
#include<vector>

// class Solution {
// public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>alfaiz;
        
        int start=0,end=numbers.size()-1;
        
        while(start<end){
            if(numbers[start]+numbers[end] == target){
                alfaiz.push_back(start+1);
                alfaiz.push_back(end+1);
                return alfaiz;
            }
            else if(numbers[start]+numbers[end] < target){
                    start++;
            }
                    else {
                    end--;
                    }
        }
        return alfaiz;
    }
};