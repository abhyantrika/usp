/*cc driver_file.c -o outputname
chmod 777 interpreter
gcc display_file.c
./a.out*/

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char* argv[]){
	int i;
	for(i = -1; ++i < argc;)
		printf("argv[%d] = %s\n", i, argv[i]);
	return 0;
}
