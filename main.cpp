//This program will play a guessing game with the user
#include <iostream>
#include <random>
using namespace std;

int main () 
{
  const int MIN = 0;
  const int MAX = 100;
  int number;
  int counter = 0;
  random_device engine;
  uniform_int_distribution<int>RandomValue(MIN,MAX);
  random = RandomValue(engine);
  
  cout<< "Let's play a game!!"<< endl;
  cout<< " Guess the random number I'm thinking:"<< endl;
  cout<< "\t";
  cin>> number;
  while (number > random || number < random)
    {
      if (number > random)
      {
        cout<< "Too high, try agian!";
      } else if ( number < random) {
        cout<< "Too low. try again!";
        counter++;
      }   
    } for (number = random) {
    cout<< "Great job!! It only took you " << counter <<" guesses."<< endl;
    }
  return 0;
}