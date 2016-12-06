#ifndef CARRIER_H
#define CARRIER_H

#include <string>
#include <vector>
#include "Aircraft.h"
#include "Aircraft_vector"

class Carrier {
private:
  std::vector<Aircraft*> storage;
  unsigned int ammo_storage;
  unsigned int health_point;
  unsigned int aircraft_count;
  Aircraft_vector storage;
public:
  Carrier(unsigned int ammo_storage);
  std::string get_status();
  std::string get_all_aircrafts_status();
  void add_aircraft(string);
  void fill_aircraft();
  void carrier_fight(unsigned int);
  unsigned int get_ammo_level();
  unsigned int get_total_damage();
};

#endif // CARRIER_H
