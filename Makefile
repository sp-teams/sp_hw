all: main.o function.o
	g++ ./temp/main.o ./temp/function.o -o ./out/hw.o
#	clear
	@echo "==================== compile finish ====================" 
	@echo "If you want to use it please type in ./out/hw.o {string}"
	@echo "use 'make clean' can clean all temp file"
	@echo "阿姨 我不想努力了"
function.o:
	g++ ./include/function.cpp -c -o ./temp/function.o

main.o:
	g++ main.cpp -c -o ./temp/main.o

clean: 
	rm ./temp/*.o
	clear
