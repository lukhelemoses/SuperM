#include<iostream>
#include"allegro5/allegro.h"
#include"allegro5/allegro_native_dialog.h"
#include"allegro5/allegro_font.h"
#include"allegro5/allegro_ttf.h"

using namespace std;
#define width 640
#define lenght 480

int main(int argc, char **argv)
{

	ALLEGRO_DISPLAY *display=NULL;

	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "", NULL, NULL);
		return -1;
	}
	display = al_create_display(width, lenght);

	if (!display)
	{
		al_show_native_message_box(NULL, "ERROR", NULL, "Game could not load", NULL, NULL);
		return -1;
	}
	al_clear_to_color(al_map_rgb(255, 0, 255));
	al_flip_display();
	al_rest(5.0);

	al_destroy_display(display);

	return 0;
}