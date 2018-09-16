#include "vector.h"
#include <math.h>

using namespace std;

void Vector::suma(const Vector &v) {
    a+=v.getA();
    b+=v.getB();
    c+=v.getC();
}

double Vector::norma(){
    return sqrt(a*a+b*b+c*c);
}

double Vector::productoInterno(const Vector &v) const{
    return a*v.getA()+b*v.getB()+c*v.getC();
}
