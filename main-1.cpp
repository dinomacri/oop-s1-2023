#include <iostream>

#include "Effect.cpp"
#include "GameEntity.cpp"
#include "Utils.h"

// #include <tuple>

int main(void)
{
    srand (time(NULL));

    std::tuple<int, int> yo1 = Utils::generateRandomPos(5, 5);
    std::tuple<int, int> yo2 = Utils::generateRandomPos(5, 5);

    std::cout << Utils::calculateDistance(yo1, yo2) << "\n";

    return 0;
}