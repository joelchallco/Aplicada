#include "operaciones.h"

operacion::operacion()
{
  // a = "hola";
  // cout<<"hola"<<endl;
}

operacion::~operacion()
{

}

bool operacion::Mmostrar(int k[3][3])
{
  for(int i=0;i<3;i++)
  {
    cout<<k[i][0]<<"|";
    cout<<k[i][1]<<"|";
    cout<<k[i][2]<<"|";
    cout<<endl;
  }
  return 1;
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
    k[0][0] = m[0][0]*n[0][0] + m[0][1]*n[1][0] + m[0][2]*n[2][0];
    k[0][1] = m[0][0]*n[0][1] + m[0][1]*n[1][1] + m[0][2]*n[2][1];
    k[0][2] = m[0][0]*n[0][2] + m[0][1]*n[1][2] + m[0][2]*n[2][2];

    k[1][0] = m[1][0]*n[0][0] + m[1][1]*n[1][0] + m[1][2]*n[2][0];
    k[1][1] = m[1][0]*n[0][1] + m[1][1]*n[1][1] + m[1][2]*n[2][1];
    k[1][2] = m[1][0]*n[0][2] + m[1][1]*n[1][2] + m[1][2]*n[2][2];
    cout<<m[1][1]<<endl;

    k[2][0] = m[2][0]*n[0][0] + m[2][1]*n[1][0] + m[2][2]*n[2][0];
    k[2][1] = m[2][0]*n[0][1] + m[2][1]*n[1][1] + m[2][2]*n[2][1];
    k[2][2] = m[2][0]*n[0][2] + m[2][1]*n[1][2] + m[2][2]*n[2][2];

  return 1;
}

int operacion::Mtraza(int m[3][3] )
{
  int k;
  k = m[0][0] + m[1][1] + m[2][2];
  return k;
}

bool operacion::Mtranspuesta(int m[3][3],int k[3][3] )
{
  /*00-01-02
    10-11-12
    20-21-22
  */
  // int p[1][1];
  //
  // p[0][0] = m[0][1];
  // m[0][1] = m[1][0];
  // m[1][0] = p[0][0];
  // p[0][0] = m[0][2];
  // m[0][2] = m[2][0];
  // m[2][0] = p[0][0];
  // p[0][0] = m[1][2];
  // m[1][2] = m[2][1];
  // m[2][1] = p[0][0];

  k[0][0] = m[0][0];
  k[0][1] = m[1][0];
  k[0][2] = m[2][0];
  k[1][0] = m[0][1];
  k[1][1] = m[1][1];
  k[1][2] = m[2][1];
  k[2][0] = m[0][2];
  k[2][1] = m[1][2];
  k[2][2] = m[2][2];

  return 1;
}

int operacion::Mprod_interno(int m[3][3], int n[3][3])
{
  int tmp[3][3];

  Mtranspuesta(m,tmp);
  cout<<"transpuesta"<<endl;
  Mmostrar(tmp);
  Mmultiplicacion(tmp,n,tmp);
  cout<<"multi"<<endl;
  Mmostrar(tmp);
  return Mtraza(tmp);
}

float operacion::Mnorma(int m[3][3])
{
  cout<<Mprod_interno(m,m)<<endl;
  return sqrt( float( Mprod_interno(m,m) ) );
}
