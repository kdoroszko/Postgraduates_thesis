#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPushButton>
#include <QString>
#include <array>
#include "Product.hpp"
#include "Cart.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonHome_clicked();
    void on_pushButtonShowArticles_clicked();
    void on_pushButtonAddProduct_clicked();
    void on_pushButtonRemoveProduct_clicked();
    void on_pushButtonShowCart_clicked();
    void on_pushButtonLoadCart_clicked();
    void on_pushButtonPay_clicked();

    void addGooseberryToCart(int valueFromSpinBoxAddProduct);
    void addBananaToCart(int valueFromSpinBoxAddProduct);
    void addBilberryToCart(int valueFromSpinBoxAddProduct);
    void addPearToCart(int valueFromSpinBoxAddProduct);
    void addAppleToCart(int valueFromSpinBoxAddProduct);
    void addRedBerryToCart(int valueFromSpinBoxAddProduct);
    void addStrawberryToCart(int valueFromSpinBoxAddProduct);
    void addOnionToCart(int valueFromSpinBoxAddProduct);
    void addCarrotToCart(int valueFromSpinBoxAddProduct);
    void addCucumberToCart(int valueFromSpinBoxAddProduct);
    void addPepperToCart(int valueFromSpinBoxAddProduct);
    void addChampignonToCart(int valueFromSpinBoxAddProduct);
    void addTomatoToCart(int valueFromSpinBoxAddProduct);
    void addRadishToCart(int valueFromSpinBoxAddProduct);
    void addBagToCart(int valueFromSpinBoxAddProduct);

    void on_pushButtonGooseberry_clicked();
    void on_pushButtonBanana_clicked();
    void on_pushButtonBilberry_clicked();
    void on_pushButtonPear_clicked();
    void on_pushButtonApple_clicked();
    void on_pushButtonRedBerry_clicked();
    void on_pushButtonStrawberry_clicked();
    void on_pushButtonOnion_clicked();
    void on_pushButtonCarrot_clicked();
    void on_pushButtonCucumber_clicked();
    void on_pushButtonPepper_clicked();
    void on_pushButtonChampignon_clicked();
    void on_pushButtonTomato_clicked();
    void on_pushButtonRadish_clicked();
    void on_pushButtonBag_clicked();

private:
    Ui::MainWindow *ui;
    Cart shopCart;
    static const int qtyOfProductsInShop = 15;
    std::array<Product, qtyOfProductsInShop> productsInShop;
};

#endif // MAINWINDOW_HPP
