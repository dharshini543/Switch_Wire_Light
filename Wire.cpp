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

void Wire::operator =(Wire& wire)
{
    cout<< "Wire Assignment operator"<<endl;
}

void Wire::initLight(Light& lights)
{
    cout<<"Initing light "<<lights.getLightNum()<<" to Wire"<<endl;
    cout<<"Capacity : "<<m_connectedLights.capacity()<<endl;
    m_connectedLights.push_back(lights);
    cout<<"Capacity : "<<m_connectedLights.capacity()<<endl;
}

void  Wire::turnOnWire()
{
    cout <<"Wire is ON"<<endl;
    for(auto light = m_connectedLights.begin(); light != m_connectedLights.end(); light++)
    {
        light->turnOnLight();
    }
    /*for(auto light:m_connectedLights)
    {
        light.turnOnLight();
    }*/

}


