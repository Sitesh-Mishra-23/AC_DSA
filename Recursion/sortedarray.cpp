#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==0 || n==1) return true;
    
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
}

int main() {
    int arr[5]={1,2,345,4,5};
    int n =5;
    
    if(isSorted(arr,n)){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }

    return 0;
}