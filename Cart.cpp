#include "Cart.hpp"
#include <QDebug>

QHash<Product, int> &Cart::getCartQHashContainer()
{
    return cartQHashContainer;
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
            qDebug() << "Nie zmiesci sie tyle w koszyku.\n"; // emit signal, create new dialog
        else
        {
            it.value() += newQty;
            qDebug() << "Dodales do koszyka " << newProduct.getName() << ", w ilosci: " << newQty << '\n'; // emit signal, create new dialog
        }

        return;
    }

    if (cartQHashContainer.size() >= cartCapacity)
    {
        qDebug() << "W koszyku jest juz 10 roznych produktow. Aby dodac kolejny usun przynajmniej jeden produkt z koszyka.\n"; // emit signal, create new dialog
        return;
    }

    cartQHashContainer.insert(newProduct, newQty);
    qDebug() << "Dodales do koszyka " << newProduct.getName() << ", w ilosci: " << newQty << '\n'; // emit signal, create new dialog
}
