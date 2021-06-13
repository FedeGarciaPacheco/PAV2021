#ifndef CONTROLADORELIMINARASIGNATURA
#define CONTROLADORELIMINARASIGNATURA

#include "IControladorEliminarAsignatura.h"

class ControladorEliminarAsignatura: public IControladorEliminarAsignatura{
    private:
        //agregar los datos que se recuerdan
    public:
        list<string> listarAsignaturas();
        void selectAsignatura(string);
        void eliminarAsignatura();
        void cancelar();
};
#endif