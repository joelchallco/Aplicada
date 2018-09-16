#include "operaciones.h"

operacion::operacion()
{
  a = "hola";
  cout<<"hola"<<endl;
}

operacion::~operacion()
{

}

bool operacion::Msuma(int m[3][3] ,int n[3][3] ,int k[3][3])
{
  for(int i=0;i<3;i++)
  {
    k[i][0]= m[i][0] + n[i][0];
    k[i][1]= m[i][1] + n[i][1];
    k[i][2]= m[i][2] + n[i][2];
  }
  return 1;
}

bool operacion::Mmultiplicacion(int m[3][3] ,int n[3][3] ,int k[3][3])
{
  for(int i=0;i<3;i++)
  {
    m[i][0]*n[0][i];
    m[i][1]*n[1][i];
    m[i][2]*n[2][i];
  }
  return 1;
}

int operacion::Mtraza(int m[3][3] )
{
  int k;
  k = m[0][0] + m[1][1] + m[2][2];
  return k;
}

bool Mtranspuesta(int m[3][3] )
{
  /*00-01-02
    10-11-12
    20-21-22
  */
  int p[1][1];

  p[0][0] = m[0][1];
  m[0][1] = m[1][0];
  m[1][0] = p[0][0];
  p[0][0] = m[0][2];
  m[0][2] = m[2][0];
  m[2][0] = p[0][0];
  p[0][0] = m[1][2];
  m[1][2] = m[2][1];
  m[2][1] = p[0][0];

  return 1;
}
