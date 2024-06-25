#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool number = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (!isdigit(s[i]))
        {
            number = false;
            break;
        }
    }
    if(number){
        cout<<" Is Digit "<<endl;
    }
    else{
        cout<<" Not Digit "<<endl;
    }

    return 0;
}
