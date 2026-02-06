#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[100];
    cout<<"enter array elemts :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    cout<<"after swapping the arrya is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}