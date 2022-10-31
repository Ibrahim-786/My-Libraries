# MyLibs

// Convert library code to Object file
g++ -c -o library.o library.c

// Create shared .SO library
gcc -shared -o libfoo.so library.o

# Create the executable by linking shared library
gcc -L<path to .SO file> -Wall -o code main.c -l<library name>

# Make shared library available at runtime
export LD_LIBRARY_PATH=<path to .SO file>:$LD_LIBRARY_PATH

# Run executable
./a.out

gcc -c -o library.o library.c


gcc -shared -o libfoo.so library.o

gcc -Llib/ -Wall -o code main.c -llibrary

export LD_LIBRARY_PATH=lib/:$LD_LIBRARY_PATH

./code
