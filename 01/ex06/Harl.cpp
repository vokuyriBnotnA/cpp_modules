#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*funcs[]) () = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    int lvl = -1;

    std::string lvls[] = {
        "DEBUG",
        "INFO",
        "WARNINIG",
        "ERROR",
    };

    for (int i = 0; i < 4; i++)
    {
        if (lvls[i] == level)
        {
            lvl = i;
        }
    }

    if (lvl >= 0 && lvl <= 3)
        std::cout << "[ " << lvls[lvl] << " ]" << std::endl;

    void (Harl::*selectedFunc) () = funcs[0];

    switch (lvl)
    {
    case 0:
        // std::cout << "[ DEBUG ]" << std::endl;
        selectedFunc = funcs[0];
        (this->*selectedFunc)();
    case 1:
        // std::cout << "[ INFO ]" << std::endl;
        selectedFunc = funcs[1];
        (this->*selectedFunc)();
    case 2:
        // std::cout << "[ WARNINIG ]" << std::endl;
        selectedFunc = funcs[2];
        (this->*selectedFunc)();
    case 3:
        // std::cout << "[ ERROR ]" << std::endl;
        selectedFunc = funcs[3];
        (this->*selectedFunc)();
    default:
        break;
    }
}