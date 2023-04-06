#include<iostream>
#include "../include/parking.hpp"

void Parking::addVehicle(Vehicle &v)
{
    if(Parking::getSize() < _max_capacity)
    {
        _queue.pushback(v);
    }
    else
    {
        std::cerr <<"Parking is full.\n";
    }
}
void Parking::deleteVehicle(Vehicle &v)
{
    int current_size{Parking::getSize()};
    if(current_size > _max_capacity)
    {
        for (std::vector<Vehicle>::iterator it = _queue.begin(); it != _queue.end();)
    {
        if (it->_plate_number == v._plate_number)
            it = _queue.erase(it);
        else
            ++it;
    }
    }
}
int Parking::getSize()
{
    return 0;
}
