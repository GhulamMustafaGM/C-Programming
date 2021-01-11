// Sorted string

/*

Finally, you got program that sort string for you.
You can write string in the single or separate lines.

Instructions:

1) Write number of lines;
2) Enter strings, line by line;
3) Waite for output.

Examples:

#1//
Enter->

2
465
312

You will get->

Program stored data:
465 312<-end flag  

Bubble sorted data:
123456<-end flag 

Result of research for the MOST repeated letters.
Entered sentence did not contain any most or less repeated letters.
All letters repeated 1 times each.

#2//
Enter->

2
sdfn9j2 d3
312 d23d 6

You will get->

Program stored data:
sdfn9j2 d3 312 d23d 6<-end flag  

Bubble sorted data:
122233369ddddfjns<-end flag 

Result of research for the MOST repeated letters.
Entered sentence contain letter 'd', that repeated 4 times.

Result of research for the LESS repeated letters.
Entered sentence contain letter '1', '6', '9', 'f', 'j', 'n', 's',
that's repeated 1 times each.

*/

#include <iostream>

#include <cstring>

#include <string>

using namespace std;

class Sorted

{

    //Size and contains of original, sorted arrays a kept private.
private:
    // Declaring (int)lines - container of lines quantity
    // and (string)input - container of original sentence,
    // (int)size would be size of this sentence.
    int lines = 0, size = 0;
    string input;
    // Declaring (int)pure - container of quantity items
    // in the sorted array after removing all 'space' signs
    // (char)*bubble - pointer for this array.
    int pure = 0;
    char *bubble = new char[100];
    // Declaring of the array (int)repeat[100] with maximum
    // 100-places for items from sorted array,
    // (int)MAX - container of maximum times all letters repeats,
    // (int)qty - container of quantity unique most repeated letters.
    // (string)letters - container of most repeated letters.
    int repeat[100] = {0}, MAX = 0, qty = 0;
    string letters;
    // (int)MIN - container of minimum times all letters repeats,
    // (int)uni - container of quantity unique less repeated letters.
    // (string)unilet - container of less repeated letters.
    int MIN = 0, uni = 0;
    string unilet;

    //In the main program accessible next methods:
public:
    // Temporary string container
    string tempo;

    //Ask user about oirignal array
    char setData()
    {
        // You enter quantity of lines here
        //cout<<"\nEnter quantity of lines: ";
        cin >> lines;

        // Sentence for research line-by-line you enter here
        //cout<<"\nEnter your sentence: "<<endl;

        // Every new line will be stored by adding 'space' sign,
        // without adding 'space' sign we no longer can classify
        // every new line after. Other 'spaces' will be saved.
        for (int i = 0; i <= lines; ++i)
        {
            getline(cin, tempo);
            if (i > 1)
                input += " ";
            input += tempo;
        }
        // Seting size of orginal sentence
        size = input.size();
    }

    // Method for getting original input sentence
    char getData(int i) { return input[i]; }

    // Method for getting quantity of repeats of sorted items
    int getRepeat(int i) { return repeat[i]; }

    // Method that copy data from store with removing spaces
    void copyPurePast()
    {
        // Temporary used variable counter of *bubble items array
        int j = 0;
        for (int i = 0; i < size; ++i)
        {
            // In the ANSI c/c++ table for sign 'space'
            // correspond integer code 32.
            // If find (int)32 than you find 'space'.
            if ((int)(getData(i)) == 32)
                continue;
            else
            {
                *(bubble + j) = getData(i);
                ++j;
            }
        }
        // Seting size of "pure" entered array
        pure = j;
    }

    // Method wich calculate every time when item from sorted array
    // appear in this array. For items finds only once there
    // would be repeat[i]=1, etc.
    void setRepeat()
    {
        for (int i = 0; i < pure; ++i)
            for (int j = 0; j < pure; ++j)
                // It's simple: find equal letter add 1.
                if ((int)(*(bubble + j)) == (int)(*(bubble + i)))
                    ++repeat[i];
    }

    //Apply method for bubble sorting
    void sortDataBubble()
    {
        // Before sorting array let's remove any 'space' signs from it
        copyPurePast();

        // Temporary used variables for item and size of researched arrays
        char temp = 0;
        int N = pure;

        // Simple bubble algorithm for data sorting in the array
        while (--N > 0)
        {
            for (int i = 1; i <= N; ++i)
                // Every item with bigger integer ANSI code will
                // flow to the up in the array like bubble.
                if ((int)(*(bubble + i - 1)) > (int)(*(bubble + i)))
                {
                    temp = *(bubble + i);
                    *(bubble + i) = *(bubble + i - 1);
                    *(bubble + i - 1) = temp;
                }
        }
    }

