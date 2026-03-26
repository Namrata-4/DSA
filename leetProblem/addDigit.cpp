#include<iostream>
using namespace std;
int addDigit(int number){
    if(number==0) return 0;
    if(number%9==0) return 9;
    return number%9;
}
int main(){
    int number;
    cout<<"enter a number :";
    cin>>number;
    cout<<"added number form the given number :"<<addDigit(number)<<endl;
}