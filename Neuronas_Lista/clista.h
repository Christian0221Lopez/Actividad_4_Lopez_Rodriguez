#ifndef CLISTA_H
#define CLISTA_H
#include "neurona.h"


class Clista
{
private:
    Neurona* Inicio;
    Neurona* Final;
    friend class Neurona;
public:
    Clista();
    ~Clista();
    void InsertarInicio(int,float,int,int,int,int,int);
    void InsertarFinal(int,float,int,int,int,int,int);
    float EliminarInicio();
    float EliminarFinal();
    int Tamanio();
    bool isEmpty();
    bool isFull();
    void Imprimir();
    void Vaciar();
    int setID();
    float setV();
    int setX();
    int setY();
    int setR();
    int setG();
    int setB();
    QString Set();
};

#endif // CLISTA_H
