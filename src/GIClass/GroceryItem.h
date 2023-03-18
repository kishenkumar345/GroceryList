#ifndef GROCERY_ITEM
#define GROCERY_ITEM

#include <bits/stdc++.h>

class GroceryItem
{
    private:
        std::string name;
        int servPP;
        int servS;

    public:
        int getServPP();
        int getServS();
        std::string getName();
        void setServPP(int);
        void setServS(int);
        void setName(std::string);
};

#endif