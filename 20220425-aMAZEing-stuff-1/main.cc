/*
 * main.cc
 *
 *  Created on: 15 мая 2022 г.
 *      Author: Doker
 */


#include <iostream>
#include <SDL2/SDL_main.h>
#include <SDL2/SDL.h>
//#include "Map.h"
#include "Window.h"

int main(int, char **)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	Window w {1920, 1080};
	w.main_loop();
	/*
	Map m1 { "map01.txt" };

	for (int y=0; y <m1.height(); ++y) {
		for (int x = 0; x < m1.width(); ++x)
			std::cout << (m1.is_wall(x, y)? "\u2588\u2588" : "\u2591\u2591");
		std::cout << std::endl;
	}
	*/
	return 0;
}


