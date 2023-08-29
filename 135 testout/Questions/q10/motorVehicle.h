#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H

// interface 
class MotorVehicle
{
    public:
    virtual void run() const = 0;
    virtual int getFuel() const = 0;
};

#endif