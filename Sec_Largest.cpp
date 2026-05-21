#include<iostream>
#include<climits>
using namespace std;
int sec_largest(int arr[],int n){
    int largest = arr[0];
    int sec_largest = INT_MIN;
    for(int i=1;i<n;i++){
    if(largest<arr[i]){
       
        sec_largest=largest;
         largest = arr[i];
    }
    if(sec_largest <arr[i] && largest!=arr[i] ){
        if(sec_largest<arr[i]){
            sec_largest =arr[i];
        }
    }
}
    return sec_largest;
    
}

int main(){
    int arr[]={23,34,56,67,78,78};
    int n =6;
    cout<<"Second largest Number is:"<<sec_largest(arr,n)<<endl;
    return 0;
}