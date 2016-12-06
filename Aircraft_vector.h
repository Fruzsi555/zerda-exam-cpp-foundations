#ifndef AIRCRAFT_VECTOR_H
#define AIRCRAFT_VECTOR_H

#include "Aircraft_vector.h"

class Aircraft_vector() {
private:
  std::vector<Aircraft*> storage;
  unsigned int ammo_storage;
  unsigned int health_point;
  unsigned int aircraft_count;
public:
  Aircraft_vector();
  ~Aircraft_vector();
  const unsigned int get_size();
  void add_aircraft(std::string);
  Aircraft& at(unsigned int index);
  Aircraft& get_aircraft_by_id(unsigned int id);
};

#endif // AIRCRAFT_VECTOR_H
