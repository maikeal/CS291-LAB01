// Group 2 LAB01 CS291 // 


#include <iostream> 
#include <string> 

using namespace std; 

int main() { 



  cout << "Welcome to Lost Fortune" << endl << endl; 



  // variables to hold user inputs 

  int firstNumber = 0; 

  // second number should be smaller than first number 

  int secondNumber = 0; 

  string lastName = ""; 



  cout << "Please enter the following for your personalized adventure \n" << endl;

  cout << "Enter a number: "; 

  cin >> firstNumber; 

  cout << "Enter a number, smaller than the first: "; 

  cin >> secondNumber; 

  cout << "Enter your last name: "; 

  cin >> lastName; 
  cout << ".\n" << endl;



  cout << "A brave group of " << firstNumber << " set out on a quest -- in search of the lost treasure of the Ancient Dwarves. "; 

  cout << "The group was led by that legendary rogue, " << lastName << ".\n"; 



    int remainingAdventurers = firstNumber - secondNumber; 

    cout << "Along the way, a band of marauding ogres ambushed the party. All fought bravely under the command of " << lastName << ", "; 

    cout << "and the ogres were defeated, but at a cost. Of the adventurers, " << secondNumber << " were vanquished, leaving just " << remainingAdventurers << " in the group. " << "\n"; 



    cout << "The party was about to give up all hope. But while laying the deceased to rest, they stumbled upon the buried fortune. "; 



  const int goldPieces = 900;
  int extraGoldPieces;
    extraGoldPieces = goldPieces % remainingAdventurers;   



    cout << "So the adventurers split " << goldPieces << " gold pieces. " << lastName << " held on to the extra " << extraGoldPieces << " pieces to keep things fair, of course.\n"; 



    return 0; 

} 
