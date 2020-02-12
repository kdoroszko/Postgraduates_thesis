#include "Product.hpp"

int Product::getNetto() const
{
    return netto;
}

int Product::getVAT() const
{
    return VAT;
}

QString Product::getName() const
{
    return name;
}

double Product::getPriceWithTax() const
{
    return netto * (1 + VAT / 100.0) / 100.0;
}

bool Product::operator == (const Product &newObject) const
{
    return name == newObject.name;
}
