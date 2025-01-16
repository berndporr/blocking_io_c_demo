#include<stdio.h>
#include <unistd.h>
#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>

struct input_event ev;
const char* pFile = "/dev/input/event2";

int main() {
    int fd = open(pFile, O_RDONLY);
    long int r = read(fd, &ev, sizeof(ev));
    printf("fd = %d, result = %ld\n",fd,r);
    printf("type = %d, code = %d, value = %d\n",
	   ev.type,ev.code,ev.value);
    close(fd);    
    return 0;
};

