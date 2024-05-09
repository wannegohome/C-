#pragma once

#include <QtWidgets/QWidget>
#include "ui_qgui.h"

class QGui : public QWidget
{
    Q_OBJECT

public:
    QGui(QWidget *parent = nullptr);
    ~QGui();

private:
    Ui::QGuiClass ui;
};
