#include "entero.h"
#include <cstdlib>
#include <assert.h>

using namespace std;

Entero::Entero()
{
    valor = 0;
}

Entero::Entero(int v)
{
    valor = v;
}

Entero::~Entero()
{}


void Entero::set_dato(int n)
{
    valor = n;
}

int Entero::get_dato(void){
    return valor;
}
//Devuelve una copia del Número actual en el tipo Entero
const Entero Entero::toEntero() const
{
    return Entero(*this);
}

const Real Entero::toReal() const
{
    Real auxiliar(this->valor);
    return auxiliar;
}

//Escribe una Numero al flujo sout
ostream& Entero::toStream(ostream& sout) const
{
    sout << this->valor;
    return sout;
}

//Lee un Numero desde flujo sin
istream& Entero::fromStream(istream& sin)
{
    int auxiliar;
    sin >> auxiliar;
    set_dato(auxiliar);
    return sin;
}

Numero& Entero::operator+(const Numero &b) const
{
    cout << "Sumando:" << b << endl;
    Entero auxiliar = b.toEntero();
    return *(new Entero(valor+auxiliar.valor));
}

Numero& Entero::operator-(const Numero &b) const
{
    Entero auxiliar = b.toEntero();
    return *(new Entero(valor-auxiliar.valor));
}

Numero& Entero::operator*(const Numero &b) const
{
    Entero auxiliar = b.toEntero();
    return *(new Entero(valor*auxiliar.valor));
}

Numero& Entero::operator/(const Numero &b) const
{
    Entero auxiliar = b.toEntero();
    return *(new Entero(valor/auxiliar.valor));
}