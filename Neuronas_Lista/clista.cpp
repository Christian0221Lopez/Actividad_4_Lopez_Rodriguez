#include "clista.h"
#include "neurona.h"
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <string>
#include <sstream>
#include <QApplication>

using namespace std;

Clista::Clista()
{
    Inicio = new Neurona;
    Final = new Neurona;

    Inicio->pSig = Final;
    Final->pAnt = Inicio;

    Final->pSig = NULL;
    Inicio->pAnt = NULL;
}

Clista::~Clista()
{
    Vaciar();
}

void Clista::InsertarInicio(int id,float voltaje,int pos_x,int pos_y,int red,int green,int blue)
{

    Inicio->InsertarAdelantefloat(id,voltaje,pos_x,pos_y,red,green,blue);

}

void Clista::InsertarFinal(int id,float voltaje,int pos_x,int pos_y,int red,int green,int blue)
{

    Final->pAnt->InsertarAdelantefloat(id,voltaje,pos_x,pos_y,red,green,blue);
}

float Clista::EliminarInicio()
{

    Inicio->pSig->pSig->EliminarSiguiente();

    return 0;
}

float Clista::EliminarFinal()
{

    Final->EliminarSiguiente();

    return 0;
}

bool Clista::isEmpty()
{
    return Inicio->pSig == Final;
}

void Clista::Imprimir()
{
    Neurona* Pnn = Inicio->pSig;

    while (Pnn != Final)
    {
        cout << Pnn->Id << " ";
        cout << Pnn->Voltaje << " ";
        cout << Pnn->Pos_x << " ";
        cout << Pnn->Pos_y << " ";
        cout << Pnn->Red << " ";
        cout << Pnn->Green << " ";
        cout << Pnn->Blue << " ||";
        Pnn = Pnn->pSig;
    }
}

int Clista::Tamanio()
{
    Neurona* Pnn = Inicio->pSig;
    int l = 0;

    while (Pnn != Final)
    {
        l++;
        Pnn = Pnn->pSig;
    }
    return l;
}

bool Clista::isFull()
{
    return false;
}

void Clista::Vaciar()
{
    Inicio->pSig = Final;
    Final->pAnt = Inicio;
}

int Clista::setID()
{
    Neurona* Pnn = Inicio->pSig;

    while(Pnn!=Final)
    {
        return Pnn->Id;
        Pnn = Pnn->pSig;
    }

}

float Clista::setV()
{
    Neurona* Pnn = Inicio->pSig;

    while(Pnn!=Final)
    {
        return Pnn->Voltaje;
        Pnn = Pnn->pSig;
    }

}

int Clista::setX()
{
    Neurona* Pnn = Inicio->pSig;

    while(Pnn!=Final)
    {
        return Pnn->Pos_x;
        Pnn = Pnn->pSig;
    }

}

int Clista::setY()
{
    Neurona* Pnn = Inicio->pSig;

    while(Pnn!=Final)
    {
        return Pnn->Pos_y;
        Pnn = Pnn->pSig;
    }

}

int Clista::setR()
{
    Neurona* Pnn = Inicio->pSig;

    while(Pnn!=Final)
    {
        return Pnn->Red;
        Pnn = Pnn->pSig;
    }

}

int Clista::setG()
{
    Neurona* Pnn = Inicio->pSig;

    while(Pnn!=Final)
    {
        return Pnn->Green;
        Pnn = Pnn->pSig;
    }

}

int Clista::setB()
{
    Neurona* Pnn = Inicio->pSig;

    while(Pnn!=Final)
    {
        return Pnn->Blue;
        Pnn = Pnn->pSig;
    }

}

QString Clista::Set()
{
    Neurona* Pnn = Inicio->pSig;
    while(Pnn!=Final)
    {
        Pnn->Id;
        QString oracion = QString::number(Pnn->Id);
        Pnn->Voltaje;
        oracion = QString::number(Pnn->Voltaje);
        Pnn->Pos_x;
        oracion = QString::number(Pnn->Pos_x);
        Pnn->Pos_y;
        oracion = QString::number(Pnn->Pos_y);
        Pnn->Red;
        oracion = QString::number(Pnn->Red);
        Pnn->Green;
        oracion = QString::number(Pnn->Green);
        Pnn->Blue;
        oracion = QString::number(Pnn->Blue);
        return oracion;

        Pnn = Pnn->pSig;
    }
}





