#include <iostream>

// "Gamle" random_shuffle ligger her
#include <algorithm>


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
  
  
  
}
