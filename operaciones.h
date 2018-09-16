#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class operacion
{
public:
  string a;
  operacion();
  ~operacion();

  /*MATRICES*/
  bool Msuma(int m[3][3] ,int n[3][3] ,int k[3][3]);
  bool Mmultiplicacion(int m[3][3] ,int n[3][3] ,int k[3][3]);
  int Mtraza(int m[3][3]);
  bool Mtranspuesta(int m[3][3]);
};

#endif
