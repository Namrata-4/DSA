#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c,n;
    cout<<"enter from where you wnat to print :";
    cin>>n;
    cout<<a <<b;
    for(int i=2;i<n;i++){
        c=a+b;
        cout<< c;
        a=b;
        b=c;
    }

}