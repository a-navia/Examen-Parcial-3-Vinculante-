// actor.cpp
#include "crud/Actor/actor.h"

Actor::Actor(std::string id, std::string desc) : id(id), descripcion(desc), listaTareas() {}

std::string Actor::getId() const {
    return id;
}

std::string Actor::getDescripcion() const {
    return descripcion;
}

void Actor::addTarea(const Tarea& tarea) {
    listaTareas.push_back(tarea);
}

int Actor::getNumTareas() const {
    return listaTareas.size();
}

Tarea Actor::getTarea(int index) const {
    return listaTareas.at(index);
}