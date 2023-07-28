#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/* Function declarations */
void print_magic(Elf64_Ehdr header);
void print_class(Elf64_Ehdr header);
void print_data(Elf64_Ehdr header);
void print_version(Elf64_Ehdr header);
void print_osabi(Elf64_Ehdr header);
void print_abi_version(Elf64_Ehdr header);
void print_type(Elf64_Ehdr header);
void print_entry_point_address(Elf64_Ehdr header);
/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
	int fd;

	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading file");
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "This is not an ELF file!\n");
		return (98);
	}
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abi_version(header);
	print_type(header);

	print_entry_point_address(header);
	close(fd);
	return (0);
}
/**
* print_magic - Prints the magic numbers of the ELF header
* @header:The Elf Header
*/
void print_magic(Elf64_Ehdr header)
{
	int i;

	printf("Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	printf("%02x ", header.e_ident[i]);
	printf("\n");
}
/**
* print_class - Prints the class of the ELF header
* @header:The Elf Header
*/
void print_class(Elf64_Ehdr header)
{
	printf("Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}
/**
* print_data - Prints the data of the ELF header
* @header:The Elf Header
*/
void print_data(Elf64_Ehdr header)
{
	printf("Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}
/**
* print_version - Prints the version of the ELF header
* @header:The Elf Header
*/
void print_version(Elf64_Ehdr header)
{
	printf("Version:        %d ", header.e_ident[EI_VERSION]);
}
/**
* print_osabi - Prints the OS / ABI of the ELF header
* @header:The Elf Header
*/
void print_osabi(Elf64_Ehdr header)
{
	printf("OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
}
/**
* print_abi_version - Prints the ABI version of the ELF header
* @header:The Elf Header
*/
void print_abi_version(Elf64_Ehdr header)
{
	printf("ABI Version:   %d\n", header.e_ident[EI_ABIVERSION]);
}
/**
* print_type - Prints the type of the ELF header
* @header:The Elf Header
*/
void print_type(Elf64_Ehdr header)
{
	printf("Type:                              ");
	switch (header.e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("Unknown\n");
		break;
	}
}
/**
* print_entry_point_address - Prints the entry point address of the ELF header
* @header:The Elf Header
*/
void print_entry_point_address(Elf64_Ehdr header)
{
	printf("Entry point address:               0x%lx\n", header.e_entry);
}
