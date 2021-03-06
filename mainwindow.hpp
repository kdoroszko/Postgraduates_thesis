#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_HPP
