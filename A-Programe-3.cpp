#include<iostream>
using namespace std;
main(){

    float unit, bill;
    cout<<"Enter Units : ";
    cin >> unit;
    if(unit<=50){
        bill=unit*0.50;
    }
    else if(unit<=150){
        bill=25+(unit-50)*0.75;
    }
    else if(unit<=250){
        bill=100+(unit-150)*1.20;
    }
     else{
        bill=220+(unit-250)*1.5;
    }
    bill+=bill*0.20;
    cout<<bill;
}