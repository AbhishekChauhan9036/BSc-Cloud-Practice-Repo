#include<bits/stdc++.h>

using namespace std;

class PetrolCar{
    protected:
        int pgear;
    public:
    void petrolEngine(){
        cout<<"Petrol Engine is running....."<<endl;
    }
};

class ElectricCar{
    protected:
        int egear;
    public:
    void electricEngine(){
        cout<<"Electric Engine is running....."<<endl;
    }
};

class HybridCar: public PetrolCar, public ElectricCar{
    protected:
    int hgear;
    public:
    void setGear(int pg, int eg, int hg){
        pgear = pg;
        egear = eg;
        hgear = hg;
    }

    void hybridEngine(){
        cout<<"Hybrid Engine is running....."<<endl;
    }

    void display(){
        cout<<"Petrol Gear: "<<pgear<<endl;
        cout<<"Electric Gear: "<<egear<<endl;
        cout<<"Hybrid Gear: "<<hgear<<endl;
    }
};

int main()
{
    HybridCar h;
    h.setGear(1, 2, 3);
    h.petrolEngine();
    h.electricEngine();
    h.hybridEngine();
    h.display();
    
    return 0;
}