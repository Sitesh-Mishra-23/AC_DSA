#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==0 || n==1) return true;
    
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
}

int binarySearch(int arr[],int st,int end,int target){
    if(st>end) return -1;
    while(st<=end){
        int mid =st+(end-st)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target){
            return binarySearch(arr,mid+1,end,target);
        }
        else{
            return binarySearch(arr,st,mid-1,target);
        }
    }
    return -1;
}

int main() {
    int arr[5]={1,2,3,4,5};
    int n =5;
    int st =0;
    int end =n-1;
    int target =1;
    int result  = binarySearch(arr,st,end,target);
    cout<<result;
    
    // if(isSorted(arr,n)){
    //     cout<<"Sorted";
    // }
    // else{
    //     cout<<"Not Sorted";
    // }

    return 0;
}