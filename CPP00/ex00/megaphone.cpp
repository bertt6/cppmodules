#include <iostream>

int main(int ac, char **av) {

    int i = 1;
    int j = 0;

    if(ac > 1)
    {
        while(av[i]) 
        {
            j = 0;
            while(av[i][j]) 
            {
                if(islower(av[i][j]))
                    av[i][j] = toupper(av[i][j]);
                j++;
            }
            cout << av[i];
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}