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
  int random = RandomValue(engine);
  
  cout<< "Let's play a game!!"<< endl;
  cout<< "\n";
  cout<<"Guess the random number I'm thinking:"<< endl;
  cout<< "    "<<endl;
  cout<< endl;
  cin>> number;
  while (number != random)
    {
      if (number > random)
      {
        cout<< "Too high, try again!"<< endl;
      }
      else if ( number < random) 
      {
        cout<< "Too low. try again!"<< endl;
      }   
      cout<< "\t";
      cin>> number;
      counter++;
    }
    
    cout<< "Great job!! It only took you " << counter;
    cout<< " guesses."<< endl;
    
  return 0;
}