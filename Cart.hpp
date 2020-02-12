#pragma once

#include <QHash>
#include "Product.hpp"

class Cart
{
public:

    QHash<Product, int> &getCartQHashContainer();
    int getMaxQtyOfOneProductInCart() const;
    void addProduct(const Product newProduct, const int newQty);

private:

    QHash<Product, int> cartQHashContainer;
    static const int cartCapacity = 10;
    static const int maxQtyOfOneProductInCart = 25;
};
