// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int>&arr,int tar)
{
    int left=0,right=arr.size()-1,mid=0,firstInd=-1;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(arr[mid]==tar)
        {
            firstInd=mid;  //saving the temp first index
            right=mid-1; //searching for any other first Occurence
        }
        else if(arr[mid]>tar)right=mid-1;
        else if(arr[mid]<tar)left=mid+1;
    }
    return firstInd;
    
}
int lastOccurence(vector<int>&arr,int tar)
{
    int left=0,right=arr.size()-1,mid=0,lastInd=-1;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(arr[mid]==tar)
        {
            lastInd=mid;   //saving the temp last index
            left=mid+1; //searching for any other last Occurence
        }
        else if(arr[mid]>tar)right=mid-1;
        else if(arr[mid]<tar)left=mid+1;
    }
    return lastInd;
}
int main()
{
    int n,tar;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>tar;
    cout<<"The first Occurence of the number"<<tar<<" is "<<firstOccurence(arr,tar)<<endl;
    cout<<"The last Occurence of the number"<<tar<<" is "<<lastOccurence(arr,tar);
}
