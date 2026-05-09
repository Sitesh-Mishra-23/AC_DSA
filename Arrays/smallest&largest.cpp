#include<iostream>
#include<climits>
using namespace std;

int main(){
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int arr[7]={1,23,12,43,56,99,157};

    for(int x:arr){
        if(x<smallest){
            smallest=x;
        }
        else if (x>largest){
            largest=x;
        }
    }

    cout<<"Largest element ="<<largest<<endl;
    cout<<"Smallest element="<<smallest;
}
