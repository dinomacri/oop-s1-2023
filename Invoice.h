#include <iostream>
#include <string>

class Invoice {
  private:
    std::string invoiceId;
    int dollarsOwed = 0;
  public:
    Invoice() : invoiceId("null") {}
    Invoice(std::string id) : invoiceId(id) {}

    void addServiceCost(int costDollars) {
      dollarsOwed = dollarsOwed + costDollars;
    }
    int getDollarsOwed() {
      return dollarsOwed;
    }

    std::string getInvoiceId() {
      return invoiceId;
    }
};
