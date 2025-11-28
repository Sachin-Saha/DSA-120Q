#include<iostream>
#include<vector>
using namespace std;


// moore's algorithm
int majorityElement(vector<int> nums,int n){
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++){
            if(freq==0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
            freq--;
        }
        
    }

    int count = 0;
    for(int val :nums){
        if(val == ans){
            count++;
        }
    }

    if(count>n/2){
       return ans;
    }else{
    return -1;
    }
    return ans;
    
}

int main(){
    vector<int> arr = {3,3,2,1,1,3,3};
    int n = arr.size();

   int ans = majorityElement(arr, n);
   cout<<ans;

}