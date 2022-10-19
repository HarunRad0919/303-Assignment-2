#include <iostream>
#include <stdexcept>
#include <limits>
#include "functions.h"
using namespace std;

void findIndex(int array[], int size){
  int value = 0;
  bool test = false;
  //Variables to check if the number was found and the value the user wants
  cout << "What integer would you like to check for in the array?\n";
  cin >> value;
  for (int i = 0; i < size; i++){
    //For loop to go through the array and check if at array[i] the value is the same
    if (array[i] == value){
      //If its found make test true and display to user where it was at
      test = true;
      cout << "Your value is at index : " << i << "!" << endl;
    }
  }
  if (test == false){
    //If not found display to user it wasn't found
    cout << "Your value was not found in the array." << endl;
  }
}

void modArray(int array[], int size){
  cin.exceptions(ios_base::failbit);
  int index = 0;
  int newValue = 0;
  bool loop = false;
  //Loop to keep checking for errors and making them give a correct data type
  cout << "What index would you like to replace?" << endl;
  while (loop == false){
    try{
      cin >> index;
      loop = true;
      //If the value is correct end the loop
    }
    catch (ios_base::failure& ex){
      cout << "You entered a value that isn't an integer!\n";
      //Telling user that the put the wrong data type
      cin.clear();
      cin.ignore(numeric_limits<int>::max(), '\n');
      //clearing the cin 
      cout << "Enter a new value: \n";
      //Asking for a new value
    }  
  }
  loop = false;
  //reseting the loop
  cout << "What value would you like to replace it with?" << endl;
  while (loop == false){
    try{
      cin >> newValue;
      loop = true;
      //If the value is correct end the loop
    }
    catch (ios_base::failure& ex){
      cout << "You entered a value that isn't an integer!\n";
      //Telling user that the put the wrong data type
      cin.clear();
      cin.ignore(numeric_limits<int>::max(), '\n');
      //clearing the cin 
      cout << "Enter a new value: \n";
      //Asking for a new value
  }
    }
  
  //Variables for the users to get index and value
  
  for (int i = 0; i < size; i++){
    //For loop to go through array and find when i reaches the index 
    if (i == index){
      //If it is found it displays the old value and the new value
      cout << "The old value is : " << array[i] << "!" << endl;
      array[i] = newValue;
      cout << "The new value is : " << array[i] << "!" << endl;
    }
  }
}

void addendArray(int array[], int size){
  cin.exceptions(ios_base::failbit);
  int endValue = 0;
  bool loop = false;
  //Loop to keep checking for errors and making them give a correct data type
  //Variable for the end value
  cout << "What value would you like to add to the end of the array?" << endl;
  while (loop == false){
    try{
      cin >> endValue;
      array[size++] = endValue;
      //If the data value is right then it will add the end value and break the loop
      loop = true;
    }
    
    catch (ios_base::failure& ex){
      cout << "You entered a value that isn't an integer!\n";
      //Tells the user the value is the wrong data type
      cin.clear();
      cin.ignore(numeric_limits<int>::max(), '\n');
      //Clears the cin
      cout << "Enter a new value: \n";
      //Has them pick a new value
    }
  }
  
  
  for (int i = 0; i < size; i++){
    //Display array after changes
    cout << array[i] << " ";
  }
}

void removeIndxArray(int array[], int size){
  int deletedIndex = 0;
  //Variable for the deleted index
  cout << "\nWhat index do you want to delete?" << endl;
  cin >> deletedIndex;
  cout << "Old Array: ";
  for (int i = 0; i < size; i++){
    //For loop to display array before deletion
    cout << array[i] << " ";
  }
  for (int i = 0; i < size; i++){
    //For loop to go through the array
    if (i == deletedIndex){
      //If i reaches requested index go and delete the variable
      for (int j = i; j < size-1; j++){
        //Fixing the array so it doesn't seg fault
        array[j] = array[j+1];
      }
      break;
    }
  }
  cout << "\nNew Array: ";
  for (int i = 0; i < size-1; i++){
    //For loop to display array after deletion
    cout << array[i] << " ";
  }
}