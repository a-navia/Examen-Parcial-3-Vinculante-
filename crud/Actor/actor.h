// actor.h
#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <vector>
#include "crud/Tarea/tarea.h"

class Actor {
public:
    Actor(std::string id, std::string desc);
    std::string getId() const;
    std::string getDescripcion() const;
    void addTarea(const Tarea& tarea);
    int getNumTareas() const;
    Tarea getTarea(int index) const;
    std::string id;
    std::string descripcion;
    std::vector<Tarea> listaTareas;
};

#endif // ACTOR_H