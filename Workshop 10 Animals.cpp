


#include "Animal.h"
using namespace std;
int main()
{
    int usercommand;
    std::vector<Animal*> container;
   Animal* animalptr = nullptr;
   cout << "how many cows do you want?"<< endl;
   cin >> usercommand;

   for (int i = 0; i < usercommand; i++) {
       animalptr = new Cow();
       container.push_back(animalptr);
       container[i]->speak();
   }

   int usercommand1;
   cout << "how many sheep do you want?" << endl;
   cin >> usercommand1;

   std::vector<Animal*> container1;
   for (int i = 0; i < usercommand1; i++)
   {
       animalptr = new Sheep();

       container1.push_back(animalptr);
       container1[i]->speak();
   }

   int usercommand2;
   cout << "how many Frisian do you want?" << endl;
   cin >> usercommand2;
   std::vector<Animal*> container2;
   for (int i = 0; i < usercommand2; i++)
   {
       animalptr = new Frisian();
       container2.push_back(animalptr);
       container2[i]->speak();
   }


    
}