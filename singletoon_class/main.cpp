#include<bits/stdc++.h>
#include"base_class.hpp"

void function1() {
    base& b =  base::get_instance();
    while(1) {
    b.print_data();
    std::cout << "thread1" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void function2() {
    base& b1 = base::get_instance();
    while(1){
    b1.print_data();
    std::cout << "thread2" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    }

}

int main(void) {

    base& b2 = base::get_instance();

    std::thread t1 =  std::thread(function1);
    std::thread t2 = std::thread(function2);

    b2.print_data();

    t1.join();
    t2.join();

    return 0;



}