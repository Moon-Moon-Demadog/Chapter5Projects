// This program will display a bar graph with populaiton data.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
  ifstream inputFile;
  string town, fileName;
  int num1, num2, num3, num4, num5, num6;
  cout<< "Let's look at a bar grapgh of population growth."<< endl;
  cout<< "First name your town :   " << endl;
  cin>> town;
  cout<< "Let's access data for " << town << "."<< endl;
  cout<< "What is the file name , complete with extensions :  " << endl;
  cin>> fileName;
  if (inputFile.fail())
  {
    cout<< " Error opening file." << endl;
  } else {
    
  }
  
}