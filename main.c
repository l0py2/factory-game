#include <raylib.h>

int main(void) {
	const int screen_width = 800;
	const int screen_height = 600;
	const char* window_title = "Factory Game";

	InitWindow(screen_width, screen_height, window_title);

	SetTargetFPS(60);

	while(!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(RAYWHITE);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
