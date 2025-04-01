#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayMenu() {
    cout << "\t\t\tWelcome to Mc'Bee!" << endl;
    cout << "Our Menu:" << endl;
    
    // Categories
    cout << "\n--- Main Course ---" << endl;
    cout << "1. Burger - $5.00 - A delicious beef patty with lettuce, tomato, and cheese." << endl;
    cout << "2. Pizza - $8.00 - Freshly baked with a choice of pepperoni, cheese, or veggie toppings." << endl;
    cout << "3. Fries - $2.50 - Crispy golden fries, perfect as a side dish." << endl;

    cout << "\n--- Drinks ---" << endl;
    cout << "4. Soda - $1.50 - Refreshing soda in a variety of flavors." << endl;
    
    cout << "\n--- Desserts ---" << endl;
    cout << "5. Ice Cream - $3.00 - Creamy vanilla ice cream with your choice of topping." << endl;

    cout << "\nPlease kindly select your order (1-5): ";
}

void processOrder(int order, int quantity, double &total) {
    double price = 0.0;
    string itemName;

    switch (order) {
        case 1:
            itemName = "Burger";
            price = 5.00;
            break;
        case 2:
            itemName = "Pizza";
            price = 8.00;
            break;
        case 3:
            itemName = "Fries";
            price = 2.50;
            break;
        case 4:
            itemName = "Soda";
            price = 1.50;
            break;
        case 5:
            itemName = "Ice Cream";
            price = 3.00;
            break;
        default:
            cout << "Invalid choice, please try again." << endl;
            return;
    }

    double totalPrice = price * quantity;
    cout << "You have selected " << quantity << " " << itemName << "(s)." << endl;
    cout << "The cost for this item is: $" << fixed << setprecision(2) << totalPrice << endl;
    total += totalPrice;
}

// Function to apply discount
void applyDiscount(double &total) {
    if (total >= 20.00) {
        double discount = total * 0.10;
        total -= discount;
        cout << "\nYou've earned a 10% discount! Discount applied: -$" << fixed << setprecision(2) << discount << endl;
    }
}

// Function to handle the order flow
void orderFlow() {
    int ord, qua;
    char continueOrder;
    double total = 0.0;

    do {
        // Display the menu
        displayMenu();
        cin >> ord;

        cout << "How many would you like to order? ";
        cin >> qua;

        processOrder(ord, qua, total);

        // Ask if the user wants to continue ordering
        cout << "\nWould you like to order something else? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    // Apply discount if applicable
    applyDiscount(total);

    // Display the final total with tax
    double tax = total * 0.08;
    double finalTotal = total + tax;

    cout << "\n--- Your Final Order Summary ---" << endl;
    cout << "Subtotal: $" << fixed << setprecision(2) << total << endl;
    cout << "Tax (8%): $" << fixed << setprecision(2) << tax << endl;
    cout << "Total: $" << fixed << setprecision(2) << finalTotal << endl;

    cout << "\nThank you for your order! Enjoy your food, and please come again!!" << endl;
}

int main() {
    orderFlow();
    return 0;
}