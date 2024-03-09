#include <iostream>
using namespace std;

int main()
{
    int prev, current;
    bool first_input = true;

    // Get the first input
    cin >> prev;

    // Loop until the current input is greater than the previous input
    while (true) {
        // Get the current input
        cin >> current;

        // Check if the current input is less than the previous input
        if (current < prev) {
            // Print the current input without newline
            if (!first_input) {
                cout << " ";
            }
            cout << current;
            first_input = false;
        } else {
            // Print newline and stop the loop
            cout << endl;
            break;
        }

        // Update the previous input
        prev = current;
    }

    return 0;
}
