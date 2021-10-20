#include <fstream>
#include <iostream>
int main()
{
  int zahl;
  int i;
  std::ifstream fin("daten.txt");
  for (i = 0; i < 2; i++){
  //while(! fin.eof()){
    fin >> zahl ;
  std::cout << zahl << std::endl;
  }
  fin.close();
}