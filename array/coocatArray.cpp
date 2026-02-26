#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter array elemts :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   vector <int>rseArr(2*n);
    for(int i=0;i<n;i++){
        rseArr[i]=arr[i];
        rseArr[i+n]=arr[i];
    }
    for(int i=0;i<2*n;i++){
        cout<<rseArr[i]<<" ";
    }
    return 0;
};