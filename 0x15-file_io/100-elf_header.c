#include "main.h"

#define BUFFER_SIZE 64

void print_error(char *message)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(98);
}

void print_elf_header(char *filename)
{
    int fd;
    Elf64_Ehdr header;
    ssize_t bytes_read;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        print_error("Can't open file");

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
        print_error("Can't read ELF header");

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
        print_error("Not an ELF file");

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header.e_ident[i]);
    printf("\n");
    printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d%s\n", header.e_ident[EI_VERSION], header.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");