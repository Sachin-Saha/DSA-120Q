#include<iostream>
using namespace std;

int linearSearch(int arr[], int target, int n){
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            return arr[i];
        }
    }
    return -1;
}

int main(){
int arr[] = {2,3,4,5,6,8,10,13};
int target = 8;
int n = 8;

cout<<linearSearch(arr, target, n);
}