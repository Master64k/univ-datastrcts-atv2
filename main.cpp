//
// Created by Master64k on 05/08/2017.
//

#include <iostream>
#include <cstdlib>

#define VECT_SIZE 3

int main()
{
    int vect[VECT_SIZE][VECT_SIZE] = {{3,6,1},
                                      {2,7,8},
                                      {9,4,5}};

    int sum = 0;

    for(int a = 0; a< VECT_SIZE;a++)
        sum += vect[a][a];


    std::cout << "diagonal principal: " << sum << std::endl;

    sum = 0;    // reset

    for(int a = 2, b = 0; a >=0 && b < VECT_SIZE; a--, b++)
        sum += vect[a][b];

    std::cout << "diagonal secundária: " << sum << std::endl;

    return EXIT_SUCCESS;

}
