// Save/load experience + files

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <time.h>

using namespace std;

// increases experience points

int gainExperience(int expGained, int xp)
{

    xp = xp + expGained;

    return xp;
}

// records eperience to file

void recordExperienceData(int exp)
{

    // create an ofstream object

    ofstream write;

    // create / open a file to save/ write data

    write.open("exp_file.txt");

    // record experience points

    write << exp;

    cout << "\n\nData Saved\n\n";

    // close file

    write.close();
}

// gets experience from file

int getExperienceData()
{

    // create a ifstream object

    ifstream read;

    // open file containing experience

    read.open("exp_file.txt");

    // create a vatiable to store the value

    int xp = 0;

    // pass the experience points to the variable

    read >> xp;

    cout << "\n\nData was loaded\n\n";

    // close the file

    read.close();

    // return the experience points

    return xp;
}

// main function

int main()
{

    // seed random with time

    srand(time(0));

    // create variable with base experience

    int exp = 120;

    cout << "You start with " << exp << " Experience Points.\n\n";

    // call function to gain experience points

    exp = gainExperience(exp, ((rand() % 16) + 5));

    // save experience points to filw

    recordExperienceData(exp);

    // load the saved experience points from the file to new variable

    int fileExp = getExperienceData();

    cout << "You now currently have " << fileExp << " Experience Points.\n";

    cout << "\n\t- End of code";

    return 0;
}