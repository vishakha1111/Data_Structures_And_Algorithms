#include <iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
string str;
cin >> str;
reverse(str.begin(), str.end());
cout << str << endl;
}
