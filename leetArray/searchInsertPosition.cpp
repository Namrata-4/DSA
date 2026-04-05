#include<iostream>
#include<vector>
using namespace std;
int searchPosition(vector<int>&nums,int target){
    int low=0;
    int high=nums.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main(){
    vector<int>nums={1,3,5,6};
    int target;
    cout<<"the target element :";
    cin>>target;
    cout<<"the position of the target element :"<<searchPosition(nums,target);

}