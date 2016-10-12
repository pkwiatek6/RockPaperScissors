//Rock Paper Scissor
//On start gives you a meu with 3 choices
//1 = play game
//2 = Difficulty
//3 = Custom
//4 = quit
//Algorith for checking win/lose should be
//numChoices = choices[].legnth()
//if((ComputerIn % numChoices) + 1 == UserIn)
//  User win
//else((UserIn % numChoices) + 1 == ComputerIn)
//  Computer win
//else
// tie
//computer AI for hard dificulty should take the average of the player rounded
#include <iostream>
#include "classes.h"
using namespace std;

void Menu(int type);
bool selectOption(int type);

RPS gameRPS;
int difficulty = 0;

int main() {
  do{
  Menu(0);
}while(selectOption(0));
  return 0;
}
void Menu(int type){
  if(type == 0){
    cout << "***********************" << endl;
    cout << "Main menu"<< endl;
    cout << "***********************" << endl;
    cout << "1. Play" << endl;
    cout << "2. Difficulty" << endl;
    cout << "3. Quit" << endl;
  }else if(type == 1){
    cout << "***********************" << endl;
    cout << "Difficulty"<< endl;
    cout << "***********************" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "4. Impossible" << endl;
    cout << "5. Back" << endl;
  }
}
bool selectOption(int type){
  int input = 0;
  cin >> input;
  if(type == 0){
    if(input == 1){
      //play the game with the selected difficulty
      cout << "Please choose" << endl;
      cout << "1. Rock" << endl;
      cout << "2. Paper" << endl;
      cout << "3. Scissor" << endl;
      cin >> input;
      int result = 0;
      switch (difficulty) {
        case 0: result = gameRPS.winCompare(input, gameRPS.aiEasy(input));
                break;
        case 1: result = gameRPS.winCompare(input, gameRPS.aiMedium());
                break;
        case 2: result = gameRPS.winCompare(input, gameRPS.aiHard(input));
                break;
        case 3: result = gameRPS.winCompare(input, gameRPS.aiImpossible(input));
                break;
        default: break;
      }
      switch (result) {
        case 0: cout << "Tie" << endl;
                break;
        case 1: cout << "Win" << endl;
                break;
        case 2: cout << "Lose" << endl;
                break;
      }
      return true;
    }else if(input == 2){
      Menu(1);
      selectOption(1);
      //change AI difficulty
      return true;
    }else{
      return false;
    }
  }else if(type == 1){
    if(input == 1){
      //ai = easy
      difficulty = 0;
      return true;
    }else if(input == 2){
      //ai = medium
      difficulty = 1;
      return true;
    }else if(input == 3){
      //ai = hard
      difficulty = 2;
      return true;
    }else if(input == 4){
      //ai = impossible
      difficulty = 3;
      return true;
    }else{
      return false;
    }
  }else{
    return false;
  }
}
