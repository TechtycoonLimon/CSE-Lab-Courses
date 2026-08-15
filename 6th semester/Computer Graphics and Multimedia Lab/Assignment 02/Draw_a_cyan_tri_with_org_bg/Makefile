win:
	C:/msys64/usr/bin/g++.exe -fdiagnostics-color=always -I./include ./src/main.cpp ./src/glad.c -o ./build/main.exe -L"C:/msys64/mingw64/lib" -lglfw3 -lopengl32 -lgdi32 -luser32 -lshell32
	./build/main.exe

linux:
	g++ -fdiagnostics-color=always -I./include ./src/main.cpp ./src/glad.c -o ./build/main -Llib -lglfw -lGL -lXrandr -lX11 -lrt -ldl
	./build/main