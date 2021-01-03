// Car objects with class

#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string model;
    int age;
    string color;
    int horsepower;

public:
    void set_model(string car_model)
    {
        model = car_model;
    }
    string get_model()
    {
        return model;
    }

    void set_age(int car_age)
    {
        age = car_age;
    }
    int get_age()
    {
        return age;
    }
    void set_color(string car_color)
    {
        color = car_color;
    }
    string get_color()
    {
        return color;
    }
    void set_horsepower(int car_horsepower)
    {
        horsepower = car_horsepower;
    }
    int get_horsepower()
    {
        return horsepower;
    }
};
int main()
{
    const bool driver = false;
    Car mazda;
    mazda.set_model("Mazda 6");
    mazda.set_age(2015);
    mazda.set_color("Red");
    mazda.set_horsepower(600);
    cout << mazda.get_model() << " " << mazda.get_age() << " " << mazda.get_color() << " " << mazda.get_horsepower() << endl;
    if (driver == 1)
    {
        cout << "The driver is a woman" << endl;
    }
    if (driver == 0)
    {
        cout << "The driver is a man" << endl;
    }
    return 0;
}