/* Copyright (C) 2000, 2008 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include <spawn.h>

/* Get scheduling parameters from the attribute structure.  */
int
posix_spawnattr_getschedparam (const posix_spawnattr_t *attr,
			       struct sched_param *schedparam)
{
  /* Copy the scheduling parameters.  */
  *schedparam = attr->_sp;

  return 0;
}