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

