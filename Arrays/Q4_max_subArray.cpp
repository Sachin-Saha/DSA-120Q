#include<iostream>
#include<climits>
using namespace std;


// brute force appraoch 
int maxSubArray(int arr[], int n){
    int maxSum = INT_MIN;
    for(int strt = 0 ; strt<n; strt++){
        int currSum = 0;
        for(int end = strt; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum ;
}

// Kadane's Algorithm
int maxSubArrayKadane(int arr[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i= 0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    return maxSum;
}


int main(){
    // int arr[] = {3,4,6,2,3,1};
    int arr[] = {3,-4,5,4,-1,7,8};
    int n = 7;

    // cout<<maxSubArray(arr, n);
    cout<<maxSubArrayKadane(arr, n);
}