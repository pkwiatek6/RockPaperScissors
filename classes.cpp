#include <classes.h>
#include <stdlib.h>
#include <time.h>
RPS::RPS{
  numChoices = 3;
}
int RPS::winCompare(int player, int ai){
  // 0 is a tie
  // 1 is player win
  // 2 is ai win
  if((ai % numChoices) + 1 == player){
    return 1;
  }else if((player % numChoices) + 1 == ai){
    return 2;
  }else{
    return 0;
  }
}
int RPS::aiEasy(int player){
  return ((player % numChoices) - 1);
}
int RPS::aiMedium(){
  srand(time(null));
  return rand() % numChoices + 1;
}
int RPS::aiHard(int player){

}
int RPS::aiImpossible(intPlayer){
  return ((player % numChoices) + 1);
}
