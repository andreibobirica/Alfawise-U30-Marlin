/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "../inc/MarlinConfig.h"

#if ENABLED(MK2_MULTIPLEXER)

#include "../module/stepper.h"

#include "../../feature/powerloss.h"

void select_multiplexed_stepper(const uint8_t e) {
  //Relay State
  bool state = recovery.reverseRELAYMULTIE;

  planner.synchronize();
  disable_e_steppers();
  //Azionamento Relay
  const pin_t pin = GET_PIN_MAP_PIN(PD13);//PIN relay Digitale
  if (pin_is_protected(pin)) return protected_pin_err();//stop if pin protected
  safe_delay(100);//Wait sicurezza

  pinMode(pin, OUTPUT);//set pin to output
  //print pin number    //SERIAL_ECHOLNPAIR("pin: ", pin);
  SERIAL_ECHOLNPAIR("ask for E: ", e);
  SERIAL_ECHOLNPAIR("Relay State: ", state);

  if(e == (uint8_t)1){
      //LOW is 5 volt, HIGH is 0
      extDigitalWrite(pin, !state);
      SERIAL_ECHOLNPGM("E1 activated");
  }

  if(e == (uint8_t)0){
      //LOW is 5 volt, HIGH is 0
      extDigitalWrite(pin, state);
      SERIAL_ECHOLNPGM("E0 activated");
  }
  
  //safe delay to active the relay
  safe_delay(500);



  //Vecchia Funzione
  /*
  planner.synchronize();
  disable_e_steppers();
  WRITE(E_MUX0_PIN, TEST(e, 0) ? HIGH : LOW);
  WRITE(E_MUX1_PIN, TEST(e, 1) ? HIGH : LOW);
  WRITE(E_MUX2_PIN, TEST(e, 2) ? HIGH : LOW);
  safe_delay(100);
  */
}

#endif // MK2_MULTIPLEXER
