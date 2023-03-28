class ParkingSystem {
public:
    int b,m,s;
    ParkingSystem(int b, int m, int s) {
        this->b=b;this->m=m;this->s=s;
    }
    
    bool addCar(int c) {
        if(c==1 and b)
           { b--;return 1;}
        if(c==2 and m)
           { m--;return 1;}
        if(c==3 and s)
           { s--;return 1;}
        return 0;            
    }
};

