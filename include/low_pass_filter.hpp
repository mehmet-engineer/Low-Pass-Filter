#include <iostream>
#include <cmath>

#include <Eigen/Dense>

/**
 * @author: Mehmet Kahraman
 * @date: 25.10.2024
 * @about: Simple Multi Dimensional Low Pass Filter Class.
*/

class LowPassFilter 
{
    private:

        Eigen::VectorXd ones_vector;

    public:

        int filter_size;
        Eigen::VectorXd smoothness_vector;
        Eigen::VectorXd prev_data_vector;
        Eigen::VectorXd filtered_vector;

    // --------------------------------------------------------------------
    // CONSTRUCTOR
    // --------------------------------------------------------------------

    LowPassFilter();

    // --------------------------------------------------------------------
    // MEMBER FUNCTIONS
    // --------------------------------------------------------------------

    /**
     * @brief initializes filter with filter size and smoothness values
     * @param filter_size filter size (number of vector elements)
     * @param smoothness smoothness value from 0.0 to 1.0, if smoothness is 1.0, filter does not effect.
     * @return None (void)
    */ 
    void initialize_filter(int filter_size, double smoothness);

    /**
     * @brief set smoothness value for all filter elements, if smoothness is 1.0, filter does not effect.
     * @param smoothness smoothness value from 0.0 to 1.0
     * @return None (void)
    */ 
    void set_smoothness(double smooth_value);

    /**
     * @brief set initial value for all filter elements.
     * @param init_value initialization value for first filter result
     * @return None (void)
    */ 
    void set_initial_value(double init_value);

    /**
     * @brief apply filter and update filter with current data, it returns filtered vector.
     * @param current_vector current data vector to be filtered
     * @return filtered vector
    */ 
    Eigen::VectorXd apply_filter(Eigen::VectorXd& current_vector);


}; // class
