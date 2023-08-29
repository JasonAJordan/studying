#ifndef CAR_H
#define CAR_H
#include "motorVehicle.h"


// implementation 
class Car : public MotorVehicle
{
  int fuel = 10;

  public:
    void run() const override
    {
        printf("Wrroooooooom\n");
    }

    int getFuel() const override
    {
        return this->fuel;
    }
};

#endif