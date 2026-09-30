//Scenario A - Menu


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    
   vector <string> menu;
   
   menu.push_back("Pizzas");
   
   menu.push_back("Tacos");
   
   menu.push_back("Burgers");
   
   menu.push_back("Burritos");
   
   menu.push_back("Nuggets");
   
   menu.insert(menu.begin() + 1, "Pasta"); //added to the 2nd position
   
   menu.erase(menu.begin() + 3); //gets rid of the element at the fourth position which was Burgers
   
   //range based-loop to print all of the menu options
   
  
  for (string food : menu){ 
       cout << food << " ";
   }
}
