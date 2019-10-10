#include <iostream>
using namespace std;

class CarSpeed {
    private:
        int speed;
    public:
        void initial_speed(int);
        void increase_speed(int);
        void decrease_speed(int); 
        int current_speed();
};



void CarSpeed::initial_speed(int start_speed) {
    speed = start_speed;
}

void CarSpeed::increase_speed(int current_speed) {
    speed = current_speed + speed;
}


void CarSpeed::decrease_speed(int current_speed) {
    speed = current_speed - speed;
}

int CarSpeed::current_speed() {
    return speed;
}

int main() {
    
    CarSpeed genesis;
    genesis.initial_speed(55);
    cout << "Your initial speed is " << genesis.current_speed() << " mph." << endl;
    
    genesis.increase_speed(40);
    cout << "Your speed has been increased to " << genesis.current_speed() << " mph." << endl;

    genesis.decrease_speed(17);
    cout << "Your speed has been decreased to " << genesis.current_speed() << " mph." << endl;

    cout << "Therefore, your final speed is: " << genesis.current_speed() << " mph." << endl;
}
