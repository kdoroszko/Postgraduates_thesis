#pragma once

#include <QString>

class Product
{
public:

    Product(QString newName = "NULL", int newPrice = 0, int newTax = 0)
        : name(newName), netto(newPrice), VAT(newTax) {}

    int getNetto() const;
    int getVAT() const;
    QString getName() const;
    double getPriceWithTax() const;

    bool operator == (const Product &newObject) const;

private:

    const int netto, VAT; // PRICE IN PLN SUBUNIT - GROSZ
    const QString name;
};

inline uint qHash(const Product &key, uint seed)
{
    return qHash(key.getName(), seed) ^ key.getNetto();
}
