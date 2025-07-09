#include<iostream>
using namespace std;
main(){
    int num;
    cout << "Enter A Number: ";
    cin >> num;
    if(num%2==0)
    {
        cout << num << " is Even" << endl;
        if(num%5==0)
        {
            cout << "Number is Divisible by 5" << endl;
        }
    }
     else{
        cout << num << " is Odd" << endl;
        if(num%5==0)
        {
            cout << "Number is Divisible by 5"<<endl;
        }
    }
}
