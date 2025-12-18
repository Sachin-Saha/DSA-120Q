#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// brute force approach
vector<int> twoSum(vector<int> &arr, int target){
    int n = arr.size();
    vector<int> ans;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;  
            }
        }
    }
    return ans; // print empty space, if target not found
}

// better approach using map 
vector<int> twoSumUsingMap(vector<int> &arr, int target){
    int n = arr.size();
    map<int,int>mpp;
    for(int i = 0; i<n; i++){
        int first = arr[i];
        int second = target - first;
        if(mpp.find(second) != mpp.end()){
            return {mpp[second], i};
        }
        mpp[first] = i;
    }
    return {-1,-1};
}

// better approach using two pointer 
vector<int> twoSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());   

    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {arr[left], arr[right]};
        } 
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
    return {};
}


int main(){
    vector<int> arr = {2,7,11,5};
    int target = 9;

    vector<int> ans = twoSum(arr,target); // brute force approach
    vector<int> ans1 = twoSumUsingMap(arr,target); // map approach 
    vector<int> ans2 = twoSum(arr,target); // map approach 
    
    cout<<ans[0]<<","<<ans[1]; // ans of brute force approach
    cout<<endl;
    cout<<ans1[0]<<","<<ans1[1]; // ans of map approach
    cout<<endl;
    cout<<ans1[0]<<","<<ans2[1]; // ans of two pointer approach

}