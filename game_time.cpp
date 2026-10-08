#include <iostream>

// 78 and 144
int TIME_LVL_1 = 78;
int TIME_LVL_2 = 144;
int diff_time = TIME_LVL_2 - TIME_LVL_1;

// arithmetic
int lvl_1_converted_hours = TIME_LVL_1 / 60;
int lvl_1_converted_min = TIME_LVL_1 % 60;

int lvl_2_converted_hours = TIME_LVL_2 / 60;
int lvl_2_converted_min = TIME_LVL_2 % 60;

// find the difference
int diff_converted_hours = diff_time / 60;
int diff_converted_min = diff_time % 60;

int main()
{
    std::cout << "Level 1 took " << lvl_1_converted_hours << " hr and " << lvl_1_converted_min << " min.\n";
    std::cout << "Level 2 took " << lvl_2_converted_hours << " hrs and " << lvl_2_converted_min << " min.\n";
    std::cout << "Level 2 took " << diff_converted_hours << " hr and " << diff_converted_min << " min longer than level 1.";
    return 0;
}