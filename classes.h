#ifndef RPS_H
#define RPS_H
class RPS{
private:
  int numChoices;
  int average;
  int numPlays;
public:
  //compare player input and ai
  int winCompare(int player, int ai);
  //always lose
  int aiEasy(int player);
  //random result
  int aiMedium();
  //plays against average
  int aiHard(int player);
  //always wins
  int aiImpossible(int player);
  //deals with the average case
  void setAverage(int player);
  int getAverage();
};
#endif
