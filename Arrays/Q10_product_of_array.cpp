#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);

    // if array is empty then return empty answer
    if(n==0){
        return {};
    }

    // prefix[i] = product of all element to the left of i
    for(int i=1; i<n; i++){
        ans[i] *= ans[i-1] * nums[i-1];
    }

    // suffix = product of element to the right
    int suffix = 1;
    for(int i = n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> productAns = productExceptSelf(nums);
     cout << "product of array is: ";
    for(int x : productAns){
        cout << x << " ";
    }
}