#include <fstream>
#include <iostream>
int main()
{
  int zahl;
  int i;
  int sum;
  std::ifstream fin("daten.txt");
  //for (i = 0; i < 2; i++){
  while(! fin.eof()){
  for (i = 0; i < 2; i++) {
    fin >> zahl ;
    if (i==0){
    sum = zahl;
    std::cout << zahl << " + ";
    }
    else{
      sum += zahl;
    std::cout << zahl << " ";
    }
  //  std::cout <<  std::endl;
    }
    std::cout << "= " << sum <<std::endl;
  }
  fin.close();
}