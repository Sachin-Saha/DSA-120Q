#include<iostream>
#include<vector>
using namespace std;

// Brute force approach
vector<int> pairSum(vector<int> nums, int target){
    int n = nums.size();
    vector<int> ans;
  for(int i =0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int pairSumm = nums[i]+nums[j];
            if(pairSumm == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans ;
            }
       
        }
    } 
  return ans ; 
}

// Optimized Approach using 2 pointer 
vector<int> pairSum2pointer(vector<int> nums, int target2){
    vector<int> ans2;
    int n = nums.size();
  int i = 0, j = n-1;
  while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum > target2){
        j--;
        }else if(pairSum < target2){
        i++;
        }else{
        ans2.push_back(i);
        ans2.push_back(j);
        return ans2 ;
     }
  }
  return ans2 ;
}


int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    int target2 = 26;
    vector<int> ans = pairSum(arr, target);
    cout<<ans[0]<<" "<<ans[1];
    cout<<endl;
    vector<int> ans2 = pairSum2pointer(arr, target2);
    cout<<ans2[0]<<" "<<ans2[1];
}