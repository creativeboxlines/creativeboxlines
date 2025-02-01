#include"base_class.hpp"


void base::print_data(){
    std::lock_guard<std::mutex> lock(this->lock_);
     std::cout << "In the base class for:" << i << std::endl;
     ++(this->i);
}