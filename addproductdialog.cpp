#include "addproductdialog.hpp"
#include "ui_addproductdialog.h"

AddProductDialog::AddProductDialog(int qty, QWidget *parent) :
    maxQtyInSpinBoxAddProduct(qty),
    QDialog(parent),
    ui(new Ui::AddProductDialog)
{
    ui->setupUi(this);
    ui->spinBoxAddProduct->setMaximum(maxQtyInSpinBoxAddProduct);
}

AddProductDialog::~AddProductDialog()
{
    delete ui;
}

void AddProductDialog::on_buttonBox_accepted()
{
    emit sendQtyOfProductToMainWindow(ui->spinBoxAddProduct->value());
}
