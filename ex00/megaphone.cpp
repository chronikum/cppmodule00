#include <iostream>

/**
 * THIS MAKES EVERYTHING MEGAPHONY!!!!
 */
int main(int argc, char **argv)
{
    int j = 1;
    int i = 0;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (0);
    }

    while (argc > j)
    {
        i = 0;
        while (argv[j][i])
        {
            std::cout << (char) toupper(argv[j][i]);
            i++;
        }
        j++;
    }
    std::cout << std::endl;
    return (0);
}


