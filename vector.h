#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector{
    double a,b,c;
public:
    Vector(double da,double db,double dc): a(da),b(db),c(dc){}
    double getA()const{return a;};
    double getB()const{return b;};
    double getC()const{return c;};
    void setA(double da){a=da;};
    void setB(double db){b=db;};
    void setC(double dc){c=dc;};
    void suma(const Vector&);
    double norma();
    double productoInterno(const Vector&)const;
};

#endif // VECTOR_H_INCLUDED
