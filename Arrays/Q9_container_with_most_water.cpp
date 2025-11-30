#include<iostream>
using namespace std;

int mxWaterContainer(int height[], int n){
    int lp = 0, rp = n-1 , maxWater = 0;
    while(lp<rp){
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currentWater = width * ht;
        maxWater = max(maxWater , currentWater);

        height[lp]< height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;
    int ans = mxWaterContainer(height, n);
    cout<<"maximum water is : "<<ans;
}