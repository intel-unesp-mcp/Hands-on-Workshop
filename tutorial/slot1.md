# Hands-on “Working with Intel Xeon and Intel Xeon Phi Architecture”

### 1. Intel Xeon Phi Management

 **1.1.** Execute the following command to verify if the service that controls the devices is up and running:

 `service mpss status`

 **1.2.** Execute the following command to obtain information about the devices:

 `micinfo` or `mpssinfo`

 > How Many Intel Xeon Phi devices are deployed?

 
 **1.3.** Execute the following commands in the main host and on one mic device. 

 * The following command returns the number of cores
 `cat /proc/cpuinfo | grep 'cpu cores' | uniq`

 * The following command returns the number of threads
 `cat /proc/cpuinfo | grep processor | wc -l`

 >How many cores and threads is available on main host and on mic Device?

### Intel Xeon and Intel Xeon Phi Compiling and Running

The code hello_world.c shows the amount of logical threads available.

 **2.1.** Compile and run Intel Xeon using the following commands:

 `icc hello_word.c -o hello_world`
 `./hello_world`


