#pragma once

#include "raylib.h"

typedef struct {
  int x;
  int y;
} TileCoord;

typedef enum {
  TILE_GRASS = 0,
  TILE_GRASS_FLOWERS,
  TILE_TREE_SMALL,
  TILE_WATER_TOP_LEFT,
  TILE_WATER_TOP_RIGHT,
  TILE_WATER_BOTTOM_LEFT,
  TILE_WATER_BOTTOM_RIGHT,

  TILE_ROAD_VERTICAL,
  TILE_ROAD_HORIZONTAL,
  TILE_ROAD_CORNER_TR,
  TILE_ROAD_CORNER_BR,
  TILE_ROAD_CORNER_BL,
  TILE_ROAD_CORNER_TL,
  TILE_ROAD_INTERSECTION,

  TILE_BLD_GREY_SMALL,
  TILE_BLD_GREY_LARGE,
  TILE_BLD_GREY_FACTORY,
  TILE_BLD_GREY_TOWER,

  TILE_BLD_GREEN_SMALL,
  TILE_BLD_GREEN_LARGE,
  TILE_BLD_GREEN_FACTORY,
  TILE_BLD_GREEN_TOWER,

  TILE_BLD_BLUE_SMALL,
  TILE_BLD_BLUE_LARGE,
  TILE_BLD_BLUE_FACTORY,
  TILE_BLD_BLUE_TOWER,

  TILE_BLD_RED_SMALL,
  TILE_BLD_RED_LARGE,
  TILE_BLD_RED_FACTORY,
  TILE_BLD_RED_TOWER,

  TILE_CAR_GREY,
  TILE_TRUCK_GREY,
  TILE_TANK_GREY,
  TILE_CAR_GREEN,
  TILE_TRUCK_GREEN,
  TILE_TANK_GREEN,
  TILE_CAR_BLUE,
  TILE_TRUCK_BLUE,
  TILE_TANK_BLUE,
  TILE_CAR_RED,
  TILE_TRUCK_RED,
  TILE_TANK_RED,

  TILE_PLANE_GREY,
  TILE_HELI_GREY,
  TILE_SHIP_GREY,
  TILE_PLANE_GREEN,
  TILE_HELI_GREEN,
  TILE_SHIP_GREEN,
  TILE_PLANE_RED,
  TILE_HELI_RED,
  TILE_SHIP_RED,

  TILE_SOLDIER_GREY_IDLE,
  TILE_SOLDIER_GREY_WALK,
  TILE_SOLDIER_GREEN_IDLE,
  TILE_SOLDIER_GREEN_WALK,
  TILE_SOLDIER_BLUE_IDLE,
  TILE_SOLDIER_BLUE_WALK,
  TILE_SOLDIER_RED_IDLE,
  TILE_SOLDIER_RED_WALK,

  TILE_NUM_0,
  TILE_NUM_1,
  TILE_NUM_2,
  TILE_NUM_3,
  TILE_NUM_4,
  TILE_NUM_5,
  TILE_NUM_6,
  TILE_NUM_7,
  TILE_NUM_8,
  TILE_NUM_9,
  TILE_ICON_QUESTION,
  TILE_ICON_EXCLAMATION,
  TILE_ICON_LOCK,
  TILE_ICON_FLAG,
  TILE_ICON_HEART,
  TILE_ICON_THUMBS_UP,
  TILE_ICON_CLOUD,

  TILE_COUNT
} TileType;

