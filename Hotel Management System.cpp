// Hotel Management System
#include <iostream>
using namespace std;

int main()
{
    int qty, choice;
    // Quantity
    int qtyRoom = 0, qtyPasta = 0, qtyBurger = 0, qtyNoodle = 0, qtyShake = 0, qtyChicken = 0;
    // Sold items
    int soldRoom = 0, soldPasta = 0, soldBurger = 0, soldNoodle = 0, soldShake = 0, soldChicken = 0;
    // Total price of items
    int total_roomsPrice = 0, total_pastaPrice = 0, total_burgerPrice = 0, total_noodlePrice = 0, total_shakePrice = 0, total_chickenPrice = 0;

    // Taking available items
    cout << "\n\t Quantity of items we have\n";
    cout << "\n Rooms available: ";
    cin >> qtyRoom;
    cout << "\n Quantity of pasta: ";
    cin >> qtyPasta;
    cout << "\n Quantity of burger: ";
    cin >> qtyBurger;
    cout << "\n Quantity of noodles: ";
    cin >> qtyNoodle;
    cout << "\n Quantity of shake: ";
    cin >> qtyShake;
    cout << "\n Quantity of chicken-roll: ";
    cin >> qtyChicken;

m: // This is for goto statement

    // Choose option
    cout << "\n\t\t\t Please select from the given menu options: \n";
    cout << "\n\n1. Rooms\n2. Pasta\n3. Burger\n4. Noodles\n5. Shake\n6. Chicken-roll\n7. Information regarding sales and collection\n8. Exit";

    cout << "\n\nPlease enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        // Take room quantity from user
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> qty;
        // Check room is availble or not
        if (qtyRoom - soldRoom >= qty)
        {
            soldRoom = soldRoom + qty;
            total_roomsPrice = total_roomsPrice + qty * 1000;
            cout << "\n\n\t\t" << qty << " room/rooms have been alloted to you! ";
            break;
        }
        // When room is not available
        else
        {
            cout << "\n\tOnly " << qtyRoom - soldRoom << " Rooms remaining in hotel ";
            break;
        }
    case 2:
        // Take pasta quantity from user
        cout << "\n\n Enter Pasta Quantity:  ";
        cin >> qty;
        // Check pasta is availble or not
        if (qtyPasta - soldPasta >= qty)
        {
            soldPasta = soldPasta + qty;
            total_pastaPrice = total_pastaPrice + qty * 220;
            cout << "\n\n\t\t" << qty << " Pasta is the order!  ";
            break;
        }
        // When pasta is not available
        else
        {
            cout << "\n\tOnly " << qtyPasta - soldPasta << " Pasta remaining in hotel ";
            break;
        }
    case 3:
        // Take burger quantity from user
        cout << "\n\n Enter Burger Quantity:  ";
        cin >> qty;
        // Check burger is availble or not
        if (qtyBurger - soldBurger >= qty)
        {
            soldBurger = soldBurger + qty;
            total_burgerPrice = total_burgerPrice + qty * 150;
            cout << "\n\n\t\t" << qty << " Burger is the order!  ";
            break;
        }
        // When burger is not available
        else
        {
            cout << "\n\tOnly " << qtyBurger - soldBurger << " Burger remaining in hotel ";
            break;
        }
    case 4:
        // Take noodles quantity from user
        cout << "\n\n Enter Noodles Quantity:  ";
        cin >> qty;
        // Check noodles is availble or not
        if (qtyNoodle - soldNoodle >= qty)
        {
            soldNoodle = soldNoodle + qty;
            total_noodlePrice = total_noodlePrice + qty * 350;
            cout << "\n\n\t\t" << qty << " Noodles is the order!  ";
            break;
        }
        // When noodles is not available
        else
        {
            cout << "\n\tOnly " << qtyNoodle - soldNoodle << " Noodles remaining in hotel ";
            break;
        }
    case 5:
        // Take shake quantity from user
        cout << "\n\n Enter Shake Quantity:  ";
        cin >> qty;
        // Check shake is availble or not
        if (qtyShake - soldShake >= qty)
        {
            soldShake = soldShake + qty;
            total_shakePrice = total_shakePrice + qty * 100;
            cout << "\n\n\t\t" << qty << " Shake is the order!  ";

            break;
        }
        // When shake is not available
        else
        {
            cout << "\n\tOnly " << qtyShake - soldShake << " Shake remaining in hotel ";
            break;
        }
    case 6:
        // Take chicken-roll quantity from user
        cout << "\n\n Enter Chicken-roll Quantity:  ";
        cin >> qty;
        // Check chicken-roll is availble or not
        if (qtyChicken - soldChicken >= qty)
        {
            soldChicken = soldChicken + qty;
            total_chickenPrice = total_chickenPrice + qty * 180;
            cout << "\n\n\t\t" << qty << " Chicken-roll is the order!  ";
            break;
        }
        // When chicken-roll is not available
        else
        {
            cout << "\n\tOnly " << qtyChicken - soldChicken << " Chicken-roll remaining in hotel ";
            break;
        }
    case 7:
        // Print total collection for the day
        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Number of rooms we had: " << qtyRoom;
        cout << "\n\n Number of rooms we gave for rent: " << soldRoom;
        cout << "\n\n Remaining rooms: " << qtyRoom - soldRoom;
        cout << "\n\n Total rooms collection for the day: " << total_roomsPrice;

        cout << "\n\n Number of Pasta we had: " << qtyPasta;
        cout << "\n\n Number of Pasta we gave for rent: " << soldPasta;
        cout << "\n\n Remaining Pasta: " << qtyPasta - soldPasta;
        cout << "\n\n Total Pasta collection for the day: " << total_pastaPrice;

        cout << "\n\n Number of Burger we had: " << qtyBurger;
        cout << "\n\n Number of Burger we gave for rent: " << soldBurger;
        cout << "\n\n Remaining Burger: " << qtyBurger - soldBurger;
        cout << "\n\n Total Burger collection for the day: " << total_burgerPrice;

        cout << "\n\n Number of Noodles we had: " << qtyNoodle;
        cout << "\n\n Number of Noodles we gave for rent: " << soldNoodle;
        cout << "\n\n Remaining Noodles: " << qtyNoodle - soldNoodle;
        cout << "\n\n Total Noodles collection for the day: " << total_noodlePrice;

        cout << "\n\n Number of Shake we had: " << qtyShake;
        cout << "\n\n Number of Shake we gave for rent: " << soldShake;
        cout << "\n\n Remaining Shake: " << qtyShake - soldShake;
        cout << "\n\n Total Shake collection for the day: " << total_shakePrice;

        cout << "\n\n Number of Chicken-roll we had: " << qtyChicken;
        cout << "\n\n Number of Chicken-roll we gave for rent: " << soldChicken;
        cout << "\n\n Remaining Chicken-roll: " << qtyChicken - soldChicken;
        cout << "\n\n Total Chicken-roll collection for the day: " << total_chickenPrice;

        cout << "\n\n\n Total Collection for the day: " << total_roomsPrice + total_pastaPrice + total_burgerPrice + total_noodlePrice + total_shakePrice + total_chickenPrice;
        break;

    case 8:
        exit(0);

    default:
        // When incorrect number entered
        cout << "\n Please select the numbers mentioned above!";
    }
    goto m; // It will help us in jumping to the menu after every choice.

    return 0;
}