makefile: the main aim of this file is to update and recompile executable and object files. the target is the executable file being recompiled , the prerequisites are either the .o files OR the .c and .h files that make up the executable and object files respectively. the recipe is the rules to be applied to the recompilation of the target files. phony target are targets which are not necessarily files rather are instructions which have prerequisites eg clean
there is a conventional name of the makefiles that is u can only use either 'makefile' OR 'Makefile' in order to use other names you must use the '-f' OR '--f' extensions eg 'make -f 0-makefile' OR 'make --f=0-makefile'