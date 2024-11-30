#include <iostream>
#include <vector>
#include "crud/Actor/actor.h"
#include "crud/Tarea/tarea.h"
#include "crud/crud.h"

using namespace std;

int main() {
    vector<Actor> actors;
    char choice;

    while (true) {
        cout << "quieres asignar tarea a una actor (y/n)? ";
        cin >> choice;
        if (choice == 'y') {
            string actorId, taskId, taskDesc;
            int taskDuration;
            cout << "actor ID: ";
            cin >> actorId;
            cout << "tarea ID: ";
            cin >> taskId;
            cout << "descripcion de tarea: ";
            cin.ignore();
            getline(cin, taskDesc);
            cout << "duracion de tarea: ";
            cin >> taskDuration;

            Tarea tarea(taskId, taskDesc, taskDuration);
            for (auto& actor : actors) {
                if (actors.getId() = actorId) {
                    addTaskToActor(actor, tarea);
                    break;
                }
            }
        }

        cout << "quieres introducir un actor (y/n)? ";
        cin >> choice;
        if (choice == 'y') {
            string actorId, actorName;
            cout << "ID actor: ";
            cin >> actorId;
            cout << "nombre actor: ";
            cin.ignore();
            getline(cin, actorName);

            Actor actor(actorId, actorName);
            addActor(actors, actor);
        }

        cout << "actores y tareas:" << endl;
        printTasksOfActors(actors);
    }

    return 0;
}