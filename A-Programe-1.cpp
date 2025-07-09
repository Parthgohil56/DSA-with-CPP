#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"Enter A Number : ";
    cin>>num;
    if(num>0){
        cout<<num<<" is Positive....";
    }
    else if(num<0){
        cout<<num<<" is Negative....";
    }
    else{
        cout<<"Number is Zero";
    }
}