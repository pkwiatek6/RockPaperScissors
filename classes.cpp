#include "classes.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>
//RPS::RPS{
  int numChoices = 3;
  int average = 0;
  int numPlays = 0;
//}
int RPS::winCompare(int player, int ai){
  // 0 is a tie
  // 1 is player win
  // 2 is ai win
  //player input shoud be 0-2
  if((ai % numChoices) + 1 == player){
    return 1;
  }else if((player % numChoices) + 1 == ai){
    return 2;
  }else{
    return 0;
  }
}
void RPS::setAverage(int player){
  average = round((player + average) / numPlays);
}
int getAverage(){
  return average;
}
//meant to always lose against the player
int RPS::aiEasy(int player){
  return ((player % numChoices) - 1);
}
//meant to be the most fair to play against
int RPS::aiMedium(){
  srand(time(NULL));
  return rand() % numChoices + 1;
}
// should play againt the average
int RPS::aiHard(int player){
  if(average < 3){
    return average + 1;
  }else{
    return 0;
  }
}
//always meant to win
int RPS::aiImpossible(int player){
  return ((player % numChoices) + 1);
}
