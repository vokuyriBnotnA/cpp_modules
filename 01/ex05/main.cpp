#include "Harl.hpp"

int main()
{
    Harl H;

    H.complain("debug");
    H.complain("info");
    H.complain("warning");
    H.complain("error");

    return 0;
}