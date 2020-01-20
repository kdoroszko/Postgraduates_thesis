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

    const int netto, VAT; // CENA PODANA JEST W GROSZACH
    const QString name;
};
