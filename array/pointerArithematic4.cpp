//comparision operator with pointers
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr1 = arr; //pointing to 0th index
    int *ptr2 = ptr1 + 3; // points to 4 @index 3
    //so ptr2 has greater memory location than ptr1
    //hence
    cout << (ptr1 < ptr2); // true
    cout << (ptr1 > ptr2); // false
    cout << (ptr1 == ptr2); // false
    cout << (ptr1 == arr); // true
    //1 0 0 1

    return 0;
}