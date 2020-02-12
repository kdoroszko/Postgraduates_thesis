#ifndef ADDPRODUCTDIALOG_HPP
#define ADDPRODUCTDIALOG_HPP

#include <QDialog>
#include <QSpinBox>

namespace Ui {
class AddProductDialog;
}

class AddProductDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddProductDialog(int qty, QWidget *parent = 0);
    ~AddProductDialog();

signals:
    void sendQtyOfProductToMainWindow(int valueFromSpinBoxAddProduct);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddProductDialog *ui;
    int maxQtyInSpinBoxAddProduct;
};

#endif // ADDPRODUCTDIALOG_HPP
