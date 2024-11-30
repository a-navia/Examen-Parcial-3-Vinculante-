//
// Created by navia on 28-Nov-24.
//

#ifndef CRUD_H
#define CRUD_H
#include <vector>
#include "Actor/actor.h"

void addTaskToActor(Actor& actor, const Tarea& tarea);
void addActor(std::vector<Actor>& actors, const Actor& actor);
void printTasksOfActors(const std::vector<Actor>& actors);
#endif //CRUD_H
