#include<bits/stdc++.h>
using namespace std;
int singleElement(vector<int>&nums)
    {
        if(nums.size()==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
        int left=1,right=nums.size()-2,startInd=-1,mid=0;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            else 
            {
                if(nums[mid]==nums[mid-1])
                {
                    startInd=mid-1;
                }
                else
                {
                    startInd=mid;
                }
            }
            if(startInd%2==0) left=mid+1;
            else if(startInd%2==1) right=mid-1;
        }
        return -1;
    }
    int main(){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        cout<< singleElement(nums);
    }
