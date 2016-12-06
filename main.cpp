#include <iostream>
//#include <Aircraft.h>
#include "F16.h"
#include "F35.h"
#include "Carrier.h"

using namespace std;

int main() {
  F16 ac1;
  F35 ac2;

  cout << ac1.get_status();
  ac1.refill(6);
  ac1.fight();
  cout << ac1.get_status();

  Carrier carrier1(20);
  carrier1.add_aircraft("F16");
  carrier1.add_aircraft("F16");
  carrier1.add_aircraft("F35");

  Carrier carrier2(30);
  carrier2.add_aircraft("F35");
  carrier2.add_aircraft("F35");
  carrier2.add_aircraft("F16");
  carrier2.add_aircraft("F35");

  cout << carrier2.get_all_aircrafts_status();

  return 0;
}
