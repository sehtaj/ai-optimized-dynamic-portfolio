#pragma once

// i dont know why i have included Global.hpp this here but 
// the program is not building without adding it here
// check why is this happening here. "  TECH DEBT"

#include "utils/Global.hpp"  // Include the Global header to access the gbl namespace
void draw_map(const unsigned short i_x, const unsigned short i_y, const gbl::Position<>& i_finish_position, const gbl::Position<>& i_start_position, sf::RenderWindow& i_window, sf::Sprite& i_map_sprite, const gbl::Map<>& i_map, const bool i_change_colors = 0, const gbl::Map<float>& i_distances = {});