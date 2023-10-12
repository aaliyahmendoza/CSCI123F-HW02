
#include <iostream>
using namespace std;

int main() {
// declare userItems (int)
    int userItem;
// display items message
    cout << "How many items? "; 
 // user input
    cin >> userItem;

// declare new var to start at 1, initialize double sub
    int itemNum = 1;
    double subtotal = 0.0;

// while loop, items need to be > 0
    while(userItem > 0) {
    // display text and start at itemNum
        cout << "Please enter the cost of item #" << itemNum << ": $";
    // input could be a decimal
        double itemCost;
    // user input for cost
        cin >> itemCost;

        subtotal += itemCost;

    // increment num of items to display
        itemNum++;
    // decrement userItems to print userItems x times
        userItem--;
    }

    cout << "Subtotal: $" << subtotal << endl;

    double salesTax = 0.0775;
    cout << "Tax(7.75%): $" << salesTax * subtotal << endl;

    cout << "Total: $" << subtotal + (salesTax * subtotal) << endl;

// Loop for payment (if incorrect, user = prompted -> payment selection)
    char payment;
    while(true) {
        cout << "Cash or credit? Enter 'C' for Cash or 'T' for Credit:" << endl;
        cin >> payment; 

        if (payment == 'C' || payment =='T' || payment == 'c' || payment == 't') {
            break;
        } else {
            cout << "Incorrect selection…" << endl;
        }
    }

    return 0;
}

