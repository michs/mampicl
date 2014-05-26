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

#ifndef _CR_MPI_INCLUDED_
#define _CR_MPI_INCLUDED_

/* ------------------------------------------------------------------------- */

int Cr_Init( MPI_Comm comm );

int
Cr_Alltoallv(
    void* sendbuf, int* sendcounts, int* sdispls, MPI_Datatype sendtype,
    void* recvbuf, int* recvcounts, int* rdispls, MPI_Datatype recvtype,
    MPI_Comm comm);

int
Cr_Alltoallv2(
    void* sendbuf, int* sendcounts, int* sdispls, MPI_Datatype sendtype,
    void* recvbuf, int* recvcounts, int* rdispls, MPI_Datatype recvtype,
    MPI_Comm comm);

int Cr_Bcast(
    void *buff, int count, MPI_Datatype dtype, int root, MPI_Comm comm );

/* ------------------------------------------------------------------------- */

#endif /* _CR_MPI_INCLUDED_ */