    // Method that find unique repeated letters and calculate
    // each time when they repeated.
    void calcRepeat()
    {
        // Calling member funcion for calculation of repeats for each letter
        // in the sorted array
        setRepeat();

        // Searching for maximum repeatings in the sorted array
        // ammount of repeats not get straight, but from member function
        for (int i = 0; i < pure; ++i)
            if (getRepeat(i) > MAX)
                MAX = getRepeat(i);

        // At first minimum set to size MAX
        MIN = MAX;

        // Searching for minimum repeatings in the sorted array
        // ammount of repeats not get straight, but from member function
        for (int i = 0; i < pure; ++i)
            if (getRepeat(i) < MIN)
                MIN = getRepeat(i);

        // Searching for all letters that repeats the most,
        // if there would be any. Cicle consider that in the
        // sorted array can be only one letter that
        // repeats all the time, or can be multiple letters
        // thats repeats equal times each.
        for (int i = 0; i < pure;)
        {
            // We whant to be shure if this letter is the most repeated
            if (getRepeat(i) == MAX)
            {
                // Let's calculate each time when we store
                // any most repeated letter
                ++qty;
                tempo = *(bubble + i);
                // For output word also provided
                // guards '' - for not mistake founded
                // letters with printed text.
                letters += " '" + tempo + "',";
            }

            // We whant to be shure if this letter is the less repeated
            if (getRepeat(i) == MIN)
            {
                // Let's calculate each time when we store
                // any less repeated letter
                ++uni;
                tempo = *(bubble + i);
                // For output word also provided
                // guards '' - for not mistake founded
                // letters with printed text.
                unilet += " '" + tempo + "',";
            }

            // Input array is sorted now in the *(bubble)
            // so if increase step 'i' by repeat[i] it will get us
            // to the next not researched yet number
            i += getRepeat(i);
        }
    }

    // Method get values of MAX, MIN, qty and uni for main()
    void getPoints(int &a, int &b, int &c, int &d)
    {
        a = MAX;
        b = MIN;
        c = qty;
        d = uni;
    }

    // Print stored or sorted data
    void printData(int x)
    {
        // For entered '1' printed original sentence.
        if (x == 1)
        {
            cout << "\nProgram stored data:" << endl;
            cout << input;
        }
        // For entered '2' printed sorted data.
        if (x == 2)
        {
            cout << "\nBubble sorted data:" << endl;
            for (int i = 0; i < pure; ++i)
                cout << (char)(*(bubble + i));
        }
        // Every output provides with end flag. With end flag we shure where
        // result is ends. If entered sentence got 'spaces' in the end
        // they will be printed.
        cout << "<-end flag" << endl;
    }

    // Print result of search for repeatings
    void printRepeat(int M, int Q, int &x)
    {
        // Mode '1' printed MOST repeated.
        // Mode '2' printed LESS repeated.
        // Here printed result for sentences with only one letter that
        // multiple times or multiple letters, which repeats equal times.
        // By operator && x and further --x; we shure that if we already
        // print this result - we do not print it in the future.
        if (((Q * M) == pure) && x)
        {
            cout << "\nResult of research for the repeated letters.";
            // Only one letter.
            if (Q == 1)
            {
                cout << "\nEntered sentence contains ";
                cout << "only one letter" << letters;
                cout << " that repeated " << M << " times.";
                cout << endl;
            }
            // Multiple letters.
            if (Q > 1)
            {
                cout << "\nEntered sentence did not contain";
                cout << " any most or less repeated letters.";
                cout << "\nAll letters repeated " << M << " times each.";
                cout << endl;
            }
            --x; // We no longer can print this result
        }

        // Here printed result for sentences with only one or multiple
        // letters which multiple times, but other letters repeated less.
        if ((Q * M) < pure && x)
        {
            if (x == 1)
                cout << "\nResult of research for the MOST repeated letters.";
            if (x == 2)
                cout << "\nResult of research for the LESS repeated letters.";
            // Only one letter.
            if (Q == 1)
            {
                cout << "\nEntered sentence contain letter";
                if (x == 1)
                    cout << letters;
                if (x == 2)
                    cout << unilet;
                cout << " that repeated " << M << " times." << endl;
            }
            // Multiple letters.
            if (Q > 1)
            {
                cout << "\nEntered sentence contain letters";
                if (x == 1)
                    cout << letters;
                if (x == 2)
                    cout << unilet;
                cout << " that's repeated " << M << " times each." << endl;
            }
            ++x; // We can print reslt for less numbers in the future
        }
    }
};

int main()

{

    // Class for sorting strings constructed
    Sorted call;

    // Some main() variables, which will be helpfull next
    int MAX = 0, MIN = 0, qty = 0, uni = 0;

    // Ask user for initial sentence
    call.setData();

    // Actual sorting
    call.sortDataBubble();

    // Looking for repeatings
    call.calcRepeat();

    // Asking for result to manipulate with method printRepeat() next
    call.getPoints(MAX, MIN, qty, uni);

    // Print initial input
    call.printData(1);

    // Print sorted string
    call.printData(2);

    // Set initial printing mode for MOST repeated letters
    int x = 1;
    call.printRepeat(MAX, qty, x);

    // If printRepeat() allow we will get result for LESS repeated letters
    call.printRepeat(MIN, uni, x);

    return 0;
}
