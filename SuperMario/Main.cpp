
#include"allegro5/allegro.h"
#include"allegro5/allegro_native_dialog.h"
#include"allegro5/allegro_primitives.h"



using namespace std;
#define width 640
#define lenght 480

int main(int argc, char **argv)
{
	 
	ALLEGRO_DISPLAY *display=NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;

	if (!al_init())                    //initailise allegro
		return -1;
	
display = al_create_display(width, lenght);

	if (!display)
	{
		al_show_native_message_box(NULL, "ERROR", NULL, "Game could not load", NULL, NULL);
		return -1;
	}
	al_init_primitives_addon();
	al_install_keyboard();
	al_clear_to_color(al_map_rgb(0, 0, 0));
	bool done = false;
	int x = 20;
	int y = 20;
	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	while (!done)
	{
		ALLEGRO_EVENT a;
		al_wait_for_event(event_queue, &a);
		if (a.type == ALLEGRO_KEY_DOWN)
		{
			switch (a.keyboard.keycode)
			{
			case ALLEGRO_KEY_UP:
					y += 10;
					break;


			}
		}

	}
	


	al_flip_display();
	al_rest(5.0);
	al_destroy_display(display);

	return 0;
}