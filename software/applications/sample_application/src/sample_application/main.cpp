#include <iostream>

#include "sample_component/sample_component.hpp"

int main(int argc, const char * argv[])
{
    SampleComponent sc;
    std::cout << sc.getText() << std::endl;
    return 0;
}
