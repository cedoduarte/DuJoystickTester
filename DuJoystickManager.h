#ifndef DUJOYSTICKMANAGER_H
#define DUJOYSTICKMANAGER_H

#include <QThread>

enum JoystickButton
{
    BUTTON1,
    BUTTON2,
    BUTTON3,
    BUTTON4,
    BUTTON5,
    BUTTON6,
    BUTTON7,
    BUTTON8,
    BUTTON9,
    BUTTON10,
    UP,
    DOWN,
    LEFT,
    RIGHT
};

enum JoysitckAxis
{
    AXIS_HORIZONTAL,
    AXIS_VERTICAL
};

class DuJoystickManager : public QThread
{
    Q_OBJECT
public:
    DuJoystickManager(QObject *parent = nullptr);
signals:
    void SDL_joyButtonDown(int);
protected:
    void run() override;
};

#endif // DUJOYSTICKMANAGER_H
