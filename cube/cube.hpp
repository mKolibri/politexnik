#ifndef CUBE_HPP
#define CUBE_HPP

class Cube { 
        private: 
                int full; 
                int half; 
                int paint; 
        public: 
                int getFull(); 
                int getHalf(); 
                int getPaint(); 
                void setFull(int); 
                void setHalf(int); 
                void setPaint(int);
		void print();
		void init(int, int, int); 
		Cube(int full = 0, int half = 0, int paint = 0); 
                ~Cube(); 
}; 

#endif
