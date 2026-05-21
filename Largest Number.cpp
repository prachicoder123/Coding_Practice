#include<iostream>
using namespace std;
int greatest_num(int arr[],int n){//when array is passed into a  function it acts as a pointer 
    int greatest= arr[0];
    //int n = sizeof(arr)/sizeof(arr[0]) this satement give the size of pointer
    for(int i=1;i<n;i++){
        if(greatest<arr[i]){
            greatest = arr[i];
        }
    }
    return greatest;
}
int main(){
    int arr[7];
    cout<<"Enter the Element:"<<endl;
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cin>>arr[i];
    }
    cout<<"The greatest element is : "<<greatest_num(arr, n)<<endl;
    return 0;
    
}