#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int *e_type, unsigned char *e_ident);
void print_entry(unsigned long int entry, unsigned char *e_ident);
void close_elif(int elf);


/**
 * check_elf - checks if it is an ELF file
 * @e_ident: a pointer to an array containing the ELF magic numbers
 * Description: if the file is not an ELF file - exit code 98
 */

void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 && e_ident[index] != 'E' &&
			e_ident[index] != 'L' && e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}


/**
 * print_magic - prints the magic numbers of an ELF file header
 * @e_ident: a pointer to an array containing the ELF magic numbers
 *
 * Description: magic numbers are separated by spaces
 */

void print_magic(unsigned char *e_ident)
{
	int index;

	printf("magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}


/**
 * print_class - prints the class of an ELF header
 * @e_ident: A pointer to an array containing the ELF class
 */

void print_class(unsigned char *e_ident)
{
	printf("class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<uknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * print_data - prints the data of an ELF header
 * @e_ident: a pointer to an array containing data
 */

void print_data(unsigned char *e_ident)
{
	printf("data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's compliment, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's compliment, bi endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * print_version - prints the version of the ELF header
 * @e_ident: a pointer to an array the ELF version
 *
 */

void print_version(unsigned char *e_ident)
{
	printf("Version: %d",
		e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
