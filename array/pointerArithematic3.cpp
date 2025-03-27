#include <iostream>
using namespace std;
int main()
{
    // ptr1 + ptr2 is invalid operation 
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr + 3; // should be pointing to 4 at index 3
    cout << *ptr << endl; // 4
    cout << (ptr - arr); // ans = 3
    return 0;
}