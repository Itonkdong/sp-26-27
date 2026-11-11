/*
 * Exercise 6: Summing Factorials of Cumulative Sums
 * =================================================
 *
 * Description
 * -----------
 * For a given natural number n, calculate the following sum.
 *
 * Expression
 * ----------
 *     1! + (1 + 2)! + (1 + 2 + 3)! + ... + (1 + 2 + ... + n)!
 *
 * Functions
 * ---------
 * Use one function to calculate the sum of the first k natural numbers and
 * another function to calculate the factorial of a natural number k.
 *
 * Input and Output
 * ----------------
 * Read n from the keyboard and print the calculated sum.
 *
 * Source
 * ------
 * aud/presentations/6.html#exercise-6, section 4.6.
 */

#include <iostream>
using namespace std;

int sum_first_k(int k)
{
    int sum = 0;
    for (int i = 1; i <= k; ++i)
    {
        sum = sum + i;
    }
    return sum;
}

int factorial(int k)
{
    int product = 1;
    for (int i = 1; i <= k; ++i)
    {
        product = product * i;
    }
    return product;
}


int main()
{
    int n;
    cin >> n;
    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        int sum_first_k_1 = sum_first_k(i);
        int partial_result = factorial(sum_first_k_1);
        result += partial_result;
    }

    cout << "Result = " << result;
}
