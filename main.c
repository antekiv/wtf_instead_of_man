#include <unistd.h>

int main(int argc, char **argv)
{
	argv[0] = "man";	
	execvp("man", argv);
	return 0;
}
