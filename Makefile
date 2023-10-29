all:
	g++ -I sdl-config/include -L sdl-config/lib -o ../build/main main.cpp platform.cpp chip8.cpp -lmingw32 -lSDL2main -lSDL2