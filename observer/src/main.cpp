#include <iostream>

#include "store.h"
#include "storage.h"

int main()
{
    Storage storage;
    Store str1;
    Store str2;
    storage.attach(&str1);
    storage.attach(&str2);   
    std::vector<Product*> products;
    products.push_back(new Product("Apple", 200));
    products.push_back(new Product("XXL apple", 400));
    storage.setState(products);
    std::vector<Product*> productss = str1.getProducts();
    for(int i =0; i<products.size(); ++i)
    {
        std::cout<<productss[i]->name<<std::ends<<productss[i]->price<<std::endl;
    }
    return 0;
}
