#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"enter a number :";
    cin>>n;
    while(n>0){
        if(n==0){
            return 1;
        }
        else{
            n=n/10;
            ++count;
        }
    }
    cout<<"count of n :"<<count;
}