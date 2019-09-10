#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n"; 

	char path[_MAX_PATH];
	memcpy(path, argv[0], strlen(argv[0]));
	char* whoami;
	(whoami = strrchr(path, '\\')) ? ++whoami : (whoami = path);

	char* mytail = strrchr(whoami, '.');
	memcpy(mytail, "_result.xml", 12);

	printf("whoami %s\n", whoami);

	return 0;
}
