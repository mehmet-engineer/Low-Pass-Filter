#include <low_pass_filter.hpp>

int main(int argc, char** argv) 
{

    // initialize
    low_pass_filter lp_filter;

    lp_filter.set_smoothness(0.2);
    lp_filter.set_initial_value(0.0);

    // usage
    double filtered_value = lp_filter.apply_filter(0.1);

    std::cout << "filtered_value: " << filtered_value << std::endl;

    return 0;
}