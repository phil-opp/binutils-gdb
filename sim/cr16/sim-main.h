/* Simulation code for the CR16 processor.
   Copyright (C) 2009-2015 Free Software Foundation, Inc.

   This file is part of simulators.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef SIM_MAIN_H
#define SIM_MAIN_H

#include "sim-basics.h"

typedef address_word sim_cia;
typedef long int           word;
typedef unsigned long int  uword;

typedef struct _sim_cpu SIM_CPU;

#include "sim-base.h"
#include "bfd.h"

#include "cr16_sim.h"

#define CIA_GET(cpu)     PC
#define CIA_SET(cpu,val) SET_PC (val)

struct _sim_cpu {

  sim_cpu_base base;
};

struct sim_state {

  sim_cpu *cpu[MAX_NR_PROCESSORS];

  sim_state_base base;
};

#endif