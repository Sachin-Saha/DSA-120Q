#include<iostream>
#include<vector>
using namespace std;

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

int main(){
    vector<int> arr = {2,7,11,5};
    int target = 9;

    vector<int> ans = twoSum(arr,target);
    cout<<ans[0]<<","<<ans[1];

}