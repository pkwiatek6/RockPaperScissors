#include "classes.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>
using namespace std;
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
  numPlays++;
  average = round((player + total) / numPlays);
  total += player;
}
//meant to always lose against the player
int RPS::aiEasy(int player){
  if(player > 1){
    return player - 1;
  }else{
    return 3;
  }
}
//meant to be the most fair to play against
int RPS::aiMedium(){
  srand(time(NULL));
  return rand() % numChoices + 1;
}
// should play againt the average
int RPS::aiHard(int player){
  RPS::setAverage(player);
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
