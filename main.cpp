#include <iostream>
#include <string>
#include <vector>
#include "operaciones.h"
#include "proyeccion.h"

using namespace std;

int main()
{


  int p[3][3],q[3][3],r[3][3];
  p[0][0]=1;
  p[0][1]=0;
  p[0][2]=0;
  p[1][0]=0;
  p[1][1]=1;
  p[1][2]=-1;
  p[2][0]=0;
  p[2][1]=1;
  p[2][2]=1;

  q[0][0]=0;
  q[0][1]=1;
  q[0][2]=0;
  q[1][0]=-1;
  q[1][1]=1;
  q[1][2]=0;
  q[2][0]=0;
  q[2][1]=0;
  q[2][2]=-1;
  operacion a;
  //a.Mprod_interno(p,q);
  cout<<a.Mnorma(p)<<endl;
  //a.Mmultiplicacion(p,q,r);
  // //a.Mtraza(p);
  // //a.Msuma(p,q,r);
  // cout<<"matriz: P "<<endl;
  // a.Mmostrar(p);
  // cout<<"matriz: Q "<<endl;
  // a.Mmostrar(q);
  // cout<<"matriz: R "<<endl;
  // a.Mmostrar(r);


  return 0;
}
