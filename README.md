# Low-Pass-Filter
Multi Dimensional Low Pass Filter in C++

**Authors: Mehmet KAHRAMAN / Date: 18.11.2024**

Installation:
---
```
sudo apt update
sudo apt install libeigen3-dev
```

Example Usage:
---
```
low_pass_filter lp_filter;

int filter_size = 3;
double smoothness = 0.2;
lp_filter.initialize_filter(filter_size, smoothness);
lp_filter.set_initial_value(0.0);

Eigen::VectorXd vector_data(3);
vector_data << 1.0, 2.0, 3.0;
std::cout << "vector_data: " << vector_data.transpose() << "\n" << std::endl;

Eigen::VectorXd filtered_vector = lp_filter.apply_filter(vector_data);
std::cout << "filtered_vector: " << filtered_vector.transpose() << "\n" << std::endl;
```