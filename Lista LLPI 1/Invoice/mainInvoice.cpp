#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(){
  int itemNumber, amountBought;
  double itemPrice;
  string itemDescription;

  cout << "Digite o numero, a descriçao, a quantidade comprada e o preço do primeiro item(com um espaço entre eles): ";
  cin >> itemNumber >> itemDescription >> amountBought >> itemPrice;

  Invoice invoice1 = Invoice(itemNumber, itemDescription, amountBought, itemPrice);
  Invoice invoice2;

  cout << "Digite o numero, a descriçao, a quantidade comprada e o preço do segundo item(com um espaço entre eles): ";
  cin >> itemNumber >> itemDescription >> amountBought >> itemPrice;

  invoice2.setItemNumber(itemNumber);
  invoice2.setItemDescription(itemDescription);
  invoice2.setAmountBought(amountBought);
  invoice2.setItemPrice(itemPrice);

  cout << "Numero do item1: " << invoice1.getItemNumber() << endl;
  cout << "Descriçao do item1: " << invoice1.getItemDescription() << endl;
  cout << "Quantidade comprada: " << invoice1.getAmountBought() << endl;
  cout << "Preço do item1: " << invoice1.getItemPrice() << endl;
  cout << "------------------------------------" << endl;

  cout << "Numero do item2: " << invoice2.getItemNumber() << endl;
  cout << "Descriçao do item2: " << invoice2.getItemDescription() << endl;
  cout << "Quantidade comprada: " << invoice2.getAmountBought() << endl;
  cout << "Preço do item2: " << invoice2.getItemPrice() << endl;
  cout << "------------------------------------" << endl;

  cout << "Preço a pagar no item1: " << invoice1.getInvoiceAmount() <<  endl;
  cout << "Preço a pagar no item2: " << invoice2.getInvoiceAmount() <<  endl;

  return 0;
}
