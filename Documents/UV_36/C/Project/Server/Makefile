default : tp7targa

tp7targa : img_process/main_targa.o img_process/mem_targa.o img_process/fun_targa.o
	gcc -g -Wall img_process/main_targa.o img_process/fun_targa.o img_process/mem_targa.o -o tp7targa

mem_targa.o : img_process/mem_targa.c img_process/mem_targa.h
	gcc -g -Wall -c img_process/mem_targa.c -o img_process/mem_targa.o

fun_targa.o : img_process/fun_targa.c img_process/fun_targa.h
	gcc -g -Wall -c img_process/fun_targa.c -o img_process/fun_targa.o

main_targa.o : img_process/main_targa.c img_process/mem_targa.o img_process/fun_targa.o
	gcc -g -Wall -c img_process/main_targa.c -o img_process/main_targa.o
