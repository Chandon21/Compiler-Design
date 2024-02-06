#include <iostream>
using namespace std;
bool isNumeric(string str)
{
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false;
      return true;
}
int main()
{
   string str;
   cout << "Enter an input: ";
   cin >> str;
   if (isNumeric(str))
      cout << "Given Input is Numeric Constant" << endl;
   else
      cout << "Given Input is not Numeric Constant";
}
