#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }

    int target;
    cout<<"Enter target element: ";
    cin>>target;

    bool found = false;

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout<<"Matched";
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(found) break;
    }

    if(!found){
        cout<<"Not matched";
    }

    return 0;
}
