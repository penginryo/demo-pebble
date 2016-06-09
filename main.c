#include <pebble.h>
Window *window;
TextLayer *text_layer;

void init(){
	window = window_create();
	window_stack_push(window, true);

	text_layer = text_layer_create(GRect(20, 40, 144, 40));
	text_layer_set_text(text_layer, "Hello, Pebble!");
	layer_add_child(window_get_root_layer(window), text_layer_get_layer(text_layer));
}

void deinit() {
	window_destroy(window);
	text_layer_destroy(text_layer);
}

int main(void) {

	init();

	app_event_loop();

	deinit();

	return 0;
}
