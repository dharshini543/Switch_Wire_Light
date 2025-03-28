#include "Switch.h"
#include<iostream>
using namespace std;

Switch::Switch()
{
    cout<< "Switch constructor"<<endl;
}

Switch::Switch(const Switch& Switch)
{
    cout<< "Switch Copy constructor called"<<endl;
}

Switch::~Switch()
{
    cout<< "Switch Destructor"<<endl;
}

Switch Switch::operator = (Switch& Switch)
{
    cout<< "Switch Assignment operator"<<endl;
    return Switch;
}

void Switch::initWire(Wire* wire)
{
    cout<<"Initing wire to Switch"<<endl<<endl;
    m_wire = wire;
}

void Switch::turnOnSwitch()
{
    cout<<"Switch is turned On"<<endl;
    m_wire->turnOnWire();
}


