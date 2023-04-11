#include <string>
#include <iostream>

int main (int argc , char** argv)
{
    int count = 1;
    std::string name;
    while(count < argc)
    {
        name += argv[count++];
    }

    std::cout << name << std::endl;
}