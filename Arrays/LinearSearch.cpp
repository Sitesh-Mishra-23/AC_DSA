#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int target){
    for(int i =0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[8]={1,2,3,45,213,423,22,12};
    int size=8;
    int target;
    cout<<"Enter Target Element:";
    cin>>target;
    int ans = LinearSearch(arr,size,target);
    if(ans!=-1){
        cout<<"Found at Index:"<<ans;
    }
    else{
        cout<<"Not Found";
    }
}