#include "main.h"
#define ELF_MAGIC 0x7F454C46

/**
 * readElfHeader - Reads the ELF header from a file descriptor
 * @fd: File descriptor of the ELF file
 * @header: Pointer to the ElfHeader structure to store the header data
 *
 * This function reads the ELF header from the specified file descriptor and
 * stores it in the provided header structure.
 *
 * Return: 0 on success, -1 on failure.
 */
int readElfHeader(int fd, ElfHeader *header)
{
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		perror("lseek");
		return (-1);
	}

	if (read(fd, header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		perror("read");
		return (-1);
	}

	return (0);
}

/**
 * displayElfHeader - Displays the information from the ELF header
 * @header: Pointer to the ElfHeader structure containing the header data
 *
 * This function displays the information contained in the ELF header to the
 * standard output as per the specified format.
 */
void displayElfHeader(const ElfHeader *header)
{
	printf("Magic: %.2x %.2x %.2x %.2x\n",
			header->e_ident[1], header->e_ident[2],
			header->e_ident[3], header->e_ident[4]);
	printf("Class: %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", header->e_ident[5] == 1 ?
			"2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", header->e_ident[6]);
	printf("OS/ABI: %d\n", header->e_ident[7]);
	printf("ABI Version: %d\n", header->e_ident[8]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the ELF header information display program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * This function is the entry point of the program.
 * It processes the command-line
 * arguments, reads the ELF header from the specified file,
 * and displays the header information.
 *
 * Return: 0 on success, 98 on invalid usage or error.
 */
int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);

	ElfHeader header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	if (fd == -1)
	{
		perror("open");
		exit(98);
	}
	if (readElfHeader(fd, &header) == -1)
	{
		close(fd);
		exit(98);
	}

	displayElfHeader(&header);
	close(fd);
	return (0);
}

