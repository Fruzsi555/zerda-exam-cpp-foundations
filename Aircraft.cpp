#include "Util.h"
#include "Aircraft.h"

using namespace std;

unsigned int Aircraft::LAST_ID = 0;

Aircraft::Aircraft() {
  this->damage = 0;
  this->id = Aircraft::LAST_ID;
  LAST_ID++;
  this->ammo_level = 0;
}

const unsigned int Aircraft::get_id() const {
  return id;
}

const unsigned int Aircraft::fight() {
  damage = base_damage * ammo_level;
  ammo_level -= ammo_consumption;
  return damage;
}

const unsigned int Aircraft::refill(unsigned int number) {
  number -= ammo_consumption;
  const unsigned int ammo_level = max_ammo - ammo_level;
  ammo_level = max_ammo;
  while(ammo_refill < max_ammo)
    ammo_level++;
  return ammo_level;
}

const unsigned int Aircraft::get_all_damage() {
  return ammo_level * base_damage;
}

string Aircraft::get_type() const {
  return type_name;
}

string Aircraft::get_status() const {
  return "Type: " + get_type + ", Ammo: " + to_string(ammo_level) + ", Base Damage: " + to_string(base_damage) + ", All Damage: " + to_string(get_all_damage());
}
