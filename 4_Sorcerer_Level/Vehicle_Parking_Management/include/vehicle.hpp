#ifndef VEHICLE_HPP
#define VEHICLE_HPP
#include<string>

class Vehicle 
{
private:
    std::string _type;
    long _enter_time{};
    long _exit_time{};
    long _duration{};
    int _plate_number;
public:
    Vehicle (int plate_number):_plate_number{plate_number}{}
    void setType(std::string type);
    std::string getTyoe();
    long calculateDuration();
    float expense(float unit);

};



#endif
