#include <array>
#include <chrono>
#include <queue>

#include "include/utils/Global.hpp"
#include "include/pathfinding/BFS.hpp"
#include "include/pathfinding/Dijkstra.hpp"
#include "include/pathfinding/Astar.hpp"


int main()
{
	
int main()
{

	// bfs
	bool bfs_finished = 0;

	unsigned short bfs_path_length = 0;
	unsigned short bfs_total_checks = 0;

	std::chrono::microseconds bfs_duration(0);

	std::map<gbl::Position<>, gbl::Position<>> bfs_previous_cell;

	std::queue<gbl::Position<>> bfs_path_queue;

	gbl::Map<> bfs_map = {};

	gbl::Map<float> bfs_distances = {};
	
	//dijkstra
	bool dijkstra_finished = 0;

	unsigned short dijkstra_path_length = 0;
	unsigned short dijkstra_total_checks = 0;

	std::chrono::microseconds dijkstra_duration(0);

	std::map<gbl::Position<>, gbl::Position<>> dijkstra_previous_cell;

	gbl::Map<float> dijkstra_distances = {};

	std::priority_queue<gbl::Position<>, std::vector<gbl::Position<>>, DijkstraComparison> dijkstra_path_queue((DijkstraComparison(&dijkstra_distances)));

	gbl::Map<> dijkstra_map = {};



	//A*
	bool astar_finished = 0;

	unsigned short astar_path_length = 0;
	unsigned short astar_total_checks = 0;

	std::chrono::microseconds astar_duration(0);

	std::map<gbl::Position<>, gbl::Position<>> astar_previous_cell;

	std::vector<gbl::Position<>> astar_path_vector;

	gbl::Map<> astar_map = {};

	gbl::Map<float> astar_f_scores = {};
	gbl::Map<float> astar_g_scores = {};
	gbl::Map<float> astar_h_scores = {};

	gbl::Map<> map = {};
	bfs_map = map;

	bfs_reset(bfs_finished, bfs_path_length, bfs_total_checks, bfs_duration, bfs_previous_cell, bfs_path_queue, bfs_distances, start_position, bfs_map);

	dijkstra_map = map;
	
	dijkstra_reset(dijkstra_finished, dijkstra_path_length, dijkstra_total_checks, dijkstra_duration, dijkstra_previous_cell, dijkstra_path_queue, dijkstra_distances, start_position, dijkstra_map);

	astar_map = map;

	astar_reset(astar_finished, astar_path_length, astar_total_checks, astar_duration, astar_previous_cell, astar_path_vector, astar_f_scores, astar_g_scores, astar_h_scores, finish_position, start_position, astar_map);
	
}