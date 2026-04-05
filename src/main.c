#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450

void frame() {
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
}

int main(int argc, const char **argv) {
    InitWindow(SCREEN_HEIGHT, SCREEN_WIDTH, "Strategio");

    SetTargetFPS(60);
    while(!WindowShouldClose()) {
        frame();
    }
    CloseWindow();

    return 0;
}
