all: main.o init.o
	g++ ./temp/main.o ./temp/init.o -o ./out/hw.o
	clear
	@echo "==================== compile finish ====================" 
	@echo "If you want to use it please type in ./out/hw.o {string}"
init.o:
	g++ ./include/init.cpp -c -o ./temp/init.o

main.o:
	g++ main.cpp -c -o ./temp/main.o

