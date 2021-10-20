#include <fstream>
#include <iostream>
int main()
{
  int zahl;
  int i;
  std::ifstream fin("daten.txt");
  while(! fin.eof()){
    fin >> zahl ;
  std::cout << zahl << std::endl;
  }
  fin.close();
}