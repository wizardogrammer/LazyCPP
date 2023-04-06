#ifndef PARKING_HPP
#define PARKING_HPP
#include "vehicle.h"
#include <vector>
class Parking
{
private:
    std::vector<Vehicle> _queue;
    int _max_capacity = 10;

public:
    void addVehicle(Vehicle &v);
    void deleteVehicle(Vehicle &v);
    int getSize();
};





#endif
