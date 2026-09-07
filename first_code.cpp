#include <iostream>
using namespace std;

void increment(int number){
    number++;
}

void incrementByReference (int& number){
    number++;
}

// Always look to check if there is an & sign to see if it references the address or not


void swapNumbers (int& a, int& b){
    
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    
    int x = 5;
    
    cout << "Before: " << x << endl; //5
    
    increment(x);
    
    cout << "After (pass by value) : " << x << endl; //5, Pass by value, only copied to number, does not modify the value
    
    
    cout << "Before: " << x << endl; //5
    
    incrementByReference(x);
    
    cout << "After (passed by reference): " << x << endl; //6, Pass by Reference, modifies the original data
    
    int p = 10;
    int q = 20;
    
    swapNumbers(p,q);
    
    cout << "P: " << p << endl;
    cout << "Q: " << q << endl; 
    
    //Notice the swap
    
    return 0;
}
