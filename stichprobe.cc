#include <fstream>
#include <iostream>
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
}