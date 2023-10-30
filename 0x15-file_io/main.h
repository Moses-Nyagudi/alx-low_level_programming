#ifndef MAIN_H
#define MAIN_H
#define EI_NIDENT 16

#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <errno.h>

typedef struct
{
	uint8_t e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
} ElfHeader;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void displayElfHeader(const ElfHeader *header);

#endif /* MAIN_H */
