#include <iostream>
#include <string>
using namespace std;

class InitializePerson
{
private:
    void Log(string VarForLog)
    {
        cout << VarForLog << endl;
    }

public:
    int Initialize(string StringForIni)
    {
        string p = "Workstation";
        if (StringForIni == p)
        {
            Log("Welcome!");
        }
        else
        {
            Log("Acces denified");
        }
    }
};
int main(void)
{
    string Name;
    cin >> Name;
    InitializePerson Person;
    Person.Initialize(Name);
}
