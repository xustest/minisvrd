#include <iostream>
#include "../../include/os.h"

int main(int argc, const char * argv[])
{
    // insert code here...
    std::clog << sizeof(int8) << std::endl;
    std::clog << sizeof(int16) << std::endl;
    std::clog << sizeof(int32) << std::endl;
    std::clog << sizeof(uint8) << std::endl;
    std::clog << sizeof(uint16) << std::endl;
    std::clog << sizeof(uint32) << std::endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
