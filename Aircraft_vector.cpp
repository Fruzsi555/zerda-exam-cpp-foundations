#include "Aircraft_vector.h"
#include <vector>

Aircraft_vector::Aircraft_vector() {
  storage = NULL;
  aircraft_count = 0;
}

Aircraft_vector::~Aircraft_vector() {
  if (storage != NULL) {
    delete[] storage;
    storage = NULL;
  }
}

void Aircraft_vector::add_aircraft(std::string aircraft) {
  storage.push_back(aircraft);
  ++aircraft_count;
}

Aircraft& Aircraft_vector::at(unsigned int index) {
  return *(storage[index]);
}

Aircraft& Aircraft_vector::get_Aircraft_by_id(unsigned int id) {
  for (int i = 0; i < aircraft_count; ++i) {
    if (storage[i]->get_id() == id) {
      return *storage[i];
    }
  }
}

const unsigned int Aircraft_vector::get_size() {
  return aircraft_count;
}
