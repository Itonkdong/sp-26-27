/*
 * Example 2: Updating a Value Through a Text Menu
 * ===============================================
 *
 * Description
 * -----------
 * This worked switch-case example reads an initial integer
 * value and repeatedly displays a menu for changing it.
 *
 * Output Format
 * -------------
 *     1 - Increase
 *     2 - Decrease
 *     3 - Double
 *     0 - Exit
 *
 * Menu Behavior
 * -------------
 * Choice 1 increases the value by 1, choice 2
 * decreases it by 1, and choice 3 doubles it.
 * Prompt again for a menu choice outside 0-3.
 * Choice 0 prints "End" and exits the menu.
 *
 * Input and Output
 * ----------------
 * Read the initial value, followed by menu choices.
 * Print the current value after processing each valid choice.
 * Repeat until the user selects 0.
 *
 * Source
 * ------
 * aud/presentations/5.html#example-for-choosing-from-a-text-menu,
 * section 3.2.
 */

#include <iostream>
using namespace std;

int main()
{
    int value, choice;
    cout << "Enter the initial value: ";
    cin >> value;

    do
    {
        do
        {
            cout << "Menu:" << endl;
            cout << "1 - Increase" << endl;
            cout << "2 - Decrease" << endl;
            cout << "3 - Double" << endl;
            cout << "0 - Exit" << endl;
            cout << "Choice: ";
            cin >> choice;
        }
        while (choice < 0 || choice > 3);

        switch (choice)
        {
            case 1:
                value++;
                break;
            case 2:
                value--;
                break;
            case 3:
                value *= 2;
                break;
            case 0:
                cout << "End" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        cout << "Value = " << value << endl;
    }
    while (choice != 0);

    return 0;
}
