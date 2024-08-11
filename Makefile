

main.out : main.c
		   gcc -o main main.c -lpthread 


clean	: 
		rm *.o *.out *.a *.dll *.so