#pragma once
#include "Materia.h"
class NodoMateria
{
private:
	Materia* materia;
	NodoMateria* sgte;
	NodoMateria* ante;

public:

	NodoMateria();
	NodoMateria(Materia* materia);
	~NodoMateria();
	void setMateria(Materia*);
	void setSgte(NodoMateria*);
	void setAnte(NodoMateria*);

	Materia* getMateria();
	NodoMateria* getSgte();
	NodoMateria* getAnte();
};


NodoMateria::NodoMateria()
{
	setAnte(NULL);
	setSgte(NULL);

}

NodoMateria::NodoMateria(Materia* pmateria)
{
	setMateria(pmateria);
}

NodoMateria::~NodoMateria()
{
}
void NodoMateria::setMateria(Materia* pmateria)
{
	this->materia = pmateria;
}

void NodoMateria::setSgte(NodoMateria* sgte)
{
	this->sgte = sgte;
}

void NodoMateria::setAnte(NodoMateria* ante)
{
	this->ante = ante;
}

Materia* NodoMateria::getMateria()
{
	return this->materia;
}

NodoMateria* NodoMateria::getSgte()
{
	return this->sgte;
}

NodoMateria* NodoMateria::getAnte()
{
	return this->ante;
}
