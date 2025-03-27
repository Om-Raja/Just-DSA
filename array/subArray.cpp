//print subarrays
#include <iostream>
using namespace std;
void printSubArrays(int *arr, int n){
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            cout << "[";
            for(int k = start; k < end; k++){
                cout << arr[k] << " ";
            }
            cout << "] ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}; //21 subarrays possible (6 * 7) / 2
    printSubArrays(arr, 6);
    return 0;
}
// TC = big Oh of n cube