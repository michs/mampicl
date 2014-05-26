

#include <stdio.h>

#include <mpi.h>

#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

#include "cunit_mpi.h"

int cunit_main( int argc, char *argv[],  CU_SuiteInfo *suites)
{
    MPI_Init(&argc, &argv);
    CU_initialize_registry();
    CU_register_suites(suites);

    CU_mpi_set_mode(CU_BRM_VERBOSE);
    CU_mpi_run_tests();

    CU_cleanup_registry();
    MPI_Finalize();
    return 0;
}
