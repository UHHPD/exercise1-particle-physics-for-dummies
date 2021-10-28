#include <fstream>
#include <iostream>
#include <math.h>
int main()
{
  std::ifstream fin("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream fout2("varianzen.txt");
  int N = 234;
  int M =9;
  int a[N][M];
  int i=0;
  while(!fin.eof()){
    float mean = 0;
    for(int j=0; j<M; j++){
      fin >> a[i][j];
      mean += a[i][j];
    }
    if(!fin.eof()){
      mean=mean/M;
      fout << mean << std :: endl ;
      float var = 0;
      
      for(int j=0; j<M; j++){
        var+=pow(a[i][j]-mean,2);
      }
      var=var/M;
      fout2 <<var << std :: endl ;

      float stddev = sqrt(var);
      //std :: cout << "Standardabweichung: "<<stddev << std :: endl ;
      
      i++;
    }
  }
  fin.close();
  fout.close();
  fout2.close();
}