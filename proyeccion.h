#ifndef __PROYECCION_H__
#define __PROYECCION_H__

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class proyeccion
{
public:
  proyeccion();
  ~proyeccion();
  //vector<string> gram_schmidt(string v1 , string v2);
  string gram_schmidt(string v1 , string v2);
};

#endif
