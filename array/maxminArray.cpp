#include<iostream>
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
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if (arr[i]<min)
        {
           min=arr[i];
        }
        
    }
    cout<<"array max and min elements :"<<max<< "and" <<min;
}