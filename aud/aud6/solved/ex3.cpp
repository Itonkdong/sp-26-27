/*
 * Exercise 3: Finding the Next Larger Prime
 * =========================================
 *
 * Description
 * -----------
 * For a given natural number n, find the first prime number strictly greater
 * than n and calculate the difference between that prime and n.
 *
 * Functions
 * ---------
 * Use functions to test primality and find the first prime strictly greater
 * than a given number.
 *
 * Examples
 * --------
 *     For input 573, the next larger prime is 577.
 *     The difference is 577 - 573 = 4.
 *
 * Input and Output
 * ----------------
 * Read n.
 * Print the next strictly larger prime and its difference from n.
 *
 * Source
 * ------
 * aud/presentations/6.html#exercise-3, section 4.3.
 */

#include <iostream>
using namespace std;

bool is_prime(int number)
{
    int counter = 0;
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
        {
            counter++;
        }
    }

    return counter == 2;
}

int closest_prime(int number)
{
    int start = number + 1;
    while (true)
    {
        if (is_prime(start))
        {
            break;
        }
        start++;
    }


    return start;
}

int main()
{
    int n;
    cin >> n;

    int closest_prime_1 = closest_prime(n);
    cout << "Closest prime of " << n << " is " << closest_prime_1;
}
