#ifndef _BASECLASS_HPP_
#define _BASECLASS_HPP_

#include<bits/stdc++.h>

class base{
    private:

        int i{0};

        std::mutex lock_;
        // keeping the default constructor and copy constructor in private
        base(){}

        base(const base&);

        // deleteing the assignment operator 
         base operator=(base const& obj) = delete;
    public:
        static base& get_instance(){
            static base base_obj;
            return base_obj;
        }

        void print_data();

};

#endif