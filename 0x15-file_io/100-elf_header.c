#include "main.h"
#include "elf.h"

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - prints ELF magic bytes
 * @h: the ELF header struct
*/
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf(" Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class - prints ELF class
 * @h: the ELF header struct
*/
void print_class(Elf64_Ehdr h)
{
	printf(" Class:			");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * print_data - prints ELF data
 * @h: the ELF header struct
*/
void print_class(Elf64_Ehdr h)
{
	printf("  Class:		");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
                        printf("ELF32");
                break;
		case ELFCLASSNONE:
                        printf("none");
                break;
	}
	printf("\n");
}
/**
 * print_osabi - prints ELF osabi
 * @h: the ELF header struct
*/

void print_osabi(Elf64_Ehdr h)
{
	printf("  os/ABI:		");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
                        printf("UNIX - HP_UX");
                        break;
		case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD");
                        break;
		case ELFOSABI_LINUX:
                        printf("UNIX - Linux");
                        break;
		case ELFOSABI_SOLARIS:
                        printf("UNIX - Solaris");
                        break;
		case ELFOSABI_AIX:
                        printf("UNIX - AIX");
                        break;
		case ELFOSABI_IRIX:
                        printf("UNIX - IRIX");
                        break;
		case ELFOSABI_FREEBSD:
                        printf("UNIX - FreeBSD");
                        break;
		case ELFOSABI_IRU64:
                        printf("UNIX - IRU64");
                        break;
		defult:
			print_Osabi_more(h);
			break;
	}
	printf("\n");
}
