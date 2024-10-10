#include <array>
#include <chrono>
#include <queue>

#include "include/utils/Global.hpp"
#include "include/pathfinding/BFS.hpp"


int main()
{
	//bfs
	bool bfs_finished = 0;

	unsigned short bfs_path_length = 0;
	unsigned short bfs_total_checks = 0;

	std::chrono::microseconds bfs_duration(0);

	std::map<gbl::Position<>, gbl::Position<>> bfs_previous_cell;

	std::queue<gbl::Position<>> bfs_path_queue;

	gbl::Map<> bfs_map = {};

	gbl::Map<float> bfs_distances = {};

	bfs_search(bfs_path_length, bfs_total_checks, bfs_duration, bfs_previous_cell, bfs_path_queue, bfs_distances, finish_position, start_position, bfs_map);

	bfs_reset(bfs_finished, bfs_path_length, bfs_total_checks, bfs_duration, bfs_previous_cell, bfs_path_queue, bfs_distances, start_position, bfs_map);

	
}