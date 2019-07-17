#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(){};

Invoice::Invoice(int itemNumber, string itemDescription, int amountBought, double itemPrice){
  setItemPrice(itemPrice);
  setAmountBought(amountBought);

  this->itemNumber = itemNumber;
  this->itemDescription = itemDescription;
};

int Invoice::getItemNumber(){
  return itemNumber;
};

string Invoice::getItemDescription(){
  return itemDescription;
};

int Invoice::getAmountBought(){
  return amountBought;
};

double Invoice::getItemPrice(){
  return itemPrice;
};

void Invoice::setItemNumber(int itemNumber){
  this->itemNumber = itemNumber;
};

void Invoice::setItemDescription(string itemDescription){
  this->itemDescription = itemDescription;
};

void Invoice::setAmountBought(int amountBought){
  if(amountBought < 0){
    this->amountBought = 0;
  }else{
    this->amountBought = amountBought;
  }
};

void Invoice::setItemPrice(double itemPrice){
  if(itemPrice < 0){
    this->itemPrice = 0;
  }else{
    this->itemPrice = itemPrice;
  }
};

double Invoice::getInvoiceAmount(){
  return itemPrice * amountBought;
};
