

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
