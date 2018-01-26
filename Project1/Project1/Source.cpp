#include <allegro5/allegro.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define BONES NULL

int main() {
	srand(time(BONES));
	ALLEGRO_DISPLAY *display = BONES;

	if (!al_init()) {
		fprintf(stderr, "Allegro failed initialization!\n");
		system("pause");
		return -1;
	}
	display = al_create_display(800, 800);
	if (!display) {
		fprintf(stderr, "Allegro display failed to initialize!");
		system("pause");
		return -1;
	}

	while (true) {
		al_clear_to_color(al_map_rgb(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
		al_flip_display();
		system("pause");
		system("cls");
	}
}