#include "LightSystemManager.h"
#include"Switch.h"
#include "Light.h"
#include"Wire.h"
#include <iostream>
using namespace std;

LightSystemManager::LightSystemManager()
{
    cout<<"LightSystemManager Constructor"<<endl;
}

LightSystemManager::LightSystemManager(const LightSystemManager &light)
{
    cout<< "LightsystemManager Copy constructor called"<<endl;
}

LightSystemManager::~LightSystemManager()
{
    cout<<"LightSystemManager Destructor"<<endl;
}

void LightSystemManager::operator =(LightSystemManager &light)
{
    cout<< "Light Assignment operator"<<endl;
}

void LightSystemManager::select()
{
    int choice,True = 1,lightNum = 0;
    while(True)
    {
        cout<<"Enter"<<endl<<"1. ConnectLightsToSwitch"<<endl<<"2. TurnOnSwitch"<<endl<<"3. Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case ConnectLightsToSwitch:
        {
            Wire wire;
            for(int i = 0;i < 10;i++)
            {
                Light light(++lightNum);
                light.initWire(&wire,light);
            }
            m_switch.initWire(&wire);

        }
        break;
        case TurnOnSwitch:
        {
            m_switch.turnOnSwitch();
        }
        break;
        case Exit:
        {
            True = 0;
        }
        break;
        }
    }
}
