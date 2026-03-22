#include<iostream>
using namespace std;
int main(){
    int t;
    int tcount=0;
    cout<<"enter how many teams you wnat to form :";
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            tcount++;
        }
    }
    cout<<tcount<<endl;
    return 0;
}