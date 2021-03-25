#ifndef DTPUERTO
#define DTPUERTO
#include <string>
#include "DtFecha.h"
#include "DtArribo.h"

class DtPuerto{
  private:
    string id;
    string nombre;
    DtFecha fechaCreacion;
    DtArribo* arribos[30];
  public:
    DtPuerto();
    DtPuerto(string id, string nombre,DtFecha fechaCreacion);
    
    // OBTENER DATOS
    string getId();
    string getNombre();
    DtFecha getFechaCreacion();
    DtArribo* getArribos();
    
    // CONFIGURAR DATOS
    void setId(string id);
    void setNombre(string nombre);
    void setFechaCreacion(DtFecha fechaCreacion);
    void setArribos( DtArribo * arribo);

    // METODOS
    void agregarPuerto(string id, string nombre, DtFecha fechaCreacion);


    // DESTRUCTOR
    ~DtPuerto();
};

#endif