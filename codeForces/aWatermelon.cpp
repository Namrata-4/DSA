#include<iostream>
using namespace std;
int main(){
    int w;
    cout<<"enter weighs of watermelon :";
    cin>>w;
    if(w%2==0 && w>2){
        cout<<"yes , the watermelon can be divided into two parts , and, each of them weighing even number of kilos"<<endl;
    }
    else {
        cout<<"No , the watermelon can't be divided into two parts , and, each of them can't weighing even number of kilos"<<endl;
    }
    return 0;
}