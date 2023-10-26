#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <math.h>

class Utils {
  public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
      int rand1 = rand() % gridWidth + 0;
      int rand2 = rand() % gridHeight + 0;

      return std::make_tuple(rand1, rand2);
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
      int x1 = std::get<0>(pos1);
      int y1 = std::get<1>(pos1);
      int x2 = std::get<0>(pos2);
      int y2 = std::get<1>(pos2);

      double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
      return distance;
    }

};

#endif // UTILS_H