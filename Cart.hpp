#pragma once

#include <QObject>
#include <QHash>
#include <QString>
#include "Product.hpp"

class Cart : public QObject
{
    Q_OBJECT

public:

    explicit Cart(QObject *parent = 0);
    QHash<Product, int> &getCartQHashContainer();
    int getCartCapacity() const;
    int getMaxQtyOfOneProductInCart() const;
    void addProduct(const Product newProduct, const int newQty);

signals:
    void sendMessage(int typeOfMessage, Product productToSend, int qtyOfProduct);

private:

    QHash<Product, int> cartQHashContainer;
    static const int cartCapacity = 10;
    static const int maxQtyOfOneProductInCart = 25;

    static const int productIsAdded = 0;
    static const int noMoreSpaceForThisProduct = 1;
    static const int noMoreSpaceInCart = 2;
};
