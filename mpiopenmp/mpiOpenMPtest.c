#include <mpi.h>
#include <omp.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int rank, size, thid; 

  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  char hostname[1024];
  gethostname(hostname, 1024);

  #pragma omp parallel
  {
        thid=omp_get_thread_num();
        printf("Rank: %d of total: %d thread %d hostname %s\n",rank, size, thid, hostname);
  }	
  
  MPI_Finalize();

  return 0;
}
