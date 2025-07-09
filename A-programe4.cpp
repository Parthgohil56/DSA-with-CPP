#include <iostream>
using namespace std;

main()
{
    int marks;
    char grade;

    cout << "Enter Your Marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid Marks" << endl;
        return 0;
    }

    grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                              : (marks >= 70)   ? 'C'
                              : (marks >= 60)   ? 'D'
                              : (marks >= 50)   ? 'E'
                                                : 'F';

    cout << "Your Grade is " << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent Marks";
        break;
    case 'B':
        cout << "Well Done";
        break;
    case 'C':
        cout << "Good Job";
        break;
    case 'D':
        cout << "You Passed";
        break;
    case 'E':
        cout << "You Passed";
        break;
    case 'F':
        cout << "You Are Fail";
        break;

    default:
        cout << "Invalid Grade";
    }
}
