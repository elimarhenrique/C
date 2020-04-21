all:
		gcc -shared -fPIC -o libpetest.so petest.c

clean:
	  rm -f libpetest.so

install:
		install -m 0644 libpetest.so /lib64/libpetest.so

uninstall:
		rm -f /lib64/libpetest.so

