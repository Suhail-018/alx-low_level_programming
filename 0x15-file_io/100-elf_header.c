#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * error_exit - Prints an error message and exits the program with the
 *              specified exit code.
 * @msg: The error message to print.
 * @exit_code: The exit code to use.
 */
void error_exit(const char *msg, int exit_code)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(exit_code);
}
/**
 * print_elf_header - Prints the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Version:%d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
default:
printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
break;
}
printf("  ABI Version:           %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (Unknown file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
break;
}
printf("  Entry point address:               0x%lx\n", header->e_entry);
}
/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
if (argc != 2)
error_exit("Usage: elf_header elf_filename", 98);
fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Can't open file", 98);
if (read(fd, &header, sizeof(header)) != sizeof(header))
error_exit("Error: Can't read from file", 98);
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file", 98);
print_elf_header(&header);
if (close(fd) == -1)
error_exit("Error: Can't close fd", 100);
return (0);
}

