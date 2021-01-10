
#include <iostream><string>
using namespace std;

class Snorlax
{
private:
    string move1, move2, move3, move4;

public:
    Snorlax(string mv1 = "Body Slam", string mv2 = "Earthquake", string mv3 = "Rest", string mv4 = "Sleep Talk")
    {
        move1 = mv1;
        move2 = mv2;
        move3 = mv3;
        move4 = mv4;
    }

    string useMove2() { return move2; }
    string useMove3() { return move3; }
};

int main()
{
    Snorlax minx("Body Slam", "Earthquake", "Thunderbolt", "Sleep Talk");
    cout << "Minx, use " << minx.useMove3() << "!" << endl;
    Snorlax bulx;
    cout << "Bulx, use " << bulx.useMove2() << "!" << endl;
}
