global    main; stahdard gcc entry point
          extern    printf
main:; the program label for entry point
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,0
