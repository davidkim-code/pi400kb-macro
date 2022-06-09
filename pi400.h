#include <pthread.h>

#ifndef HOOK_PATH
#define HOOK_PATH "/home/raspikeyboard/code/pi400kb-macro/hook.sh"
#endif

int initUSB();
int main();
void sendHIDReport();
