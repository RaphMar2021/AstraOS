#include <stddef.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdbool.h>

#define SERIAL_PORT 0x3f8

void init_serial(void);
bool serial_is_ready(void);
void serial_putc(char c);
void serial_puts(const char *str);
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
unsigned char inb(unsigned short port);
void outb(unsigned short port, unsigned char value);
unsigned short inw(unsigned short port);
void outw(unsigned short port, unsigned short value);
void delay(uint32_t ms);
void itoa(char *buf, unsigned long int n, int base);
double pow(double base, double exponent);