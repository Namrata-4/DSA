#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>&height){
    int n=height.size();
    int max_water=0;
    int left=0;
    int right=n-1;
    while(left<right){
        int width=right-left;
        int current_h=min(height[left],height[right]);
        int current_area=width*current_h;
        max_water=max(max_water,current_area);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<max_water;
    return 0;
};
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"result :";
    maxArea(height);
}