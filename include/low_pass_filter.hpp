#include <iostream>
#include <cmath>

/**
 * @author: Mehmet Kahraman
 * @date: 28.12.2022
*/

class low_pass_filter {

    // discrete low pass filter class

    public:
        double smoothness;
        double prev_data;

    // constructor
    low_pass_filter() {
        smoothness = 0.1;
    }

    void set_smoothness(double smooth_value);
    void set_initial_value(double init_value);
    double apply_filter(double current_data);

}; // class