#include <low_pass_filter.hpp>
#include <cmath>

/**
 * @author: Mehmet Kahraman
 * @date: 28.12.2022
*/

void low_pass_filter::set_smoothness(double smooth_value) {

    // if smoothness is 1.0, filter does not effect
    smoothness = smooth_value;
}

void low_pass_filter::set_initial_value(double init_value) {

    prev_data = init_value;

}

double low_pass_filter::apply_filter(double current_data) {
        
    if (std::isnan(current_data) == true) {
        prev_data = current_data;
        return current_data;
    }

    double new_data;
    
    // assume that smoothness is 0.2
    // get %80 of previous data and get %20 of current data
    new_data = prev_data*(1.0 - smoothness) + current_data*smoothness;

    prev_data = new_data;
    return new_data;
        
}