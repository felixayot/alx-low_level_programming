#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

/**
 * elf_h - new type definition
 * @magic: char
 * @class: char
 * @data: char
 * @version: char
 * @abi: char
 * @abiversion: char
 * @pad: char
 * @type: int
 * @machine: int
 * @version2: int
 * @entry: int
 * @phoff: int
 * @shoff: int
 * @flags: int
 * @ehsize: int
 * @phentsize: int
 * @phnum: int
 * @shentsize: int
 * @shnum: int
 * @shstrndx: int
 * Description: defines a new type struct elf_h
 */
typedef struct
{
unsigned char magic[4];
unsigned char class;
unsigned char data;
unsigned char version;
unsigned char abi;
unsigned char abiversion;
unsigned char pad[7];
unsigned short type;
unsigned short machine;
unsigned int version2;
unsigned long entry;
unsigned long phoff;
unsigned long shoff;
unsigned int flags;
unsigned short ehsize;
unsigned short phentsize;
unsigned short phnum;
unsigned short shentsize;
unsigned short shnum;
unsigned short shstrndx;
} elf_h;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
