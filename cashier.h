#include<iostream>
#include<string>
using namespace std;

struct Product
{
    int id;
    string name;
    int price;
};

Product menu[] =
{
    {1,"Burger",50},
    {2,"Pizza",80},
    {3,"Cola",20},
    {4,"Fries",30},
    {5,"Shawarma",60}
};

int menuSize = sizeof(menu)/sizeof(menu[0]);int total = 0;

void showMenu()
{
    cout<<"------ MENU ------"<<endl;

    for(int i=0;i<menuSize;i++)
    {
        cout<<menu[i].id<<" - "
            <<menu[i].name<<" - "
            <<menu[i].price<<endl;
    }
}

void addProduct(int id)
{
    for(int i=0;i<menuSize;i++)
    {
        if(menu[i].id == id)
        {
            total += menu[i].price;
        }
    }
}

void displayTotal()
{
    cout<<"Total = "<<total<<endl;
}
