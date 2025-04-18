# Universal rule to compile any .c file into an executable
%: %.c
	gcc -Wall -Werror -Wextra -o $@ $<

clean:
	del /Q *.exe
