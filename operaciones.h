#ifndef __OPERACIONES_H__
#define __OPERACIONES_H__

//#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include <math.h>

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
  bool Mtranspuesta(int m[3][3], int k[3][3]);
  bool Mmostrar(int k[3][3]);
  int Mprod_interno(int m[3][3],int n[3][3]);
  float Mnorma(int m[3][3]);
};

#endif
