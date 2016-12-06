#include "Carrier.h"
#include "Util.h"
#include <string>
#include <vector>

Carrier::Carrier(unsigned int ammo_storage) : storage() {
  this->ammo_storage = ammo_storage;
  this->health_point = health_point;
  aircraft_count = 0;
}

std::string Carrier::get_status() {
  std::string output = "";
  output += "Aircraft count: " + to_string(ammo_storage) + ", ";
  output += "Ammo storage: " + to_string(get_ammo_level())  + ", ";
  output += "Total damage: " + to_string(get_total_damage()) + "\n";
  output += "Aircrafts:\n";
  output += get_all_aircrafts_status();
  return output;
}

std::string Carrier::get_all_aircrafts_status() {
  std::string aircraft_status = "";
  for (int i = 0; i < storage.get_size(); ++i) {
    aircraft_status += storage.at(i).get_status() + "\n";
  }
  return aircraft_status;
}

void Carrier::add_aircraft(std::string aircraft) {
  storage.push_back(aircraft);
  ++aircraft_count;
}

void Carrier::fill_aircraft() {
  try {
    throw
  } catch (int x);
}

void Carrier::carrier_fight(unsigned int id) {

}

unsigned int Carrier::get_ammo_level() {

}

unsigned int Carrier::get_total_damage() {

}
