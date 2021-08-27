#!/bin/bash 


echo Hello World from the linux shell! 
gcc -v
if [ $? != 0 ]; then
       echo "GCC is not installed!"
fi
ld -v
if [ $? != 0 ]; then
        echo "Please install C++ Compiler such as gcc"
fi

g++ $1 -o run_file
echo "File to compile/run: $1"
./run_file "$1"  


  
