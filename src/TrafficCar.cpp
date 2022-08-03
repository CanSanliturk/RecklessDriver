#include "../include/TrafficCar.h"

namespace RecklessDriver {

    TrafficCar::TrafficCar()
        : damage(0), cash(0) {  }

    TrafficCar::TrafficCar(int _damage, int _cash)
        : damage(_damage), cash(_cash) {  }

    TrafficCar::~TrafficCar() { }
}
