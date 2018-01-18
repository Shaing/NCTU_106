#include <iostream>  
#include <bitset>  
using namespace std;  
int a[10] = {8, 15, 23, 30, 7, 2, 10, 13, 6, 5};
  
int func(int* p, int n)
{
    int i, j;
    for(i = 0, j = 0; i < n; i += 2)
    {
        if(*(p + i) < 10)
            j++;
    }
    return j;
}

int main() 
{
    cout << func(a, 10) << endl;
    //cout == 3
    return 0;
} 