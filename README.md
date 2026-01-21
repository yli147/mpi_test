```
wget https://download.open-mpi.org/release/open-mpi/v4.1/openmpi-4.1.6.tar.gz
tar zxvf openmpi-4.1.6.tar.gz
cd openmpi-4.1.6
./configure --prefix=/opt/openmpi-4.1.6
make install
cd ..
gcc mpi_test.c -I/opt/openmpi-4.1.6/include/ -L/opt/openmpi-4.1.6/lib/ -lmpi -o mpi_test
export LD_LIBRARY_PATH=/opt/openmpi-4.1.6/lib:$LD_LIBRARY_PATH
export PATH=/opt/openmpi-4.1.6/bin:$PATH
./mpi_test
```
