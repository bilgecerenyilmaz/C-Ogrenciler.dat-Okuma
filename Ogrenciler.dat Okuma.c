#include <stdio.h>
struct Student {
	int id;
	char name[16];
	char surname[16];
	int average;
};
int main() {
	FILE* file = fopen("C:\\Users\\Ceren\\Downloads\\Ogrenciler.dat", "rb");
	struct Student student;
	while (fread(&student, sizeof(struct Student), 1, file) == 1) {
		printf(" -------------------------------------------\n");
		printf(" ID       : %d\n", student.id);
		printf(" Name     : %s\n", student.name);
		printf(" Surname  : %s\n", student.surname);
		printf(" Average  : %d\n", student.average);
		printf(" -------------------------------------------\n\n");
	}
	fclose(file);
	return 0;
}

