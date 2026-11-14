#include "../include/central.h"

void print(const char *string) {
    long size = 0;

    while (string[size] != '\0') {
        size += 1; 
    }

    asm volatile(
        "mov rdi, 1\n\t"
        "mov rsi, %0\n\t"
        "mov rdx, %1\n\t"
        "mov rax, 1\n\t"
        "syscall\n\t"
        :
        : "b" (string), "d" (size)
        : "rdi", "rcx", "r11", "memory"
    );
}


