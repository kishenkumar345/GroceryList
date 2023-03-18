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

void GroceryItem::setServPP(int x)
{
    this->servPP = x;
}

void GroceryItem::setServS(int y)
{
    this->servS = y;
}

void GroceryItem::setName(std::string z)
{
    this->name = z;
}
