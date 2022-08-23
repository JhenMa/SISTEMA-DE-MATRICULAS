#pragma once
#include <string>
#include <fstream>
using namespace std;
class Estudiante
{
private:
    string cedula, nombreCompleto, numeroCel, correoE;
    bool activo;

public:
    Estudiante();
    Estudiante(string cedula, string nombreCompleto, string numeroCel, string correoE, bool activo);
    ~Estudiante();
    string getCedula() const;
    void setCedula(string cedula);

    string getNombreCompleto() const;
    void setNombreCompleto(string nombreCompleto);

    string getNumeroCel() const;
    void setNumeroCel(string numeroCel);

    string getCorreoE() const;
    void setCorreoE(string correoE);

    bool getActivo() const;
    void setActivo(bool activo);
    void modificar();

    string datos();
    string datosFormato();

    friend std::ostream& operator << (std::ostream& out, const Estudiante& obj);
    friend std::istream& operator >> (std::istream& in, Estudiante& obj);
};
Estudiante::Estudiante(string cedula, string nombreCompleto, string numeroCel, string correoE, bool activo)
{
    setCedula(cedula);
    setNombreCompleto(nombreCompleto);
    setNumeroCel(numeroCel);
    setCorreoE(correoE);
    setActivo(activo);

}

Estudiante::Estudiante()
{
    setCedula("0");
    setNombreCompleto("Estudiante Default");
    setNumeroCel("0");
    setCorreoE("N/A");
    setActivo(false);
}

Estudiante::~Estudiante()
{
}

string Estudiante::getCedula() const
{
    return cedula;
}

void Estudiante::setCedula(string cedula)
{
    this->cedula = cedula;
}

string Estudiante::getNombreCompleto() const
{
    return nombreCompleto;
}

void Estudiante::setNombreCompleto(string nombreCompleto)
{
    this->nombreCompleto = nombreCompleto;
}

string Estudiante::getNumeroCel() const
{
    return numeroCel;
}

void Estudiante::setNumeroCel(string numeroCel)
{
    this->numeroCel = numeroCel;
}

string Estudiante::getCorreoE() const
{
    return correoE;
}

void Estudiante::setCorreoE(string correoE)
{
    this->correoE = correoE;
}

bool Estudiante::getActivo() const
{
    return activo;
}

void Estudiante::setActivo(bool activo)
{
    this->activo = activo;
}

void Estudiante::modificar()
{
    this->setActivo(!this->getActivo());
}

string Estudiante::datos()
{
    return "Cedula: " + getCedula() + "\nNombre: " + getNombreCompleto() + "\nCorreo: " + getCorreoE() + "\nCelular: " + getNumeroCel() + "\nActivo?: " + (activo ? "Si" : "No");
}

string Estudiante::datosFormato() {
    return "Nombre: " + this->getNombreCompleto() + " Cedula: " + this->getCedula();
}

std::ostream& operator<<(std::ostream& out, const Estudiante& obj)
{
    out << obj.cedula << "\n" << obj.nombreCompleto << "\n" << obj.numeroCel << "\n" << obj.correoE << "\n" << obj.activo << "\n" << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, Estudiante& obj)
{

        getline(in, obj.cedula);
        getline(in, obj.nombreCompleto);
        getline(in, obj.numeroCel);
        getline(in, obj.correoE);
        in >> obj.activo;
        in.ignore(2);
        return in;
}
