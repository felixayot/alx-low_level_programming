#include "main.h"

#define BUFFER_SIZE 64

/**
 * display_error - displays error
 * @error_msg: input string pointer
 * Return: void
 */
void display_error(char *error_msg)
{
fprintf(stderr, "Error: %s\n", error_msg);
exit(98);
}
/**
 * display_elf_header - displays elf header info
 * @elf_header: struct type pointer
 * Return: void
 */
void display_elf_header_info(elf_h *elf_header)
{
int i;
printf("  Magic: ");
for (i = 0; i < 4; i++)
{
printf("%02x ", elf_header->magic[i]);
}
printf("\n  Class: ");
switch (elf_header->class)
{
case 0:
printf("Invalid class\n");
break;
case 1:
printf("ELF32\n");
break;
case 2:
printf("ELF64\n");
break;
default:
printf("Unknown class\n");
break;
}
printf("  Data: ");
switch (elf_header->data)
{
case 0:
printf("Invalid data encoding\n");
break;
case 1:
printf("2's complement, little endian\n");
break;
case 2:
printf("2's complement, big endian\n");
break;
default:
printf("Unknown data encoding\n");
break;
}
printf("  Version: %d (current)\n", elf_header->version);
printf("  OS/ABI: ");
switch (elf_header->abi)
{
case 0:
printf("System V\n");
break;
case 3:
printf("Linux\n");
break;
default:
printf("Unknown\n");
break;
}
printf("  ABI Version: %d\n", elf_header->abiversion);
printf("  Type: ");
switch (elf_header->type)
{
case 0:
printf("NONE (No file type)\n");
break;
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
case 4:
printf("CORE (Core file)\n");
break;
default:
printf("Unknown file type\n");
break;
}
printf("  Entry point address: 0x%lx\n", elf_header->entry);
printf("  Start of program headers: %lu (bytes into file)\n", elf_header->phoff);
printf("  Start of section headers: %lu (bytes into file)\n", elf_header->shoff);
printf("  Flags: 0x%x\n", elf_header->flags);
printf("  Size of this header: %d (bytes)\n", elf_header->ehsize);
printf("  Size of program headers: %d (bytes)\n", elf_header->phentsize);
printf("  Number of program headers: %d\n", elf_header->phnum);
printf("  Size of section headers: %d (bytes)\n", elf_header->shentsize);
printf("  Number of section headers: %d\n", elf_header->shnum);
printf("  Section header string table index: %d\n", elf_header->shstrndx);
}