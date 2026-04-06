#include "raylib.h"

#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000
#define X_MAX 18
#define Y_MAX 11

void render_tile(Texture2D *tilemap, int x, int y, int pos_x, int pos_y) {
  if (x > X_MAX)
    return;

  if (y > Y_MAX)
    return;

  float frameWidth = (float)tilemap->width / 18;
  float frameHeight = (float)tilemap->height / 11;

  Rectangle sourceRec = {frameWidth * x, frameHeight * y, frameWidth,
                         frameHeight};
  Rectangle destRec = {(float)pos_x, (float)pos_y, frameWidth * 2.0f,
                       frameHeight * 2.0f};

  Vector2 origin = {frameWidth, frameHeight};
  int rotation = 0;

  DrawTexturePro(*tilemap, sourceRec, destRec, origin, (float)rotation, WHITE);
}

void frame(Texture2D *tilemap) {
  float frameWidth = (float)tilemap->width / 18;
  float frameHeight = (float)tilemap->height / 11;

  BeginDrawing();
  ClearBackground(BLACK);

  for (int x = 0; x < 18; x++) {
    for (int y = 0; y < 11; y++) {
      render_tile(tilemap, x, y, 2 * x * frameWidth, frameHeight + 2 * y * frameHeight);
    }
  }

  EndDrawing();
}

int main(int argc, const char **argv) {
  InitWindow(SCREEN_HEIGHT, SCREEN_WIDTH, "Strategio");

  Texture2D tilemap = LoadTexture("assets/Tilemap/tilemap_packed.png");

  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    frame(&tilemap);
  }
  CloseWindow();

  return 0;
}
