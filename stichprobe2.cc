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
  int O = N/M;
  int a[N][M];
  int i=0;
  float mean[O];
  float Mittelwert;
  float var[O];
  float Varianz;
  while(!fin.eof()){
    for(int j=0; j<M; j++){
      fin >> a[i][j];
      mean[i] += a[i][j];
    }
    if(!fin.eof()){
      mean[i]=mean[i]/M;
      fout << mean[i] << std :: endl ;
      
      for(int j=0; j<M; j++){
        var[i]+=pow(a[i][j]-mean[i],2);
      }
      var[i]=var[i]/M;
      fout2 << var[i] << std :: endl ;

      float stddev = sqrt(var[i]);
      //std :: cout << "Standardabweichung: "<<stddev << std :: endl ;
      Mittelwert += mean[i];
      Varianz += var[i];
      i++;
    }
  }
  std :: cout << "Mittelwert der 9er Blöcke: "<< Mittelwert/O << std :: endl ;
  std :: cout << "Varianz der 9er Blöcke: "<< Varianz/O << std :: endl ;
  std :: cout << "Varianz der 9er Blöcke mit Bessel's Correction: "<< Varianz/(O-1) << std :: endl ;

  fin.close();
  fout.close();
  fout2.close();
}