#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>

class Aircraft {
private:
  static unsigned int LAST_ID;
  unsigned int id;
  unsigned int ammo_level;
  unsigned int damage;
protected:
  unsigned int ammo_consumption;
  unsigned int max_ammo;
  unsigned int base_damage;
  std::string type_name;
public:
  Aircraft();
  const unsigned int get_id() const;
  const unsigned int get_damage() const;
  const unsigned int fight();
  const unsigned int refill(unsigned int);
  const unsigned int get_all_damage();
  std::string get_type() const;
  std::string get_status() const;
};

#endif // AIRCRAFT_H
