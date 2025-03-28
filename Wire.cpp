#include "Wire.h"
#include"Light.h"
#include<iostream>
using namespace std;

Wire::Wire()
{
    cout<< "Wire constructor"<<endl;
    cout<<"Before pushing size = "<<sizeof(m_connectedLights)<<endl<<endl;
}

Wire::Wire(const Wire& wire)
{
    cout<< "Wire Copy constructor called"<<endl;
}

Wire::~Wire()
{
    cout<< "Wire Destructor"<<endl;
}

Wire Wire::operator = (Wire& wire)
{
    cout<< "Wire Assignment operator"<<endl;
    return wire;
}

void Wire::initLight(Light& light)
{
    cout<<"Initing light to Wire"<<endl;
    m_connectedLights.push_back(light);
    cout<<"Capacity : "<<m_connectedLights.capacity()<<endl;
    cout<<"After pushing size = "<<sizeof(m_connectedLights)<<endl;

}

void  Wire::turnOnWire()
{
    cout <<"Wire is ON"<<endl;
    /*for(auto light = m_connectedLights.begin(); light != m_connectedLights.end(); light++)
    {
        light->turnOnLight();
    }*/
    for(auto light:m_connectedLights)
    {
        light.turnOnLight();
    }

}


