#include<bits/stdc++.h>
using namespace std;
int thirdLargest(vector<int> & arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-3];
}
int main(){
    vector<int> arr={1,34,2,67,20,56};
    cout<<"third largest from the array ="<<thirdLargest(arr)<<endl;
    return 0;
}