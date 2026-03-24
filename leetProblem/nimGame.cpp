#include<iostream>
using namespace std;
 bool canWinNim(int n){
        return n%4!=0;
    }
int main(){
    int n;
    cout<<"enter number of stones :";
    cin>>n;
    if(canWinNim(n)){
        cout<<"you can win !"<<endl;
    }
    else{
        cout<<"you will lose !"<<endl;
    }
    return 0;
}