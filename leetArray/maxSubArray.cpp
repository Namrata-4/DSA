#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums){
    int n=nums.size();
    int current_sum=0;
    int largest_sum=0;
    for(int i=1;i<n;i++){
        current_sum=max(nums[i],current_sum+nums[i]);
        largest_sum=max(largest_sum,current_sum);
    }
    cout<<largest_sum;
    return 0;
};
int main(){
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<"result :";
    maxSubArray(nums);
}