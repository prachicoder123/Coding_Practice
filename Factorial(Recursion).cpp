#include<iostream>
using namespace std;
int Factorial(int n){
    while(n>0){
        return n*Factorial(n-1);
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<"Factorial of a Number is : "<<Factorial(n);
    return 0;S
}