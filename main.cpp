#include <iostream>
#include "Exercise.h"
#include "TeamWorkout.h"
//Spremembe narejene na branchu Jure

using namespace std;

int main() {
    Exercise objectOne("running", 60, 115);
    Exercise objectTwo("swimming", 10, 100);
    Exercise objectThree("stretching", 30, 90);

    Exercise *objectFour = new Exercise("jumping", 20, 105);
    Exercise *objectFive = new Exercise("push-ups", 25, 125);

    cout << objectOne.getName() << endl;
    cout << objectTwo.getDuration() << endl;
    cout << objectThree.getAvgHeartRate() << endl;

    objectThree.setAvgHeartRate(200);

    cout << objectThree.getAvgHeartRate() << endl;

    string activity = objectFour->toString();
    cout << activity << endl;

    objectFive->print();

    delete objectFour;
    delete objectFive;

    TeamWorkout object1("CrossFit", 60);
    TeamWorkout *object2 = new TeamWorkout("Aerobics", 25);

    cout << object1.getName() << endl;
    cout << object2->getMaxParticipants() << endl;

    object1.setName("Stretching");
    cout << object1.getName() << endl;

    object2->setMaxParticipants(50);
    cout << object2->getMaxParticipants() << endl;

    string activity1 = object1.toString();
    cout << activity << endl;

    object2->print();

    delete object2;
}
