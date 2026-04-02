#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int minPrice=INT_MAX;
    int maxProfit=0;
    for(int price:prices){
        minPrice=min(minPrice,price);
        maxProfit=max(maxProfit,price-minPrice);
    }
    cout<< maxProfit;
    return 0;
};
int main(){
    vector<int>prices={7,1,5,3,6,4};
    cout<<"resut :"<<endl;
    maxProfit(prices);
    return 0;
};