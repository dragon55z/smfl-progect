#include "cashier.h"
#include<iostream>
using namespace std;


int main()
{
    showMenu();

    int choice;
    cout<<"Enter product id: ";
    cin>>choice;

    addProduct(choice);

    displayTotal();
}