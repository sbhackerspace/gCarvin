/*
  defaults.h - defaults settings configuration file
  Part of Grbl

  Copyright (c) 2012-2015 Sungeun K. Jeon

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

/* The defaults.h file serves as a central default settings file for different machine
   types, from DIY CNC mills to CNC conversions of off-the-shelf machines. The settings
   here are supplied by users, so your results may vary. However, this should give you
   a good starting point as you get to know your machine and tweak the settings for your
   our nefarious needs. */

#ifndef defaults_h
#define defaults_h

#ifdef DEFAULTS_CARVIN
  // Grbl generic default settings. Should work across different machines.
  #define DEFAULT_X_STEPS_PER_MM 88.889
  #define DEFAULT_Y_STEPS_PER_MM 200.0
  #define DEFAULT_Z_STEPS_PER_MM 377.893  // or 5120 (for older m8 rods)
  #define DEFAULT_X_MAX_RATE 5000.0 // mm/min
  #define DEFAULT_Y_MAX_RATE 5000.0 // mm/min
  #define DEFAULT_Z_MAX_RATE 800.0 // mm/min
  #define DEFAULT_X_ACCELERATION (500.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_Y_ACCELERATION (500.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_Z_ACCELERATION (60.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_X_MAX_TRAVEL 300.0 // mm
  #define DEFAULT_Y_MAX_TRAVEL 203.2 // mm
  #define DEFAULT_Z_MAX_TRAVEL 80.0 // mm
  #define DEFAULT_SPINDLE_RPM_MAX 12000.0 // rpm
  #define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK 0 // was ((1<<X_AXIS) | (1<<Y_AXIS) | (1<<Z_AXIS)) on GEN1
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 255 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK ((BITFLAG_RT_STATUS_MACHINE_POSITION)|(BITFLAG_RT_STATUS_WORK_POSITION))
  #define DEFAULT_JUNCTION_DEVIATION 0.02 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // false
  #define DEFAULT_AUTO_START n1 // true
  #define DEFAULT_INVERT_ST_ENABLE 0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_HOMING_ENABLE 1  // false
  #define DEFAULT_HOMING_DIR_MASK ((1<<X_AXIS)|(1<<Y_AXIS))
  #define DEFAULT_HOMING_FEED_RATE 25.0 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 1500.0 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 1.0 // mm
#endif


#endif
