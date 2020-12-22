pl:
	gcc main.c -O3 -o pl
install: pl
	sudo mv pl /usr/bin/pl
clean:
	rm pl
uninstall:
	sudo rm /usr/bin/pl
