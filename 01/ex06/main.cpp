#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl H;

    if (ac != 2)
        return 0;

    H.complain(av[1]);

    return 0;
}