#include <mpi.h>

int main(int argc, char *argv[]) {
    int rank, size;

    // 1. 初始化 MPI 环境
    MPI_Init(&argc, &argv);

    // 2. 获取进程信息
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);  // 获取当前进程编号
    MPI_Comm_size(MPI_COMM_WORLD, &size);  // 获取总进程数

    printf("Process %d of %d\n", rank, size);

    // ... 应用程序逻辑 ...

    // 3. 清理 MPI 环境
    MPI_Finalize();
    return 0;
}

