#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  // Initialisering: Sette en verdi til en variabel *i det den opprettes*
  int x;
  x = 5; // OK, men ikk initialisering.
  
  int arr[10]={1,2,3,4,5,100,2,3,4,5};  
  //int arr[1000000]={1,2,3,4,5,100,2,3,4,5};   OGSÅ LOV! (Men kanskje ikke fra OS'et sin side)
  cout << "Array element 5: " << arr[5] << endl;

  // arr[11]=20; // Går ikke - her vet kompilator størrelsen
  int* arr2=arr;
  
  // arr[5] betyr: slå gå til int'en arr peker på, men legg til 5 på adressen
  cout << "Array 2 element 5: " << arr2[5] << endl;
  cout << "Address of array 2 element 5: " << arr2+5 << endl;
  cout << "Address of array 2 element 5: " << *(arr2+5) << endl;
  
  
  vector<int> myVector={1,2,3};
  cout << "Størrelsen på min vector er: " << myVector.size() << endl
       << "Vector element 2: " << myVector[2] << endl;
  myVector[2] = 42;
  cout << "Vector element 2: " << myVector[2] << endl;
  
  for(int i=0; i<myVector.size(); i++)
    cout << "Vector[i]: " << myVector[i] << endl;
  
  //C++11
  for(auto i : myVector)
    cout << "Vector[i]: " << i << endl;

  
  /** Try this, with arr[] initialized to different values 
  for(int i=0; i<1000; i++) 
    cout << "Arr2["<<i<<"]: " << arr2[i] << endl;
  **/

   const char* s = "Hello C strings";
  
   string modern = "This is a C++ string! More modern!";
   cout << "The C++ string is " << modern.size() << " bytes " << endl;
   
   for(auto i: modern)
     cout << i << endl;
     //cout << (char)(i+1) << endl; // Også OK!
  
   /** Går ikke - for ( x : y) syntaks krever "begin()" og "end()" funksjoner (iteratorer)
   for(auto i: s)
     cout << i << endl; */
   cout << "Now the C-style string: " << endl;
   
   cout << "* with loop: "; 
   for(int i = 0; i<20; i++)
     cout << s[i];
   cout << endl;

   //Betyr (nesten) det samme som :
   cout << "* Directly: " << s << endl;
   
   //Hva med:
   cout << "* Something wreckless: " << &(s[17]) << endl;
   
   // På min mac blir det foregående - &s[16] - faktisk C++-strengen. Hvorfor?
   
   // La oss se på adressene:
   // Problem... peker til char er adresse, men blir skrevet ut "som C-string"
   // Derfor gjør vi den om til "int" -peker for å få ut adressen   
   int* s_addr = (int*)s;
   int* modern_addr = (int*)modern.c_str();
   
   cout << "Adressen til s: " << s_addr  << endl;
   cout << "Adressen til modern sitt innholdet: " << modern_addr << endl;
   
   // På min mac er ikke disse adressene i det hele tatt i nærheten av hverandre. Hva skjer?
   // Sjekk denne:
   cout << "Adressen til strengen vi \"oppdaget\":" << (int*)(s+17) << endl;

   // Hvorfor er denne adressen så forskjellig fra adressen til modern.c_str() ?
   // Kan du endre den strengen vi oppdaget? Hvorfor / Hvorfor ikke? 
   // Dette er laaangt utenfor pensum, men heder & ære + twist til den som finner ut! (Jeg vet ;-)
   
}
