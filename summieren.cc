#include <fstream>
#include <iostream>
int main()
{
  int zahl;
  int i;
  int sum;
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  while(! fin.eof()){
    for (i = 0; i < 2; i++) {
      fin >> zahl ;
        if (i==0){
        sum = zahl;
        //fout << zahl << " + ";
        }
        else{
          sum += zahl;
        //fout << zahl << " ";
        }
    }
    if(!fin.eof()){
    fout << sum <<std::endl;
    }
  }
  fin.close();
  fout.close();
}