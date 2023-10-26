#ifndef CELL_H
#define CELL_H

#include <tuple>

class Cell {
  private:
    std::tuple<int, int> position;
    char type;

  public:
    Cell() {
      position = std::make_tuple(-1, -1);
      type = 'X';
    }
    Cell(int _x, int _y, char _type) {
      position = std::make_tuple(_x, _y);
      type = _type;
    }

    std::tuple<int, int> getPos() {
      return position;
    }

    char getType() {
      return type;
    }

    void setPos(int _x, int _y) {
      position = std::make_tuple(_x, _y);
    }

    void setType(char _type) {
      type = _type;
    }

};

#endif // CELL_H