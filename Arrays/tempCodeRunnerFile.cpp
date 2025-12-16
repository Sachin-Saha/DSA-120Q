int twoSum(vector<int> &arr, int target){
    int n = arr.size();
    vector<int> ans;
    for(int i= 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = arr[i] + arr[j];
            if(sum == target){
                ans.push_back(i);                
                ans.push_back(j);  
                return ans;              
            }

        }
    }
    return -1 ;
}