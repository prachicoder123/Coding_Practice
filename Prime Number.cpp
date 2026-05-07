#include<iostream>
using namespace std;
bool is_Prime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n ;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    if(is_Prime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime" ;
    }
    return 0;
    
}