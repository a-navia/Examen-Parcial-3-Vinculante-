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
        cout << "Do you want to assign a task to an actor (y/n)? ";
        cin >> choice;
        if (choice == 'y') {
            string actorId, taskId, taskDesc;
            int taskDuration;
            cout << "Enter actor ID: ";
            cin >> actorId;
            cout << "Enter task ID: ";
            cin >> taskId;
            cout << "Enter task description: ";
            cin.ignore();
            getline(cin, taskDesc);
            cout << "Enter task duration: ";
            cin >> taskDuration;

            Tarea tarea(taskId, taskDesc, taskDuration);
            for (auto& actor : actors) {
                if (actors.getId() = actorId) {
                    addTaskToActor(actor, tarea);
                    break;
                }
            }
        }

        cout << "Do you want to add an actor (y/n)? ";
        cin >> choice;
        if (choice == 'y') {
            string actorId, actorName;
            cout << "Enter actor ID: ";
            cin >> actorId;
            cout << "Enter actor name: ";
            cin.ignore();
            getline(cin, actorName);

            Actor actor(actorId, actorName);
            addActor(actors, actor);
        }

        cout << "Current actors and their tasks:" << endl;
        printTasksOfActors(actors);
    }

    return 0;
}