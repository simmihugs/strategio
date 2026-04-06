#include "raylib.h"
#include "tilemap.h"

#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 1000

void frame(Texture2D *tilemap, int frame_counter) {
  float frameWidth = (float)tilemap->width / 18;
  float frameHeight = (float)tilemap->height / 11;

  BeginDrawing();
  ClearBackground(BLACK);

  for (int x = 0; x < 30; x++) {
    for (int y = 0; y < 30; y++) {
      render_tile(tilemap, TILE_GRASS_FLOWERS, 2 * x * frameWidth,
                  frameHeight + 2 * y * frameHeight);
    }
  }

  render_tile(tilemap, TILE_BLD_RED_FACTORY, 2 * 3 * frameWidth,
              frameHeight + 2 * 17 * frameHeight);

  if (frame_counter % 2 == 0)
      render_tile(tilemap, TILE_SOLDIER_BLUE_IDLE, 2 * 10 * frameWidth,
	  frameHeight + 2 * 7 * frameHeight);
  else
      render_tile(tilemap, TILE_SOLDIER_BLUE_WALK, 2 * 10 * frameWidth,
	  frameHeight + 2 * 7 * frameHeight);
      

  // moving plane
  render_tile(tilemap, TILE_PLANE_GREY, 2 * frame_counter * frameWidth,
              frameHeight + 2 * 4 * frameHeight);

  EndDrawing();
}

int main(int argc, const char **argv) {
  int i = 0;
  InitWindow(SCREEN_HEIGHT, SCREEN_WIDTH, "Strategio");

  Texture2D tilemap = LoadTexture("assets/Tilemap/tilemap_packed.png");

  SetTargetFPS(10);
  while (!WindowShouldClose()) {
    frame(&tilemap, i++);
  }
  CloseWindow();

  return 0;
}
