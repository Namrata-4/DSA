#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter array elemts :";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int large=arr[0];
    int seclarge=arr[0];
    for(int i=1;i<n;i++){
      if(arr[i]>large){
        seclarge=large;
        large=arr[i];
      }
      else if (arr[i]>seclarge && arr[i]!=large)
      {
        seclarge=arr[i];
      }
    }
    cout<<"from the array largest and secondLargest elemts are :"<<large <<" and "<<seclarge;
}