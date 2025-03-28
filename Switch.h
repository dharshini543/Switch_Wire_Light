#ifndef SWITCH_H
#define SWITCH_H
#include"Wire.h"
class Switch
{
public:
    Switch();
    Switch(const Switch &Switch);
    ~Switch();

    void turnOnSwitch();
    Switch operator = (Switch& Switch);
    void initWire(Wire* w1);

private:
    Wire* m_wire;

};
#endif // SWITCH_H
