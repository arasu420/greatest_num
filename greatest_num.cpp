#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << "Enter the 1st num: ";
cin >> a;
cout << "Enter the 2st num: ";
cin >> b;
cout << "Enter the 3st num: ";
cin >> c;
if(a>b && a>c)
{
    cout << a << " is greater";
}
else if(b>c)
{
    cout << b << " is greater ";
}
else
{
    cout << c << " is greater ";
}
return 0;
}