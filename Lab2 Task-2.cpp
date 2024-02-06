#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    cout << "Enter input: ";
    cin >> input;

    cout << "Operators found in the input:" << endl;
    for (char c : input)
        {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%'|| c == '=')
            {
            cout << "Operator: " << c << endl;

        }
    }

    return 0;
}
