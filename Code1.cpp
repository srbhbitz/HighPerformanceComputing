
#include <iostream>
#include <fstream>
#include <ctime>
#include <time.h>
using namespace std;

int main()
{
  string line;
  clock_t t1, t2;
  //For writing text file
  //Creating ofstream & ifstream class object
  t1 = clock();
  ifstream inputFile ("test1_created.txt");
  ofstream outFile2 ("NewFile.txt");
  if(inputFile && outFile2)
  {
    while(getline(inputFile,line))
    {
      outFile2 << line << "\n";
    }
    cout << "Copy Finished \n";
  } 
  else 
  {
    //Something went wrong
    printf("Cannot read File");
  }
  //Closing file
  inputFile.close();
  outFile2.close();
  t2 = clock();
  std::cout << "time taken to copy one 100MB file to another file = " << (double)(t2-t1)/CLOCKS_PER_SEC <<'\n';
  return 0;
}
