## Requirements
* Make

## Compilation
The code can be compiled with the provided makefile using the standard `make` command.

If compiling the code manually, or integrating into a larger program, include the following flags: 
```
FLAGS=-std=c++11 -fsanitize=address,leak,undefined -Wall -Wextra -fuse-ld=gold
```
Note that flag `-fuse-ld=gold` is only required on certain Ubuntu systems due to a know bug with g++ 5.x.
## Sample Execution and Output
All input is handled through command line arguments. Sample input:
```
./convert_dec_to_binary.cpp 0.5 0.25 0.75
```
output simliar to
```
   0 secs | 1.19209e-07
   1 secs | 2.22045e-16
  17 secs | 1.92593e-34
```
will  be displayed. Note that the precision estimates will vary by
architecture/system.
