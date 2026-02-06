#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter array elemts :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum of all elemts in an array :"<<sum;
}