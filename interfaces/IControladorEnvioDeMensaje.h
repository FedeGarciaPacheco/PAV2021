#ifndef ICONTROLENVIODECLASE
#define ICONTROLENVIODECLASE

#include "DtParticipacion.h"
#include <string>
#include <list>

using namespace std;

class IControladorEnvioDeMensaje{
    public:
        virtual list<int> clasesOnlineAsistiendo() = 0;
        virtual list<DtParticipacion> selectClase(int id) = 0;
        virtual void responder(int) = 0;
        virtual void ingresarTexto(string) = 0;
        virtual void enviarMensaje() = 0;
        virtual void cancelar() = 0;
};
#endif