
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str = "Hello, World!";

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}