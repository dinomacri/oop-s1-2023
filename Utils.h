#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <math.h>
#include <tuple>
#include <time.h>

#include <stdlib.h>

class Utils
{
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight)
        {
            int rand1 = rand() % gridWidth + 1;
            int rand2 = rand() % gridHeight + 1;

            return std::make_tuple(rand1, rand2);
        }
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2)
        {
                return sqrt(((std::get<0>(pos1)-(std::get<0>(pos2)))*(std::get<0>(pos1)-(std::get<0>(pos2))))+(((std::get<1>(pos2))-(std::get<1>(pos2)))*((std::get<1>(pos2))-(std::get<1>(pos2)))));
        }
};

#endif // UTILS_H