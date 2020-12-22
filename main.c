#include <stdio.h>
#include <stdlib.h>

int getch() {
	int chr = getchar();
	if(chr == EOF)
		exit(0);
	return chr;
}

int main(int argc, char** argv) {
	if(argc == 1) {
		printf("Please provide range");
		return 1;
	}
	
	int from = 0;
	int to = 0;
	int hyphen = 0;
	int i;

	for(i = 0; argv[1][i] != '\0' && argv[1][i] != '-'; i++) {
		from = from * 10 + argv[1][i] - '0';
	}
	if(argv[1][i] == '-') {
		hyphen = 1;
		i++;
		if(argv[1][i] != '\0') {
			for(; argv[1][i] != '\0'; i++) {
				to = to * 10 + argv[1][i] - '0';
			}
		}
	}

	int current_line = 1;
	int chr;

	if(hyphen) {
		while(current_line < from)
			if(getch() == '\n') current_line++;
		if(to) {
			while(current_line <= to) {
				chr = getch();
				putchar(chr);
				if(chr == '\n') current_line++;
			}
			return 0;
		}
		else {
			while(1)
				putchar(getch());
		}
	}
	else {
		while(current_line < from)
			if(getch() == '\n') current_line++;
		while(1) {
			chr = getch();
			putchar(chr);
			if(chr == '\n') return 0;
		}
	}
}
