#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>&s){
    int left=0;
    int right=s.size()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}
int main(){
    vector<char> s= {'h','e','l','l','o'};
   reverseString(s);
    cout<<"the reversed sting of the given string :";
    for(char c: s){
        cout<<c;
    }
    cout<<endl;
    return 0;
}