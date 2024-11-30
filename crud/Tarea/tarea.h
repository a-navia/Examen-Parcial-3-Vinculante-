//
// Created by navia on 28-Nov-24.
//

#ifndef TAREA_H
#define TAREA_H

#include <string>

class Tarea {
private:
    std::string id;
    std::string descripcion;
    int duracion;

public:
    Tarea(std::string id, std::string desc, int duracion);
    std::string getId();
    std::string getDescripcion();
    int getDuracion();
    std::string toString();
};

#endif // TAREA_H