static const TileCoord TILE_MAP[] = {
    [TILE_GRASS] = {0, 0},
    [TILE_GRASS_FLOWERS] = {1, 0},
    [TILE_TREE_SMALL] = {4, 4},
    [TILE_WATER_TOP_LEFT] = {3, 0},
    [TILE_WATER_TOP_RIGHT] = {4, 0},
    [TILE_WATER_BOTTOM_LEFT] = {3, 1},
    [TILE_WATER_BOTTOM_RIGHT] = {4, 1},

    [TILE_ROAD_VERTICAL] = {0, 5},
    [TILE_ROAD_HORIZONTAL] = {1, 4},
    [TILE_ROAD_CORNER_TR] = {1, 5},
    [TILE_ROAD_CORNER_BR] = {1, 6},
    [TILE_ROAD_CORNER_BL] = {0, 6},
    [TILE_ROAD_CORNER_TL] = {0, 4},
    [TILE_ROAD_INTERSECTION] = {2, 5},

    [TILE_BLD_GREY_SMALL] = {5, 0},
    [TILE_BLD_GREY_LARGE] = {6, 0},
    [TILE_BLD_GREY_FACTORY] = {7, 0},
    [TILE_BLD_GREY_TOWER] = {8, 0},

    [TILE_BLD_GREEN_SMALL] = {5, 1},
    [TILE_BLD_GREEN_LARGE] = {6, 1},
    [TILE_BLD_GREEN_FACTORY] = {7, 1},
    [TILE_BLD_GREEN_TOWER] = {8, 1},

    [TILE_BLD_BLUE_SMALL] = {5, 2},
    [TILE_BLD_BLUE_LARGE] = {6, 2},
    [TILE_BLD_BLUE_FACTORY] = {7, 2},
    [TILE_BLD_BLUE_TOWER] = {8, 2},

    [TILE_BLD_RED_SMALL] = {5, 3},
    [TILE_BLD_RED_LARGE] = {6, 3},
    [TILE_BLD_RED_FACTORY] = {7, 3},
    [TILE_BLD_RED_TOWER] = {8, 3},

    [TILE_CAR_GREY] = {5, 4},
    [TILE_TRUCK_GREY] = {6, 4},
    [TILE_TANK_GREY] = {7, 4},
    [TILE_CAR_GREEN] = {5, 5},
    [TILE_TRUCK_GREEN] = {6, 5},
    [TILE_TANK_GREEN] = {7, 5},
    [TILE_CAR_BLUE] = {5, 6},
    [TILE_TRUCK_BLUE] = {6, 6},
    [TILE_TANK_BLUE] = {7, 6},
    [TILE_CAR_RED] = {5, 7},
    [TILE_TRUCK_RED] = {6, 7},
    [TILE_TANK_RED] = {7, 7},

    [TILE_PLANE_GREY] = {9, 4},
    [TILE_HELI_GREY] = {10, 4},
    [TILE_SHIP_GREY] = {11, 4},
    [TILE_PLANE_GREEN] = {9, 5},
    [TILE_HELI_GREEN] = {10, 5},
    [TILE_SHIP_GREEN] = {11, 5},
    [TILE_PLANE_RED] = {9, 7},
    [TILE_HELI_RED] = {10, 7},
    [TILE_SHIP_RED] = {11, 7},

    [TILE_SOLDIER_GREY_IDLE] = {13, 4},
    [TILE_SOLDIER_GREY_WALK] = {14, 4},
    [TILE_SOLDIER_GREEN_IDLE] = {13, 5},
    [TILE_SOLDIER_GREEN_WALK] = {14, 5},
    [TILE_SOLDIER_BLUE_IDLE] = {16, 7},
    [TILE_SOLDIER_BLUE_WALK] = {17, 7},
    [TILE_SOLDIER_RED_IDLE] = {13, 7},
    [TILE_SOLDIER_RED_WALK] = {14, 7},

    [TILE_NUM_0] = {0, 9},
    [TILE_NUM_1] = {1, 9},
    [TILE_NUM_2] = {2, 9},
    [TILE_NUM_3] = {3, 9},
    [TILE_NUM_4] = {4, 9},
    [TILE_NUM_5] = {5, 9},
    [TILE_NUM_6] = {6, 9},
    [TILE_NUM_7] = {7, 9},
    [TILE_NUM_8] = {8, 9},
    [TILE_NUM_9] = {9, 9},
    [TILE_ICON_QUESTION] = {10, 9},
    [TILE_ICON_EXCLAMATION] = {11, 9},
    [TILE_ICON_LOCK] = {12, 9},
    [TILE_ICON_FLAG] = {13, 9},
    [TILE_ICON_HEART] = {14, 9},
    [TILE_ICON_THUMBS_UP] = {15, 9},
    [TILE_ICON_CLOUD] = {16, 9},
};

void render_tile(Texture2D *tilemap, TileType type, int pos_x, int pos_y, bool flipped) {
  TileCoord coord = TILE_MAP[type];

  float frameWidth = (float)tilemap->width / 18;
  float frameHeight = (float)tilemap->height / 11;

  float sourceWidth = frameWidth;
  if (flipped)
      sourceWidth *= -1;
  
  Rectangle sourceRec = {frameWidth * coord.x, frameHeight * coord.y,
                         sourceWidth, frameHeight};
  Rectangle destRec = {(float)pos_x, (float)pos_y, frameWidth * 2.0f,
                       frameHeight * 2.0f};

  Vector2 origin = {frameWidth, frameHeight};
  int rotation = 0;


  DrawTexturePro(*tilemap, sourceRec, destRec, origin, (float)rotation, WHITE);  
}
