#include <iostream>
#include "Foco.hpp"

int main(int argc, char const *argv[])

{

    Foco focos[10];

    for (size_t i = 0; i < 10; i++)
    {
        focos[i].Encender();
    }

    for (size_t i = 0; i < 10, i++ )
    {
        std::cout << focos[i].LeerEstado();
    }

    return EXIT_SUCCESS;
}