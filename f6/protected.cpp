#include <iostream>

using namespace std;


/** A nice guy with a white hat makes a banking system...
    and he adds protection! **/
class Account{
protected: // Try to comment this away!
  float balance_{0};
public:
  void deposit(float cash){
    balance_+=cash;
  }
  float balance() const {return balance_;}    
};


/** 
    In a different header file, a programmer in a silk suit
    and a black fedora makes "a mistake"... */
class PensionFund : public Account{
public:
  void invest(Account* a){    
    balance_+=((PensionFund*)a)->balance_;
    ((PensionFund*)a)->balance_=0;
  }
};


int main(){
  cout << "*** \"Protected\" Investments ***" << endl;
  Account familySavings;  
  cout << endl << "Joe saves some money for his faimily. ";
  
  familySavings.deposit(500);
  
  cout << "Balance: " << familySavings.balance() << endl;
  
  cout << endl << "A guy in a silk suit - an 'investor' - enters the bank..." 
       << endl;
  PensionFund mafiaWarChest;  
  PensionFund* protectedInvestments = &mafiaWarChest;
  
  // And let's make a nice front - just for appearances
  protectedInvestments->invest(&familySavings);
  
  cout << "Family Savings are now: " << familySavings.balance() << endl;
  cout << "MafiaWarChest is now: " << mafiaWarChest.balance() << endl;
  
}
