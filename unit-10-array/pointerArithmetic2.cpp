#include <iostream>
using namespace std;
// traversing array using constant addition in pointer
void traverseArray(int *arr, int length){
    for(int i = 0; i < length; i++){
        std::cout << *arr << " "; // printed using dereferencing the pointer
        arr++;
    }
    cout << endl;
}

void traverseArray2(int *arr, int length){
    for(int i = 0; i < length; i++){
        cout << *arr << " ";
        arr = arr + 1;
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    traverseArray(arr, sizeof(arr)/sizeof(int)); // 1 2 3 4 5
    traverseArray2(arr, sizeof(arr)/sizeof(int)); // 1 2 3 4 5
    
    return 0;
}