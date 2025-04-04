#include "Light.h"
#include<iostream>
using namespace std;

Light::Light(int Lightnum)
{
    cout<<endl;
    cout<< "Light constructor"<<endl;
    m_Lightnum = Lightnum;
}

Light::Light(const Light& light)
{
    cout<< "Light Copy constructor called"<<endl;
    m_Lightnum = light.m_Lightnum;
}

Light::~Light()
{
    cout<< "Light Destructor"<<endl;
}

void Light::operator = (Light& light)
{
    cout<< "Light Assignment operator"<<endl;
}

void Light::initWire(Wire* wire,Light& light)
{
    cout<<"Initing wire to Light"<<endl;
    m_wire = wire;
    m_wire->initLight(light);
}

void Light::turnOnLight()
{
    cout<<"Light "<<m_Lightnum<<" is turned ON"<<endl;
}

int Light::getLightNum()
{
    return m_Lightnum;
}

