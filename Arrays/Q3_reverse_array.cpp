#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
   int strt = 0 , end = n-1;
   while(strt < end){
    swap(arr[strt], arr[end]);
    strt++, end--;
   }
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int n = 7;
    reverseArray(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}