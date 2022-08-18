#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
        return 0;

    std::string line;

    size_t pos;
    std::string s1 = av[2];
    std::string out_filename = av[1];
    out_filename += ".replace";
    size_t len = s1.length();
 
    std::ifstream in(av[1]);

    std::ofstream out(out_filename);


    if (in.is_open() && out.is_open())
    {
        while (getline(in, line))
        {
            pos = line.find(av[2]);
            if (pos != std::string::npos)
            {
                out << line.substr(0, pos) << av[3] << &line[pos + len];
            }
            else
            {
                out << line << std::endl;
            }
        }
    }

    in.close();
    out.close();

    return 0;
}