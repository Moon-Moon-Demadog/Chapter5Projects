// This program will display a bar graph with populaiton data.
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{
  ifstream inputFile;
  string town, fileName;
  int  year = 1900;
  const int StartYear= 1900, EndYear= 2000, Factor = 1000, increment = 20;
  cout<< "Let's look at a bar grapgh of population growth."<< endl;
  cout<< "First name your town:" << endl;
  cout<< "\t  " << endl;
  cin>> town;
  cout<< "Let's access data for " << town << "."<< endl;
  cout<< "What is the file name , complete with extensions :  " << endl;
  cin>> fileName;
  inputFile.open(fileName);
  
  
  if (inputFile.fail())
  {
    cout<< " Error opening file." << endl;
    return 1;
  }
  int population= 0;
  int num = population/Factor;
  cout<< setw (4) << town << " population growth:" << endl;
  cout<< "YEAR \t\t Population :" << endl;


  while (inputFile>> population)
  {
    if (year >= StartYear && (year - StartYear) % increment == 0 && year>= EndYear) {
      int year = 1900 + increment;
      cout<< year << ": \t\t";
     for (int i = 0; i < num; ++i)
       {
         cout<< "*";
       }
    }
    cout<< endl;
  }
  
}