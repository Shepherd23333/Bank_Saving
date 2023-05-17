#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_bank_saving.h"

class bank_saving : public QMainWindow
{
    Q_OBJECT

public:
    bank_saving(QWidget *parent = nullptr);
    ~bank_saving();

private slots:
    void on_search_clicked();

private:
    Ui::bank_savingClass ui;
};
