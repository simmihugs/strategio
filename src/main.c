#include "raylib.h"

#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000
#define X_MAX 18
#define Y_MAX 11

void render_tile(Texture2D *tilemap, int x, int y) {
  if (x > X_MAX)
    return;

  if (y > Y_MAX)
    return;

  float frameWidth = (float)tilemap->width / 18;
  float frameHeight = (float)tilemap->height / 11;

  Rectangle sourceRec = {frameWidth * x, frameHeight * y, frameWidth,
                         frameHeight};
  Rectangle destRec = {SCREEN_WIDTH / 2.0f, SCREEN_HEIGHT / 2.0f,
                       frameWidth * 2.0f, frameHeight * 2.0f};

  Vector2 origin = {frameWidth, frameHeight};
  int rotation = 0;

  DrawTexturePro(*tilemap, sourceRec, destRec, origin, (float)rotation, WHITE);
}

void frame(Texture2D *tile, int x, int y) {
  BeginDrawing();
  ClearBackground(BLACK);

  render_tile(tile, x, y);

  EndDrawing();
}

int main(int argc, const char **argv) {
  int x = 0;
  int y = 0;
  InitWindow(SCREEN_HEIGHT, SCREEN_WIDTH, "Strategio");

  Texture2D tilemap = LoadTexture("assets/Tilemap/tilemap_packed.png");

  SetTargetFPS(10);
  while (!WindowShouldClose()) {
    if (x < X_MAX) {
      x++;
    } else {
      x = 0;
      y++;
    }

    frame(&tilemap, x, y);

    if (x == X_MAX && y == Y_MAX) {
      x = 0;
      y = 0;
    }
  }
  CloseWindow();

  return 0;
}
