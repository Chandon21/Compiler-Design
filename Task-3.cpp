#include <iostream>

using namespace std;

int main()

{

    string a,  b , result;

    cout << "Enter string string a: ";

    getline (cin, a);

    cout << "Enter string string b: ";

    getline (cin, b);

    result = a + b;

    cout << "Concatinate two string = "<< result;

    return 0;

}

