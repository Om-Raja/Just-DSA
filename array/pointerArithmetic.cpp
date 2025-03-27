//pointer arithmetic
#include <iostream>
using namespace std;
int main()
{
    char a = 'v';
    // int *ptr = NULL;
    char *ptr2 = &a;
    cout << ptr2;
    // ptr++;
    ptr2++;
    // cout << ptr;
    cout << ptr2;
    return 0;
}

//unexpected behavior