// Battery + tempalte specialization

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// template class for kicks

template <class V>

class Battery
{

public:
    // inline setter constructor

    Battery(V charge, V volts) : batteryLife(charge), voltage(volts)
    {
    }

    ~Battery()
    {
    }

    // changes perentage of power remaining int the battery

    void setBatteryLife(V bl)
    {

        batteryLife = bl;

        // if the battery dies end the code

        if (getBatteryLife() <= 0)
        {

            cout << "\nThe batterys energy was depleted...";

            cout << "\n\nHoped you enjoyed the code - Manual ; >";

            exit(0);
        }
    }

    void setVoltage(V volts)
    {

        voltage = volts;
    }

    void drainBattery(V drained)
    {

        (*this).setBatteryLife((*this).getBatteryLife() - drained);

        cout << "\n"
             << drained << " percent drained!\n\n";

        cout << getBatteryLife() << "% Remains\n\n";
    }

    V getBatteryLife()
    {

        return batteryLife;
    }

    V getVoltage()
    {

        return voltage;
    }
    useBattery()
    {

        // loop for draing battery

        while (this->getBatteryLife())
        {

            this->drainBattery(rand() % 15);
        }
    }

private:
    V batteryLife;

    V voltage;
};

int main()
{

    srand(time(0));

    // create a battery

    Battery bigCell(80, 480);

    bigCell.useBattery();

    return 0;
}