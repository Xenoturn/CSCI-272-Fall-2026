//Scenario A - Menu


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    
   vector <string> menu; //creates menu venu
   
   menu.push_back("Pizzas");  //adds first element
   
   menu.push_back("Tacos"); //adds element to the end/back
   
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

//Part B- Reflection: Why was vector a better choice?
/*Vector was a better choice because it can dynamically resize, add and remove elements allowing better control than arrays. 
With functions such as push_back(), insert() and erase(), controlling to contents that are in the menu are easier and seamless
compared to arrays.*/
