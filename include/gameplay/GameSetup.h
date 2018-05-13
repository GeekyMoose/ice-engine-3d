#pragma once

#include "GameData.h"

#include "utils/log.h"
#include "engine/MeshManager.h"

#include <vector>
#include <GLFW/glfw3.h> // Kind of ugly, but to register gameplay keys

namespace ice {


/**
 * Load all the GameData.
 */
class GameSetup {

    public:
        static void loadGameData() {
            LOG << "DATA: load game data (Mesh...)\n";
            // Little bit hard coded (Little bit)

            // Add block Mesh data
            MeshManager::getInstance().createMesh(
                    "GameBlock",
                    GameData::cube_vnt_data,
                    GameData::cube_indices_data,
                    std::vector<Texture>{});
            LOG << "Mesh created \n";
        }

        static void loadAllInputs() {
            LOG << "Register all gameplay inputs for the game\n";

            InputManager& _input = InputManager::getInstance();
            _input.registerInput("debug1", GLFW_KEY_ESCAPE);
        }
};


} // End namespace

