## Requirements
* Make

## Compilation
The code can be compiled with the provided makefile using the standard make command.

If compiling the code manually, or integrating into a larger program, include the following flags: 
```
FLAGS=-std=c++11 -fsanitize=address,leak,undefined -Wall -Wextra -fuse-ld=gold
```
Note that flag `-fuse-ld=gold` is only required on certain Ubuntu systems due to a know bug with g++ 5.x.
## Sample Execution and Output
