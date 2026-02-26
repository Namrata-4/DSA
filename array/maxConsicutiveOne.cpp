#include<iostream>
#include<algorithm>
#include<climits>
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
    int count=0;
    // int mXcount=INT_MIN;
    int mXcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            mXcount=max(mXcount,count);
            count=0;
        }
        mXcount=max(mXcount,count);
    }
   cout<<"max consecutive ones "<<mXcount<<endl;
   return 0;
}