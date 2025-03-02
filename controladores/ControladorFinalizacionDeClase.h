#ifndef CONTROLADORFINALIZACIONDECLASE
#define CONTROLADORFINALIZACIONDECLASE

#include "IControladorFinalizacionDeClase.h"

class ControladorFinalizacionDeClase: public IControladorFinalizacionDeClase{
    private:
        int id;
        int getId();
        void setId(int);
    public:
        list<int> clasesIniciadasSinFinalizar();
        DtClase selectClase(int id);
        void finalizarClase();
        void cancelar();
};
#endif