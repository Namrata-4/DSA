#include<iostream>
#include<vector>
using namespace std;
int climbStairs(int num){
    if(num<=2) return num;
    vector <int> dp(num+1);
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=num;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[num];
}
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;
    cout<<"climbing stairs :"<<climbStairs(num)<<endl;
}