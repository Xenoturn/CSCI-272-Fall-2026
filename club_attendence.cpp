//Scenario B - IDS

#include <iostream>
#include <vector>
using namespace std;


double getAverage(const vector<int>& IDs) { // does not copy or modify original value
     
    double sum = 0;
    for(int ID : IDs){ //range based loop automatically adding each add to the sum
        sum += ID;
    }
    return sum / IDs.size(); //returning the sum of all the ids with the size of id
 }

int getHighest(const vector<int>& IDs){
    
    int highest = IDs[0]; //setting highest to the zero-index so it can be compared
    
    for(int i = 0; i < IDs.size(); i++){ //index based loop checking each index to see if its highest
      if (IDs[i] > highest){
            highest = IDs[i];
        }
    }
    return highest; //returning the highest
}

int main(){
  
  vector <int> studentsID(10);
  
  for (int i = 0; i < 10; i++){ //loop to get the input of each student
      cout << "Enter student " << i + 1 << "'s ID: "; //avoids the "student 0" and starts at student 1 and ends at student 10, better visually and logically 
      cin >> studentsID[i]; 

  }
   cout << "Average: " << getAverage(studentsID) << endl; //runs the function to get the average
   cout << "Highest: " << getHighest(studentsID) << endl; //runs the function to get the highest

  
}

//Part B: Reflection - What is Big O Notation?
/*Big O notation refers to the measurement of how much time a program takes in association with the increasing amount of data within it. 
It measures how the amount of work that increases due to the data increases. The common types of Big O notations are O(1), O(n) and O(n^2) */

//Part B: Reflection - Why is it important to programmers?     
/*It helps programmers in picking ways to approach data when it gets bigger. For example, say your going to a 
sold out stadium concert with 100,000 people, it would be a slow approach to find your seat by walking past
every seat until you find yours which is O(n). By using the section, row, seat number that you were given
when you first bought the ticket, you will be able to go straight to your seat to your seat in a timely manner
no matter how big the stadium is, (O(1).*/


