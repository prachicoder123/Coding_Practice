#include<iostream>
using namespace std;
int reverse_num(int n){
    int digit,reverse =0;
    while(n>0){
        digit = n%10; //last digit
        reverse = reverse * 10 + digit;
        n=n/10;
    }
    return reverse;
}
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    cout<<"Reverse number is : "<<reverse_num(n)<<endl;
    return 0;
}