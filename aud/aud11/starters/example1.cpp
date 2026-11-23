/*
 * Example 1: Swapping Values Through Pointers
 * ===========================================
 *
 * Description
 * -----------
 * This worked example uses a function with two pointer parameters to swap
 * two integer values.
 *
 * Input and Output
 * ----------------
 * Read two integers. Print their values before and after calling the swap
 * function.
 *
 * Example
 * -------
 *     Input: 3 7
 *     Before swap: 3 7
 *     After swap: 7 3
 *
 * Source
 * ------
 * aud/presentations/11.html#замена-со-покажувачи-swap-with-pointers
 * Section 1.1.
 */

#include <iostream>
using namespace std;

void swap (int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main()
{
    int a, b;
    if (!(cin >> a >> b)) {
        return 1;
    }

    cout << "Before swap: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swap: " << a << " " << b << endl;
    return 0;
}
