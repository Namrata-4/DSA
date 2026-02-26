#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"neter arrya elemnts :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t=n/2;
    vector<int> shuArr(n);
    for(int i=0;i<t;i++){
        shuArr[2*i]=arr[i];
        shuArr[2*i+1]=arr[i+t];
    }
    for (int i=0;i<n;i++){
        cout<<shuArr[i]<<" ";
    }
    return 0;
}