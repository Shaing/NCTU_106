#include <iostream>
using namespace std;
int x = 15;
int y = 3;

int main(int argc, char* argv[])
{
    x = x ^ y;
    cout << x << endl;
    y = x ^ y;
    cout << y << endl;
    x = x ^ y;
    cout << x << endl;
    cout << (y >> x) << endl;
    // cout == 1
    return 0;
}
