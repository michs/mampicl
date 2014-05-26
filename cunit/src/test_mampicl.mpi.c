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

#include <stdio.h>

#include <mpi.h>

#include "cunit_mpi.h"


extern CU_TestInfo tests_alltoall_mpi[];
extern int init_suite_alltoall_mpi(void);
extern int cleanup_suite_alltoall_mpi(void);

CU_SuiteInfo mpi_suites[] = {
    { "Alltoall_MPI",  init_suite_alltoall_mpi, cleanup_suite_alltoall_mpi,
      tests_alltoall_mpi },
    CU_SUITE_INFO_NULL
};


int main( int argc, char *argv[] )
{
    return cunit_main(argc, argv, mpi_suites);
}
