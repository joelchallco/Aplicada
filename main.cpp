#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    Vector v1(1,2,3);
    Vector v2(1,0,1);
    cout<<v1.norma()<<endl;
    cout<<v2.norma()<<endl;
    cout<<v1.productoInterno(v2)<<endl;
    return 0;
}
