
## To build

cd build

cmake ..

make 

## to run the program
### from the build directory ( you might need to "cd build" if you aren't already there)
./parking

### to run tests
./mytests

### to run valgrind on the test executable
### make sure you are in the build directory for this too

 valgrind --leak-check=full --track-origins=yes ./mytests