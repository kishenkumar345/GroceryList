#include "./GroceryItem.h"

int GroceryItem::getServPP()
{
    return this->servPP;
}

int GroceryItem::getServS()
{
    return this->servS;
}

std::string GroceryItem::getName()
{
    return this->name;
}

int GroceryItem::setServPP(int x)
{
    this->servPP = x;
}

int GroceryItem::setServS(int y)
{
    this->servS = y;
}

std::string GroceryItem::setName(std::string z)
{
    this->name = z;
}
