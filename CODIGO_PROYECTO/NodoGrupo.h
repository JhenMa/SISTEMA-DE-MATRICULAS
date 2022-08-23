#pragma once
#include "Grupo.h"
class NodoGrupo
{
private:
	Grupo* grp;
	NodoGrupo* sgte;
	NodoGrupo* ante;
public:
	NodoGrupo();
	NodoGrupo(Grupo*);//Grupo* pGrupo
	~NodoGrupo();

	void setGrp(Grupo*);//Grupo* pGrupo
	void setSgte(NodoGrupo*);//NodoGrupo* pSgte
	void setAnte(NodoGrupo*);//NodoGrupo* pAnte

	Grupo* getGrp();
	NodoGrupo* getSgte();
	NodoGrupo* getAnte();
};

NodoGrupo::NodoGrupo()
{
	setGrp(NULL);
	setSgte(NULL);
	setAnte(NULL);
}

NodoGrupo::NodoGrupo(Grupo* grp)
{
	setGrp(grp);
	setSgte(NULL);
	setAnte(NULL);
}

NodoGrupo::~NodoGrupo()
{
}

void NodoGrupo::setGrp(Grupo* grp)
{
	this->grp = grp;
}

void NodoGrupo::setSgte(NodoGrupo* pSgte)
{
	this->sgte = pSgte;
}

void NodoGrupo::setAnte(NodoGrupo* pAnte)
{
	this->ante = pAnte;
}

Grupo* NodoGrupo::getGrp()
{
	return this->grp;
}

NodoGrupo* NodoGrupo::getSgte()
{
	return this->sgte;
}

NodoGrupo* NodoGrupo::getAnte()
{
	return this->ante;
}
