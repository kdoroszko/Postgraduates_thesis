#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "addproductdialog.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    productsInShop({Product("Agrest", 1000, 23), Product("Banan", 2000, 23), Product("Borówka", 3000, 23),
                   Product("Gruszka", 600, 23), Product("Jabłko", 500, 23), Product("Pożeczka", 450, 23),
                   Product("Truskawka", 1500, 23), Product("Cebula", 50, 8), Product("Marchewka", 150, 8),
                   Product("Ogórek", 500, 8), Product("Papryka", 900, 8), Product("Pieczarka", 350, 8),
                   Product("Pomidor", 95, 8), Product("Rzodkiewka", 200, 8), Product("Reklamówka", 20, 90)})
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    ui->labelProductName_0->setText((productsInShop.at(0)).getName());
    ui->labelProductName_1->setText((productsInShop.at(1)).getName());
    ui->labelProductName_2->setText((productsInShop.at(2)).getName());
    ui->labelProductName_3->setText((productsInShop.at(3)).getName());
    ui->labelProductName_4->setText((productsInShop.at(4)).getName());
    ui->labelProductName_5->setText((productsInShop.at(5)).getName());
    ui->labelProductName_6->setText((productsInShop.at(6)).getName());
    ui->labelProductName_7->setText((productsInShop.at(7)).getName());
    ui->labelProductName_8->setText((productsInShop.at(8)).getName());
    ui->labelProductName_9->setText((productsInShop.at(9)).getName());
    ui->labelProductName_10->setText((productsInShop.at(10)).getName());
    ui->labelProductName_11->setText((productsInShop.at(11)).getName());
    ui->labelProductName_12->setText((productsInShop.at(12)).getName());
    ui->labelProductName_13->setText((productsInShop.at(13)).getName());
    ui->labelProductName_14->setText((productsInShop.at(14)).getName());

    ui->labelProductPrice_0->setText(QString::number((productsInShop.at(0)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_1->setText(QString::number((productsInShop.at(1)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_2->setText(QString::number((productsInShop.at(2)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_3->setText(QString::number((productsInShop.at(3)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_4->setText(QString::number((productsInShop.at(4)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_5->setText(QString::number((productsInShop.at(5)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_6->setText(QString::number((productsInShop.at(6)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_7->setText(QString::number((productsInShop.at(7)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_8->setText(QString::number((productsInShop.at(8)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_9->setText(QString::number((productsInShop.at(9)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_10->setText(QString::number((productsInShop.at(10)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_11->setText(QString::number((productsInShop.at(11)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_12->setText(QString::number((productsInShop.at(12)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_13->setText(QString::number((productsInShop.at(13)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_14->setText(QString::number((productsInShop.at(14)).getPriceWithTax(), 'f', 2) + " PLN");

    ui->labelProductNamePrice_0->setText((productsInShop.at(0)).getName() + '\n' + QString::number((productsInShop.at(0)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_1->setText((productsInShop.at(1)).getName() + '\n' + QString::number((productsInShop.at(1)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_2->setText((productsInShop.at(2)).getName() + '\n' + QString::number((productsInShop.at(2)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_3->setText((productsInShop.at(3)).getName() + '\n' + QString::number((productsInShop.at(3)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_4->setText((productsInShop.at(4)).getName() + '\n' + QString::number((productsInShop.at(4)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_5->setText((productsInShop.at(5)).getName() + '\n' + QString::number((productsInShop.at(5)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_6->setText((productsInShop.at(6)).getName() + '\n' + QString::number((productsInShop.at(6)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_7->setText((productsInShop.at(7)).getName() + '\n' + QString::number((productsInShop.at(7)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_8->setText((productsInShop.at(8)).getName() + '\n' + QString::number((productsInShop.at(8)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_9->setText((productsInShop.at(9)).getName() + '\n' + QString::number((productsInShop.at(9)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_10->setText((productsInShop.at(10)).getName() + '\n' + QString::number((productsInShop.at(10)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_11->setText((productsInShop.at(11)).getName() + '\n' + QString::number((productsInShop.at(11)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_12->setText((productsInShop.at(12)).getName() + '\n' + QString::number((productsInShop.at(12)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_13->setText((productsInShop.at(13)).getName() + '\n' + QString::number((productsInShop.at(13)).getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductNamePrice_14->setText((productsInShop.at(14)).getName() + '\n' + QString::number((productsInShop.at(14)).getPriceWithTax(), 'f', 2) + " PLN");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButtonShowArticles_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonAddProduct_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButtonRemoveProduct_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButtonShowCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButtonLoadCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButtonPay_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::addGooseberryToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(0), valueFromSpinBoxAddProduct);
}

void MainWindow::addBananaToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(1), valueFromSpinBoxAddProduct);
}

void MainWindow::addBilberryToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(2), valueFromSpinBoxAddProduct);
}

void MainWindow::addPearToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(3), valueFromSpinBoxAddProduct);
}

void MainWindow::addAppleToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(4), valueFromSpinBoxAddProduct);
}

void MainWindow::addRedBerryToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(5), valueFromSpinBoxAddProduct);
}

void MainWindow::addStrawberryToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(6), valueFromSpinBoxAddProduct);
}

void MainWindow::addOnionToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(7), valueFromSpinBoxAddProduct);
}

void MainWindow::addCarrotToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(8), valueFromSpinBoxAddProduct);
}

void MainWindow::addCucumberToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(9), valueFromSpinBoxAddProduct);
}

void MainWindow::addPepperToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(10), valueFromSpinBoxAddProduct);
}

void MainWindow::addChampignonToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(11), valueFromSpinBoxAddProduct);
}

void MainWindow::addTomatoToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(12), valueFromSpinBoxAddProduct);
}

void MainWindow::addRadishToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(13), valueFromSpinBoxAddProduct);
}

void MainWindow::addBagToCart(int valueFromSpinBoxAddProduct)
{
    shopCart.addProduct(productsInShop.at(14), valueFromSpinBoxAddProduct);
}

void MainWindow::on_pushButtonGooseberry_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addGooseberryToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonBanana_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addBananaToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonBilberry_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addBilberryToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonPear_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addPearToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonApple_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addAppleToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonRedBerry_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addRedBerryToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonStrawberry_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addStrawberryToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonOnion_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addOnionToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonCarrot_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addCarrotToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonCucumber_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addCucumberToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonPepper_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addPepperToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonChampignon_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addChampignonToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonTomato_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addTomatoToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonRadish_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addRadishToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}

void MainWindow::on_pushButtonBag_clicked()
{
    AddProductDialog addDialog(shopCart.getMaxQtyOfOneProductInCart());

    connect(&addDialog, SIGNAL(sendQtyOfProductToMainWindow(int)), this, SLOT(addBagToCart(int)));

    addDialog.setModal(true);
    addDialog.exec();
}
