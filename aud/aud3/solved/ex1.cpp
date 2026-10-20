/*
 * Exercise 1: Classifying a Character
 * ===================================
 *
 * Description
 * -----------
 * Write a program that reads a character from the keyboard and prints 1 if
 * it is a lowercase letter or 0 if it is an uppercase letter.
 *
 * Bonus
 * -----
 * Check whether the entered character is a digit.
 *
 * Input and Output
 * ----------------
 * Read one character.
 * Print the result of the requested check.
 *
 * Source
 * ------
 * aud/presentations/3.html#exercise-1, section 3.1.
 */

#include <iostream>
using namespace std;

int main()
{
    char character;
    cin >> character;

    // a e [a , z] = [a,b,c,d....z]
    if (character >= 'a' && character <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if (character >= 'A' && character <= 'Z')
    {
        cout << " uppercase" << endl;
    }
    else
    {
        cout << "not a letter"<<endl;
    }
    // else
    // {
    //     if (character >= 'A' && character <= 'Z')
    //     {
    //         cout <<" uppercase"<<endl;
    //     }
    //     else
    //     {
    //         cout << "not a letter"<<endl;
    //     }
    //
    // }
}
