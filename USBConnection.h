#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <iostream>
#include <stack>

class USBConnection {
  private:
    int id;
    USBConnection(int _id) : id(_id) {}
    static std::stack<int> ids;

  public:
    static USBConnection* CreateUsbConnection() {
      // if ids is empty, return null ptr
      if (ids.empty()) {
        return nullptr;
      }
      // get free id
      int newID = ids.top();
      // remove id from the stack
      ids.pop();
      // return pointer to connection with new ID
      return new USBConnection(newID);
    }
    ~USBConnection() {
      // restore the ID once object is finished
      ids.push(id);
    }
    int get_id() { return id; };
};

std::stack<int> USBConnection::ids = std::stack<int>({3,2,1});

#endif //CONNECTION_H
