#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * display_elf_header - Displays information about the ELF header
 * @header: Pointer to the ELF header structure
 */
void display_elf_header(Elf32_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf(" Magic: ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf(" Class: ELF32\n");
printf(" Data: 2's complement, %s endian\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "little" : "big");
printf(" Version: %d (current)\n", header->e_ident[EI_VERSION]); printf(" OS/ABI: ");
switch (header->e_ident[EI_OSABI])
{
case
ELFOSABI_NONE: printf("UNIX - System V\n");
break;
case
ELFOSABI_NETBSD: printf("UNIX - NetBSD\n");
break;
case
ELFOSABI_SOLARIS: printf("UNIX - Solaris\n");
break;
default:
printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
break;
}
printf(" ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf(" Type: ");
switch (header->e_type)
{
case
ET_NONE: printf("No file type\n");
break;
case
ET_EXEC: printf("EXEC (Executable file)\n");
break;
case
ET_DYN: printf("DYN (Shared object file)\n");
break;
default:
printf("<unknown: %d>\n", header->e_type);
break;
}
printf(" Entry point address: 0x%08x\n", header->e_entry);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
int fd;
Elf32_Ehdr header;
if (argc < 2)
{
printf("Usage: %s <file>\n", argv[0]);
return (1);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error: Can't open file");
return (1);
}
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
perror("Error: Can't read file");
close(fd);
return (1);
}
display_elf_header(&header);
close(fd);
return (0);
}
