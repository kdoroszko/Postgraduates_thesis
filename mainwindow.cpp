#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "Product.hpp"
#include <QPushButton>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    const int qtyOfProductsInShop = 15;

    Product gooseberry("Agrest", 1000, 23), banana("Banan", 2000, 23), bilberry("Borówka", 3000, 23);
    Product pear("Gruszka", 600, 23), apple("Jabłko", 500, 23), redBerry("Pożeczka", 450, 23);
    Product strawberry("Truskawka", 1500, 23), onion("Cebula", 50, 8), carrot("Marchewka", 150, 8);
    Product cucumber("Ogórek", 500, 8), pepper("Papryka", 900, 8), champignon("Pieczarka", 350, 8);
    Product tomato("Pomidor", 95, 8), radish("Rzodkiewka", 200, 8), bag("Reklamówka", 20, 90);

    Product productsInShop[qtyOfProductsInShop] = {gooseberry, banana, bilberry, pear,
                                                  apple, redBerry, strawberry, onion,
                                                  carrot, cucumber, pepper, champignon,
                                                  tomato, radish, bag};

    ui->labelProductName_0->setText(productsInShop[0].getName());
    ui->labelProductName_1->setText(productsInShop[1].getName());
    ui->labelProductName_2->setText(productsInShop[2].getName());
    ui->labelProductName_3->setText(productsInShop[3].getName());
    ui->labelProductName_4->setText(productsInShop[4].getName());
    ui->labelProductName_5->setText(productsInShop[5].getName());
    ui->labelProductName_6->setText(productsInShop[6].getName());
    ui->labelProductName_7->setText(productsInShop[7].getName());
    ui->labelProductName_8->setText(productsInShop[8].getName());
    ui->labelProductName_9->setText(productsInShop[9].getName());
    ui->labelProductName_10->setText(productsInShop[10].getName());
    ui->labelProductName_11->setText(productsInShop[11].getName());
    ui->labelProductName_12->setText(productsInShop[12].getName());
    ui->labelProductName_13->setText(productsInShop[13].getName());
    ui->labelProductName_14->setText(productsInShop[14].getName());

    ui->labelProductPrice_0->setText(QString::number(productsInShop[0].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_1->setText(QString::number(productsInShop[1].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_2->setText(QString::number(productsInShop[2].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_3->setText(QString::number(productsInShop[3].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_4->setText(QString::number(productsInShop[4].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_5->setText(QString::number(productsInShop[5].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_6->setText(QString::number(productsInShop[6].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_7->setText(QString::number(productsInShop[7].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_8->setText(QString::number(productsInShop[8].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_9->setText(QString::number(productsInShop[9].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_10->setText(QString::number(productsInShop[10].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_11->setText(QString::number(productsInShop[11].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_12->setText(QString::number(productsInShop[12].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_13->setText(QString::number(productsInShop[13].getPriceWithTax(), 'f', 2) + " PLN");
    ui->labelProductPrice_14->setText(QString::number(productsInShop[14].getPriceWithTax(), 'f', 2) + " PLN");
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
