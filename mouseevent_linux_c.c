#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct input_event ev;
const char* pFile = "/dev/input/event2";

int main(int argc, char *argv[]) {
    if (argc < 2) {
	fprintf(stderr,"Please specify the input device, for example: %s %s\n",argv[0],pFile);
	exit(-1);
    }
    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
	fprintf(stderr,"Could not open %s. Try with sudo?\n",argv[1]);
	exit(-1);
    }
    long int r = read(fd, &ev, sizeof(ev));
    printf("fd = %d, result = %ld\n",fd,r);
    printf("type = %d, code = %d, value = %d\n",
	   ev.type,ev.code,ev.value);
    close(fd);    
    return 0;
}

