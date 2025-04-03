#ifndef LIGHTSYSTEMMANAGER_H
#define LIGHTSYSTEMMANAGER_H

#include "Switch.h"
enum
{
    ConnectLightsToSwitch = 1,
    TurnOnSwitch,
    Exit
};

class LightSystemManager
{
public:
    LightSystemManager();
    LightSystemManager(const LightSystemManager& light);
    ~LightSystemManager();

    void connectWireToLight(int lightNum, Wire *wire);
    void connectWireToSwitch(Wire* wire);
    void operator = (LightSystemManager& light);
    void select();

private:
    Switch m_switch;

};

#endif // LIGHTSYSTEMMANAGER_H
