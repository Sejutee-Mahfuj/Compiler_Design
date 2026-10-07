// 1.Numeric Constant or Not.
#include <iostream>
#include <string>
using namespace std;

void checkNumeric(string value)
{
    int count= 0;
    int total = 0;

    for(char ch : value)
    {
        total++;
        if(ch>='0' && ch<='9')
        {
            count++;
        }

    }
    if (count==total)
    {
         cout<<"numeric value"<<endl;
    }
    else
        {
            cout<<"not numeric value"<<endl;
        }
}
// 2.Operators or Not



void checkOperator(string value);
{
    int count=0;

    for(char:value)
    {
        if (ch=='+'|| ch=='-'|| ch=='-'||| ch=='*'|| ch=='%'|| ch=='&'|| ch=='=')
        {
            count++;
            cout<<operator<<count<<":"<<ch<<endl;
        }
    }
}



// 3. Comment
void checkComment(string value)
{
    int total = 0;

    for(char ch : value)
    {
        total++;
    }

    if(total >= 2)
    {
        if(value[0] == '/' && value[1] == '/')
        {
            cout << "Single Line Comment" << endl;
        }
        else if(value[0] == '/' && value[1] == '*' &&
                value[total-2] == '*' && value[total-1] == '/')
        {
            cout << "Multiple Line Comment" << endl;
        }
        else
        {
            cout << "Not a Comment" << endl;
        }
    }
    else
    {
        cout << "Not a Comment" << endl;
    }
}

// 4. Identifier
void checkIdentifier(string value)
{
    int count = 0;
    int total = 0;

    for(char ch : value)
    {
        total++;

        if((ch >= 'A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z') ||ch == '_')
        {
            count++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            count++;
        }
    }

// First character must be alphabet or underscore
    if(value[0] >= 'A' && value[0] <= 'Z' ||value[0] >= 'a' && value[0] <= 'z' ||value[0] == '_')
    {
        if(count == total)
        {
            cout << "Identifier" << endl;
        }
        else
        {
            cout << "Not an Identifier" << endl;
        }
    }
    else
    {
        cout << "Not an Identifier" << endl;
    }
}

int main()
{
    string value;

    cout << "Enter a value for Numeric Constant: ";
    cin >> value;
    checkNumeric(value);

    cout << endl;

    cout << "Enter a value for Operator: ";
    cin >> value;
    checkOperator(value);

    cout << endl;

    cout << "Enter a comment: ";
    cin >> value;
    checkComment(value);

    cout << endl;

    cout << "Enter a value for Identifier: ";
    cin >> value;
    checkIdentifier(value);

    return 0;
}
