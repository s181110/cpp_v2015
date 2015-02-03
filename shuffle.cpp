/**
   Eksempler på bruk av random_shuffle
   
   Kompiler med:
   g++ -std=c++11 shuffle.cpp -o shuffle

   Dette kjører fint på Linux-vm'en - og alt fungerer "Som forventet"
   Bruker du andre platformer kan du få annen oppførsel bla. siden rand()
   kan være implementert forskjellig.   
 **/

#include <iostream>

// random_shuffle ligger her
#include <algorithm>

// Nye random-generatorer for C++11 ligger her
// Feks. Mersenne Twister, "mt19937" - som er det rand() bruker uansett :-)
#include <random>


using namespace std;


class Ting{
  static int i;
  string name_;
public:
  Ting():name_{"Ting_"+to_string(i++)}{/** Done! **/}
  string str(){return name_; }
};

class Tang{
  static int i;
  string name_;
public:
  Tang(string n):name_{n}{/** Done! **/}
  string str(){return name_; }
};


// Static medlemmer må "defineres" og initialiseres på utsiden av klassen
// Tenk slik: Deklarasjonen i header-fila sier *hva*, men vi må også si *hvor*
int Ting::i{0};

// Vector med ting og tang
vector<Ting> ting{10};
vector<Tang> tang{{"tang1"},{"tang2"},{"tang3"},{"tang4"},{"tang5"}};


int super_random(int i){
  return rand()%i;
}

int main(){
  
  // Seed til rand
  srand(time(0));

  cout << endl << "ting - sortert" << endl;

  for(Ting t : ting)
    cout << t.str() << endl;
  
  cout << endl << "Shuffle ting - med innebygged random. "
       << " Dette blir likt hver gang på noen platformer. " << endl;
  
  random_shuffle(ting.begin(),ting.end());
  
  for(Ting t : ting)
    cout << t.str() << endl;
  
  
  cout << endl << "Shuffle tang - men med egen random-funksjon" << endl;
  
  random_shuffle(tang.begin(),tang.end(),super_random);
  
  for(Tang t : tang)
    cout << t.str() << endl; 
  
  /** 
      Shuffle med C++11-generatorene i <random> 
      
      Forskjellen på "shuffle" og "random_shuffle" er nettopp
      signaturen på generator-funksjonen. "shuffle" tar en funksjon
      uten parametre - som er litt lettere.
  **/
  
  std::mt19937 generator (time(0)); 
  cout << endl <<  "Eksempel på noen random-tall fra C++11 'Mersenne twister':"
       << endl 
       << generator() << endl
       << generator() << endl
       << generator() << endl;
  

  cout << endl << "Shuffle tang - med C++11 random-generator"
       << "(som det er mange av)" << endl;
  
  shuffle(tang.begin(),tang.end(),generator);
          
  for(Tang t : tang)
    cout << t.str() << endl;    
  
  
}
