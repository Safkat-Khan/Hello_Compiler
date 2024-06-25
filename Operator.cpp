#include<iostream>
using namespace std;

int main()
{
    char input;
    cout << "Please Enter your operator sign : ";
    cin >> input;

    switch (input)
    {
    case '=':
        cout << " Assign operator " << endl;
        break;

    case '+=':
        cout << " Add and assign operator " << endl;
        break;

    case '||':
        cout << " Logical OR operator " << endl;
        break;

    case '&&':
        cout << " Logical AND operator " << endl;
        break;

    case '++':
            cout<<" Increment operator " << endl;
        break;

    case '--':
            cout<<" Decrement  operator " << endl;
        break;

    default:
        cout << "Unknown operator" << endl;
    }

    return 0;
