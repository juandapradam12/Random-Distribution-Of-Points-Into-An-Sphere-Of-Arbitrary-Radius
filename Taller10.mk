# compilo con make -f Taller10.mk

*.png : *.dat Plot.py
	python Plot.py

*.dat : esfera.x 
	./esfera.x 

esfera.x : esfera.c
	cc esfera.c -o esfera.x -lm
clean :
	rm *.dat  *.x *.png  
