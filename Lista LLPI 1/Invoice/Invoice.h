#ifndef INVOICE_INVOICE_H
#define INVOICE_INVOICE_H

#include <iostream>
#include <string>

using namespace std;

class Invoice{
private:
  int itemNumber;
  string itemDescription;
  int amountBought;
  double itemPrice;
public:
  Invoice();
  Invoice(int itemNumber, string itemDescription, int amountBought, double itemPrice);
  int getItemNumber();
  string getItemDescription();
  int getAmountBought();
  double getItemPrice();
  double getInvoiceAmount();
  void setItemNumber(int itemNumber);
  void setItemDescription(string itemDescription);
  void setAmountBought(int amountBought);
  void setItemPrice(double itemPrice);
};

#endif
