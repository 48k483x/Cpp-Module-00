#include <iostream>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                if (av[i][j] >= 97 && av[i][j] <= 122)
                    av[i][j] -= 32;
                std::cout << av[i][j];
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
