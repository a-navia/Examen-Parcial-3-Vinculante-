#include "crud.h"
#include <iostream>
#include <vector>
#include "crud/Actor/actor.h"
#include "crud/Tarea/tarea.h"

void addTaskToActor(Actor& actor, const Tarea& tarea) {
    actor.addTarea(tarea);
}

void addActor(std::vector<Actor>& actors, const Actor& actor) {
    actors.emplace_back(actor);
}

void printTasksOfActors(const std::vector<Actor>& actors) {
    for (const auto& actor : actors) {
        std::cout << "Actor: " << actor.getDescripcion() << std::endl;
        for (int i = 0; i < actor.getNumTareas(); ++i) {
            std::cout << "  " << actor.getTarea(i).toString() << std::endl;
        }
    }
}