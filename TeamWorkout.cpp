#include <iostream>
#include "TeamWorkout.h"

using namespace std;

TeamWorkout::TeamWorkout(string name, int maxParticipants) {
    this->name = name;
    this->maxParticipants = maxParticipants;
}
string TeamWorkout::getName() {
    return name;
}

int TeamWorkout::getMaxParticipants() {
    return maxParticipants;
}

void TeamWorkout::setName(string name) {
    this->name = name;
}

void TeamWorkout::setMaxParticipants(int maxParticipants) {
    this->maxParticipants = maxParticipants;
}

string TeamWorkout::toString() {
    string activity = this->name + " " + to_string(this->maxParticipants);
    return activity;
}

void TeamWorkout::print() {
    cout << this->name << " " << this->maxParticipants;
}
