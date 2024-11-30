#include "tarea.h"

Tarea::Tarea(std::string id, std::string desc, int duracion) {
    this->id = id;
    this->descripcion = descripcion;
    this->duracion = duracion;
}

std::string Tarea::getId() {
    return id;
}

std::string Tarea::getDescripcion() {
    return descripcion;
}

int Tarea::getDuracion() {
    return duracion;
}

std::string Tarea::toString() {
    return "Tarea: " + descripcion + " Duracion: " + std::to_string(duracion);
}