#include<iostream>
#include<vector>
using namespace std;
    void merge(vector <int> & nums1,int m,vector<int> & nums2,int n){
        int p1=m-1;
        int p2=n-1;
        int p=m+n-1;
        while(p1>=0 && p2>=0){
            if(nums1[p1]>nums2[p2]){
                nums1[p]=nums1[p1];
                p1--;
            }
            else{
                nums1[p]=nums2[p2];
                p2--;
            }
            p--;
        }
        while(p2>=0){
            nums1[p]=nums2[p2];
            p2--;
            p--;
        }
    };
    int main(){
    int m,n;
    cout << "Enter number of elements in nums1 (m): ";
    cin >> m;
    cout << "Enter number of elements in nums2 (n): ";
    cin >> n;
    vector<int> nums1(m + n);
    cout << "Enter " << m << " sorted elements for nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    vector<int> nums2(n);
    cout << "Enter " << n << " sorted elements for nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    merge(nums1, m, nums2, n);
    cout << " after adding two Merged Array the final araay : ";
    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
 }