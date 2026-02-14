#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter array size :";
    cin>>n;

    int arr[n];

    cout<<"enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"enter the target element :";
    cin>>target;

    bool found = false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                cout<<"matched "<<arr[i]<<" + "<<arr[j]
                    <<" is equal to "<<target<<endl;
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(!found){
        cout<<"No pair matched!";
    }

    return 0;
}
