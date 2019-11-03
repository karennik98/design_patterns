#include "shop.hpp"
#include "grocery_item_adapter.hpp"

int main()
{
    Shop shop("Amazon");
    shop.addProduct(new HouseholdProduct("Shampoo", 200), 10);
    shop.addProduct(new GroceryItemAdapter(new GroceryItem("Nuts", 100)), 15);

    shop.showProducts();
    
    return 0;
}