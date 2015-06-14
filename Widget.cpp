#include "Widget.h"
#include "ui_Widget.h"
#include "DuJoystickManager.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mJoyManager = new DuJoystickManager(this);

    for (int i = 0; i < 5; ++i) {
        ui->listWidget->addItem(QString::number(i));
    }
    ui->listWidget->setCurrentRow(0);
    mJoyManager->start();

    connect(mJoyManager, &DuJoystickManager::SDL_joyButtonDown, this,
            &Widget::manageJoystick);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::manageJoystick(int button)
{
    int currentRow = ui->listWidget->currentRow();
    const int rowCount = ui->listWidget->count();
    switch (button) {
    case BUTTON1: {
        QMessageBox::information(this, "OK",
                ui->listWidget->currentItem()->text());
        break;
    }
    case BUTTON2:
        break;
    case BUTTON3:
        break;
    case BUTTON4:
        break;
    case BUTTON5:
        break;
    case BUTTON6:
        break;
    case BUTTON7:
        break;
    case BUTTON8:
        break;
    case BUTTON9:
        break;
    case BUTTON10:
        break;
    case UP: {
        if (currentRow == 0) {
            currentRow = rowCount - 1;
        } else {
            --currentRow;
        }
        ui->listWidget->setCurrentRow(currentRow);
        break;
    }
    case DOWN: {
        if (currentRow == rowCount - 1) {
            currentRow = 0;
        } else {
            ++currentRow;
        }
        ui->listWidget->setCurrentRow(currentRow);
        break;
    }
    case LEFT:
        break;
    case RIGHT:
        break;
    }
}
