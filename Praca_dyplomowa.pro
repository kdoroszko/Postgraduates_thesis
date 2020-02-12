#-------------------------------------------------
#
# Project created by QtCreator 2019-08-08T17:59:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Praca_dyplomowa
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Product.cpp \
    addproductdialog.cpp \
    Cart.cpp

HEADERS  += mainwindow.hpp \
    Product.hpp \
    addproductdialog.hpp \
    Cart.hpp

FORMS    += mainwindow.ui \
    addproductdialog.ui

RESOURCES += \
    images.qrc
