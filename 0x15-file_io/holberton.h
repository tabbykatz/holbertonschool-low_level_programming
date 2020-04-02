#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/* prototypes for ELF */
void errors(char *msg);
void pentry(void);
void ptype(char *buffer);
void pos(char *buffer);
void pversion(char *buffer);
void pABIversion(char *buffer);
void pdata(char *buffer);
void pmagic(char *buffer);
void pclass(char *buffer);
void ptitle(char *title);
int main(int argc, char **argv);

#endif /* HOLBERTON_H */
