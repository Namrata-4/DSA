#include<iostream>
using namespace std;
bool divisorGame(int n){
    return n%2==0;
}
int main(){
    int n;
    cout<<"enter number of chalkboard :";
    cin>>n;
    if(divisorGame(n)){
        cout<<" TRUE! Alice wins the game"<<endl;
    }
    else{
        cout<<"FALSE!"<<endl;
    }
    return 0;
}