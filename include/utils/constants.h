#pragma once

// General constants are here


// Engine constants
#define ICE_WINDOW_HEIGHT       750
#define ICE_WINDOW_WIDTH        1500
#define ICE_WINDOW_TITLE        "Runic-ice Game"

#define ICE_FIXED_DELTATIME     0.022 // Physics run at 45 fps
#define ICE_FIXED_FPS           60

#define ICE_WORLD_UP_VEC        glm::vec3(0.0f, 1.0f, 0.0f)


// Game constants
#define GAME_FIELD_SIZE_X       20
#define GAME_FIELD_SIZE_Y       10

#define BLOCK_SPEED             2

#define GAME_BALL_ACCELERATION  0.5
#define GAME_BALL_MAX_SPEED     6
#define GAME_BALL_BOUNCE        2

#define GAME_SOAP_GROUND        4

#define PLAYER_WEIGHT           -2.0f


// System paths
#define ICE_PATH_TO_MAP       "resources/tilemaps/level"


// TAGs
namespace ice{
    enum class Tag{ Block, Ball};
}
