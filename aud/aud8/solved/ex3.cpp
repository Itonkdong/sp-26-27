/*
 * Exercise 3: Scalar Product of Two Vectors
 * =========================================
 *
 * Description
 * -----------
 * Calculate the scalar product of two vectors, each with n coordinates.
 *
 * Input and Output
 * ----------------
 * Read n, then the n coordinates of the first vector, then the n coordinates
 * of the second vector. Print their scalar product.
 *
 * Source
 * ------
 * aud/presentations/8.html#задача-3
 * Section 2.3.
 */

#include <iostream>
using namespace std;

int main()
{
    int vector1[100];
    int vector2[100];
    int dimension;

    cin >> dimension;

    for (int i = 0; i < dimension; ++i)
    {
        cin >> vector1[i];
    }

    for (int i = 0; i < dimension; ++i)
    {
        cin >> vector2[i];
    }

    int dot_product = 0;

    for (int i = 0; i < dimension; ++i)
    {
        dot_product += vector1[i] * vector2[i];
    }

    cout << "Dot product = " << dot_product;
}
