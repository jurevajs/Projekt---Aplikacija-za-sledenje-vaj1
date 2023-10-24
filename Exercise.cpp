#include <iostream>
#include "Exercise.h"

using namespace std;

Exercise::Exercise(string name, float duration, int avgHeartRate) {
    this->name = name;
    this->duration = duration;
    this->avgHeartRate = avgHeartRate;
}
string Exercise::getName() {
    return name;
}

float Exercise::getDuration() {
    return duration;
}

int Exercise::getAvgHeartRate() {
    return avgHeartRate;
}

void Exercise::setAvgHeartRate(int avgHeartRate) {
    this->avgHeartRate = avgHeartRate;
}

string Exercise::toString() {
    string activity = this->name + " " + to_string(this->duration) + " " +to_string(this->avgHeartRate);
    return activity;
}

void Exercise::print() {
    cout << this->name << " " << this->duration << " " << this->avgHeartRate;
}
