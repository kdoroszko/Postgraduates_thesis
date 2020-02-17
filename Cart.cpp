#include "Cart.hpp"

Cart::Cart(QObject *parent) :
    QObject(parent) {}

QHash<Product, int> &Cart::getCartQHashContainer()
{
    return cartQHashContainer;
}

int Cart::getCartCapacity() const
{
    return cartCapacity;
}

int Cart::getMaxQtyOfOneProductInCart() const
{
    return maxQtyOfOneProductInCart;
}

void Cart::addProduct(const Product newProduct, const int newQty)
{
    auto it = cartQHashContainer.find(newProduct);

    if (it != cartQHashContainer.end())
    {
        if (it.value() + newQty > maxQtyOfOneProductInCart)
            emit sendMessage(noMoreSpaceForThisProduct, it.key(), newQty);
        else
        {
            it.value() += newQty;
            emit sendMessage(productIsAdded, newProduct, newQty);
        }

        return;
    }

    if (cartQHashContainer.size() >= cartCapacity)
    {
        emit sendMessage(noMoreSpaceInCart, newProduct, newQty);
        return;
    }

    cartQHashContainer.insert(newProduct, newQty);
    emit sendMessage(productIsAdded, newProduct, newQty);
}
