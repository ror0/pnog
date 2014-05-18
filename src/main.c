#include <stdio.h>
#include <stdbool.h>

#include "game.h"
#include "lib.h"
#include "vars.h"

int main()
{
	init_lib();

	init_game();

	play();

	cleanup();
	return 0;
}

