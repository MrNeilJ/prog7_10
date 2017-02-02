// This program uses a constant reference parameter.
// It also shows how to return an object from a function.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InventoryItem
{
private:
    int partNum;                // Part number
    string description;         // Item description
    int onHand;                 // Units on hand
    double price;               // Unit price

public:
    void storeInfo(int p, string d, int oH, double cost);       // Prototype

    itn getPartNum() const          // The get functions have all been made
    {                               // const functions. This ensure they
        return partNum;             // cannot alter any class member data
    }

    string getDescription() const
    {
        return description;
    }

    int getOnHand() const
    {
        return onHand;
    }

    double getPrice() const
    {
        return price;
    }
};

// Implementation code for InventoryItem class function storeInfo
void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

// Function prototypes for client program
InventoryItem createItem();                 // Returns an InventoryItem object
void showValues(const InventoryItem&);      // Receives a reference to an
                                            // Inventory Item object

/******************************************
*               main                      *
******************************************/
int main()
{
    InventoryItem part = createItem();
    showValues(part);
    return 0;
}

/*****************************************
*           createItem                   *
*   This function stores user input data *
*   in the members of a locally define   *
*   InventoryItem object, then returns it*
*****************************************/

InventoryItem createItem()
{
    InventoryItem tempItem;         // Local InventoryItem object
    int partNum;                    // Local variables to hold user input
    string description;
    int qty;
    double price;

    // Get the data from the user
    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;
    cout << "Description: ";
    cin.get();                      // Move past the '\n' left in the
                                    // input buffer by the last input
    getline(cin, description);
    cout << "Quantity on hand: ";
    cin >> qty;
    cout << "Unit price: ";
    cin >> price;

    // Store the data in the InventoryItem object and return it
    tempItem.storeInfo(partNum, description, qty, price);
    return tempItem;
}
