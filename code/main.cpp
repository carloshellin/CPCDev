#include "SDL.h"

#include "amstrad_cpc.h"
#include "cpu.h"

int main(int argc, char *argv[])
{
	SDL_RWops *File = SDL_RWFromFile("cpc464.rom", "r");
	size_t FileSize = (size_t) SDL_RWsize(File);
	if (File != NULL) {
		SDL_RWread(File, Memory, FileSize, 1);
		SDL_RWclose(File);
	}

	while (true)
	{
		CPU_Cycle();
	}

	return 0;
}