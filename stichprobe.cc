#include <fstream>
#include <iostream>
#include <math.h>
int main()
{
  std::ifstream fin("datensumme.txt");
  float mean = 0;
  int N = 234;
  int a[N];
  for(int i=0; i<N; i++){
    fin >> a[i];
    mean += a[i];
  }
  mean=mean/N;
  std :: cout << mean << std :: endl ;
  float var = 0;
  for(int i=0; i<N; i++){
    var+=pow(a[i]-mean,2);
  }
  var=var/N;
  std :: cout << var << std :: endl ;
  float stddev = sqrt(var);
  std :: cout << stddev << std :: endl ;
}