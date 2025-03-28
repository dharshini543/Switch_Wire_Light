#ifndef LIGHT_H
#define LIGHT_H
#include"Wire.h"

class Light
{
public:
    Light(int Lightnum);
    Light(const Light &light);
    ~Light();

    void turnOnLight();
    Light operator = (Light& light);
    void initWire(Wire* wire, Light &light);

private:
    int m_Lightnum;
    Wire* m_wire;

};


#endif // LIGHT_H
