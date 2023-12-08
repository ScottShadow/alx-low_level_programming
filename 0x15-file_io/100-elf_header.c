#include <elf.h>
#include "main.h"
void process_section_header(Elf64_Shdr section_header, char *section_names)
{
	const char *section_name = section_names + section_header.sh_name;

	printf("Section Name: %s\n", section_name);
	printf("Section Type: %d\n", section_header.sh_type);
	printf("Section Address: %lu\n", (unsigned long)section_header.sh_addr);
}
void process_program_header(Elf64_Phdr program_header)
{
	printf("Segment Type: %d\n", program_header.p_type);
	printf("Segment Offset: %lu\n", (unsigned long)program_header.p_offset);
	printf("Segment Virtual Address: %lu\n",
		   (unsigned long)program_header.p_vaddr);
}
int main(int argc, char **av)
{
	int fd;
	int i;
	Elf64_Ehdr elf_header;
	Elf64_Shdr section_header;
	Elf64_Phdr program_header;
	char buffer[1024];
	ssize_t bytes_read;
	char *section_names;

	if (argc != 2)
		return (-1);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		printf("cant open elf\n");
		return (-1);
	}
	printf("1\n");
	section_names = malloc(elf_header.e_shentsize * elf_header.e_shnum);
	if (section_names == NULL)
		return (-1);
	read(fd, &elf_header, sizeof(Elf64_Ehdr));

	for (i = 0; i < elf_header.e_shnum; i++)
	{
		lseek(fd, elf_header.e_shoff + i * sizeof(Elf64_Shdr), SEEK_SET);
		read(fd, &section_header, sizeof(Elf64_Shdr));
	}
	printf("2\n");
	process_section_header(section_header, section_names);
	printf("3\n");
	for (i = 0; i < elf_header.e_phnum; i++)
	{
		lseek(fd, elf_header.e_phoff + i * sizeof(Elf64_Phdr), SEEK_SET);
		read(fd, &program_header, sizeof(Elf64_Phdr));
	}
	printf("4\n");
	process_program_header(program_header);
	printf("5\n");
	while ((bytes_read = read(fd, buffer, BUFSIZ)) > 0)
	{
		printf("%.*s", (int)bytes_read, buffer);
	}
	printf("6\n");
	if (close(fd) == -1)
		return (-1);
	free(section_names);
	return (0);
}
