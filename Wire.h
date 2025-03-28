#ifndef WIRE_H
#define WIRE_H
#include<vector>
using namespace std;

class Light;
class Wire
{
public:
    Wire();
    Wire(const Wire &wire);
    ~Wire();

    void turnOnWire();
    Wire operator = (Wire& wire);
    void initLight(Light &light);

private:
    vector<Light> m_connectedLights;
};

#endif // WIRE_H
