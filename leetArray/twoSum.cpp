#include<iostream>
#include<vector>
using namespace std;
int TwoSum(vector<int>&nums,int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                cout<<nums[i]<<"+"<<nums[j]<<endl;
            }
        }
    }
    return -1;
};
int main(){
    int target;
    cout<<"enter the target element :";
    cin>>target;
   vector <int> nums={1,2,3,5,6};
    cout<<"resul :"<<endl;
    TwoSum(nums,target);
    return 0;
}