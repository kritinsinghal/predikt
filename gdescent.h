#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

struct Data {
        int x,y;
        Data *next;
};

class LinearReg {
        Data *d=nullptr;
        int m;
        double alpha,t1,t2;
        std::string info1,info2;
	void eval();
        public:
        LinearReg();
	void print();
	LinearReg(std::string,std::string);     
        void add(int x,int y);
        void predict(int x);
        void remove(int x);
        ~LinearReg();
};
