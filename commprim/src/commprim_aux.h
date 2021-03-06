/*
 * mampicl - message passing communication routines library.
 *  Copyright (C) 2014  Michael Schliephake
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _COMMPRIM_AUX_INCLUDED
#define _COMMPRIM_AUX_INCLUDED

/* ------------------------------------------------------------------------- */

#define chan_to_proc(proc, bit) ((proc) ^ BIT(bit))


#ifdef MPI_ALLOWED

#define CPRIM_TAG   999

#endif // MPI_ALLOWED
/* ------------------------------------------------------------------------- */

#endif // _COMMPRIM_AUX_INCLUDED
