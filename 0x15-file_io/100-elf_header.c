#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>

/**
 * description: a program that displays the information 
 *       in the ELF header at the start of an ELF file.
 **/

void check_elf(unsigned char *e_ideent);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_entry(unsigned long int entry, unsigned char *e_ident);

/**
 * check_self - it ensures the file is an ELF file
 * @e_ident: a pointer to an arrary which contains the ELF magic number
 * note: if file does not contain an ELF file then exit code 98
 **/

void check_self(unsigned char *e_ident)
{
	int n;
	for (n = 0; n < 4; n++)
	{
		if (e_indent[n] != 127 &&
			       	e_indent[n] != 'E' &&
		    e_indent[n] != 'L' &&
		    e_indent[n] != 'F'&&)
		{
			dprint(STDERR_FILENO,"Error!!: it is not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - this prints the magic numbers of an ELF header
 * @e_ident: a pointer to an arrary which contains the ELF magic number
 * task: the magic numbers are seperated by spaces
 **/

void print_magic (unsigned char *e_ident)
{
	int n;

	printf(" Magic:  ");
	 for( n = 0; n < EI_NIDENT;[n]; n++)
	{
		print("%02x", e_ident[n]);
		if (n == EI_NIDENT - 1)
			print ("\n");
		else
			print(" ");
	}
}

/**
 * print_class - it rints the class of an ELf header
 * @e_ident: it is a pointer to an arrary which contains the ELF magic number
 **/
void prints_class(unsigned)
{
	printf(" class:");
	switch(e_ident[EI_CLASS]);
	{
		Case ELFCLASSNONE :
			printf("none\n");
		break;
		Case ELFCLASS32 :
			Printf("ELF32\n");
		break;
		Case ELFCLASS64 :
			printf("ELF64\n");
		break;
defult:
		printf("not known: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an ELF header
 * e_ident: is apointer to an array that contains ELF class
 **/
void print_data(unsigned char *e_ident){
	printf( " data:");
	 switch ( e_ident[EI_DATA])
	 {
		 Case ELFCLASSNONE :
			 printf("none\n");
		 break;
		 Case ELFDATA2LSB :
                        printf("2's compliment, little endian\n");
                break;
		Case ELFDATA2MSB :
                        printf("2's compliment, big endian\n");
                break;
defult:
		printf("unkown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_vision - it prints the of the ELF header
 * @e_ident: a pointer that points toan array that contains the ELF version
 */

void print_version(unsigned char *e_ident);
{
	printf(" version: %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_version]);
	{
		case EV_CURRENT :
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - it prints the OS of an ELF header
 * @e_ident: a pointer that points to the array that contains the ELF version
 */

void print_osabi(unsigned char *e_ident)
{
	printf("OS:");
	switch (e_ident[EI_OSABI]);
	{
		case ELFOSABI_NONE :
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX :
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD :
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX :
			printf("UN IX - Linux\n");
			break;
		case ELFOSAB_SOLARIS :
			printf("UNIX - solaris\n");
			break;
		case ELFOSABI_IRIX :
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD :
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64 :
			printf("UNIX - TRU64\n");
			break;
		case EL_OSABI_
			printf(" ARM\n");
			break;
		case ELFOSABI_STANDLONE :
			printf("standalone App\n");
			break;
		default:
			printf("not known: %x\n", e_ident[EI_OSABI]);
	}
}

/**
 * print-abi - this prints the ABI version of an ELF header
 * @_ident: a pointer  that contains the ELF ABI version
 */

void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - it prints the type of ELF header
 * @e_type: The ELF type
 * @e_ident: a pointer that points to an array containing the ELF class
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf(" Type: ");
	switch(e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf(" REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf(" EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf(" DYN (shared object file)\n");
			break;
		case ET_CORE:
			printf(" CORE ( Core file)\n");
			break;
		default:
			printf("< not known: %x>\n", e_type);
	}
}

/**
 * print_entry - prints the entry point of the ELF header
 * @e_entry - contains the addres of the ELF entry point
 * @e_ident -  a pointer that points to an array that contains the ELF class
 */

void print_entry(unsigned long int  e_entry, unsigned char *e_ident)
{
	printf( " Entry point address:  ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int) e_entry);
	else
		printf("%#1lx\n", e_entry);
}

/**
 * close_elf - it closes the ELF file
 * @elf: file descriptor of the ELF file
 * note: if the file can not close then exide code 98
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"ERROR!: can not terminate fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - it gives details data at the beginning of an ELF file
 * @argc - argument count
 * @argv - arrary of string to the argument
 * Note: if the file is not an ELF  filer (function failure), exist code (98)
 * return: it returns 0 on  success
 */

int main(__attribute__((__unused__))agc, chh  *argv[])
{
	Elf64_Ehdr * header
		int t, k;

	t = open(argv[1], O_RDOnly);
	 if (t == -1)
	 {
		 dprint(STDERR_FLIENO, "ERROR: can not read the file %s\n", argv[1]);
		 exit(98);
	 }
	 header = malloc(sizeof(El64_Ehdr));
	if (header == NULL)
	{
		close_elf(t);
		dprintf(STDERR_FILENo, "Error: can notread file %s\n", argv[1]);
		exit(98);
	}
	k = read(t, hearder, sizeof(Elf64_Ehdr));
	if (k == -1)
	{
		free (header);
		close - elf(t);
		dprintf(STDERR_FILENO, "Error: `%s`: no such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_indent);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->entry, header->e_ident);
	print_version(header->e_ident);

	free(hander);
	close_elf(t);
	return(o);
