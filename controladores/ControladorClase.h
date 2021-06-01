#ifndef CONTROLADORCLASE
#define CONTROLADORCLASE

#include "IControladorAltaAsignatura.h"

#include <iostream>
using namespace std;

class ControladorAltaAsignatura: public IControladorAltaAsignatura{

    private:
        DtAltaAsignatura datosAsignatura;
    public:
        DtAltaAsignatura ingresar(DtAltaAsignatura);
        void altaAsignatura();
        void cancelar();

};
#endif