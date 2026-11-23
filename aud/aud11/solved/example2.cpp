/*
 * Example 2: Finding Array Bounds Through Pointer Parameters
 * ==========================================================
 *
 * Description
 * -----------
 * This worked example finds the minimum and maximum values in an array. The
 * function returns both results through pointer parameters.
 *
 * Input and Output
 * ----------------
 * Read the array size, from 1 to 100, followed by its integer elements.
 * Print the minimum and maximum values.
 *
 * Example
 * -------
 *     Input: 5
 *     4 -5 12 0 7
 *     Minimum value: -5
 *     Maximum value: 12
 *
 * Source
 * ------
 * aud/presentations/11.html#пронаоѓање-на-минимална-и-максимална-вредност-во-низа-со-покажувачи
 * Section 1.2.
 */

#include <iostream>
using namespace std;

void findMinAndMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int array[100];
    int i,n;
    cin>>n;
    int min = 0, max = 0;
    for(i=0; i<n; i++) {
        cin >> array[i];
    }
    
    findMinAndMax(array, n, &min, &max);
    
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    return 0;
}
