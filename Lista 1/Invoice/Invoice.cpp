#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(){};

Invoice::Invoice(int itemNumber, string itemDescription, int amountBought, double itemPrice){
  if(amountBought < 0){
    this->amountBought = 0;
  }
  if(itemPrice < 0){
    this->itemPrice = 0;
  }

  this->itemNumber = itemNumber;
  this->itemPrice = itemPrice;
  this->itemDescription = itemDescription;
  this->amountBought = amountBought;
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
  if(amountBought < 0){
    this->amountBought = 0;
  }else{
    this->itemNumber = itemNumber;
  }
};

void Invoice::setItemDescription(string itemDescription){
  if(itemPrice < 0){
    this->itemPrice = 0;
  }else{
    this->itemDescription = itemDescription;
  }
};

void Invoice::setAmountBought(int amountBought){
  this->amountBought = amountBought;
};

void Invoice::setItemPrice(double itemPrice){
  this->itemPrice = itemPrice;
};

double Invoice::getInvoiceAmount(){
  return itemPrice * amountBought;
};
