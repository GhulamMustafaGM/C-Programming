// Base trainer game

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

DWORD ProcID;
LPCSTR GameClass = "Valve001";
string GameName = "CS:GO";
string GameState;

bool Trainer = true;
bool KeyPress = true;

/*Trigger*/
string TriggerState = "OFF";
int TriggerStateValue = 0;
DWORD TriggerAdd[] = {0x0};
DWORD TriggerOff[] = {0x0, 0x0, 0x0};
/********/

/*Aim*/
string AimState = "OFF";
int AimStateValue = 0;
DWORD AimAdd[] = {0x0};
DWORD AimOff[] = {0x0, 0x0, 0x0};
/********/

int main()
{

    while (Trainer)
    {

        HWND hwnd = FindWindow(GameClass, NULL);
        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcID);
        GetWindowThreadProcessId(hwnd, &ProcID);

        if (hwnd == NULL)
        {
            GameState = "CLASS NOT FOUND !";
        }
        else if (ProcID == NULL)
        {
            GameState = "PROCID NOT FOUND !";
        }
        else if (hwnd && ProcID)
        {
            GameState = "FOUND !";
        }
        else
        {
            GameState = "UNKNOW ERROR !";
        }

        Trainer = false;
        KeyPress = true;

        system("CLS");

        cout << "====[Disrespect Trainer For " << GameName << "]====" << endl
             << endl;
        cout << "{Game State : " << GameName << " " << GameState << "}" << endl
             << endl;
        cout << "[F1] Trigger -> " << TriggerState << " <-" << endl;
        cout << "[F2] Aim -> " << AimState << " <-" << endl
             << endl;
        cout << "=======================================" << endl
             << endl;

        while (KeyPress && hwnd && ProcID)
        {

            if (GetAsyncKeyState(VK_F1))
            {
                if (TriggerStateValue == 0)
                {
                    TriggerState = "ON";
                    TriggerStateValue = 1;
                    KeyPress = false;
                    Trainer = true;
                    Sleep(200);
                }
                else
                {
                    TriggerState = "OFF";
                    TriggerStateValue = 0;
                    KeyPress = false;
                    Trainer = true;
                    Sleep(200);
                }
            }
            if (GetAsyncKeyState(VK_F2))
            {
                if (AimStateValue == 0)
                {
                    AimState = "ON";
                    AimStateValue = 1;
                    KeyPress = false;
                    Trainer = true;
                    Sleep(200);
                }
                else
                {
                    AimState = "OFF";
                    AimStateValue = 0;
                    KeyPress = false;
                    Trainer = true;
                    Sleep(200);
                }
            }

            if (TriggerStateValue == 1)
            {
                //Mem Read / Write
            }
            if (AimStateValue == 1)
            {
                //Mem Read / Write
            }
        }

        if (hwnd == NULL)
        {
            cout << "[Please start " << GameName << " before the trainer] - [ENTER] to restart." << endl;
            getchar();
            Trainer = true;
        }
        else if (ProcID == NULL)
        {
            cout << "[Program critical ERROR] - [ENTER] to exit." << endl;
            getchar();
            exit(-1);
        }
    }
}