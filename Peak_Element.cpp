#include<bits/stdc++.h>
using namespace std;
int findPeak(vector<int> &arr)
{
    if(arr.size()==1)return arr[0];
    if(arr[0]>arr[1])return arr[0];
    if(arr[arr.size()-1]>arr[arr.size()-2])return arr[arr.size()-1];
    int left=1,mid=0,right=arr.size()-2;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(arr[mid+1]<arr[mid] && arr[mid-1]<arr[mid]) return arr[mid];
        else if(arr[mid]>arr[mid+1]) right=mid-1;
        else if(arr[mid]<arr[mid+1]) left=mid+1;
    }
    return arr[mid];
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findPeak(arr);
}
