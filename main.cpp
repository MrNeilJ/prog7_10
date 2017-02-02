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

//