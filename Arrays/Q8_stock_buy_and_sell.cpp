#include<iostream>
using namespace std;

int StockBuyAndSell(int prices[], int n){
    int maxProfit = 0, bestBuy = prices[0];
    for(int i=0; i<n; i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}


int main(){
    int prices[] = {7,1,5,3,8,4};
    int n = 6;
    int profit = StockBuyAndSell(prices, n);
    cout<<"Maximum profit is : "<<profit;
}