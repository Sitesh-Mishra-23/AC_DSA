#include<iostream>
using namespace std;

void reverse_array(int arr[],int size){
    int i = 0 ;
    int j = size-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    reverse_array(arr,size);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}