#include <iostream>

int main(void)
{
	int num_stairs;
	int points[300] = { 0, };
	int total_points_step_one[300] = { 0, };
	int total_points_step_two[300] = { 0, };
	int max = 0;

	std::cin >> num_stairs;

	for (int i = 0; i < num_stairs; i++)
	{
		std::cin >> points[i];
	}

	total_points_step_one[num_stairs - 1] = points[num_stairs - 1];
	total_points_step_two[num_stairs - 2] = total_points_step_one[num_stairs - 1] + points[num_stairs - 2];
	total_points_step_one[num_stairs - 3] = total_points_step_one[num_stairs - 1] + points[num_stairs - 3];

	for (int i = num_stairs - 4; i > -1; i--)
	{
		total_points_step_two[i] = total_points_step_one[i + 1] + points[i];
		total_points_step_one[i]
			= (total_points_step_one[i + 2] > total_points_step_two[i + 2])
			? total_points_step_one[i + 2] : total_points_step_two[i + 2];
		total_points_step_one[i] += points[i];
	}

	max = total_points_step_one[0];
	if (max < total_points_step_two[0])
		max = total_points_step_two[0];
	if (max < total_points_step_two[1])
		max = total_points_step_two[1];

	std::cout << max;
}