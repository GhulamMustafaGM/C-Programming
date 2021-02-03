// Server hardware

#include <iostream>
#include <string>
#include <bitset>           //std::bitset
#include <windows.h>        //class SYSTEM_INFO and some functions
#include <VersionHelpers.h> //IsWindowsServer()

//Processor architecture constants
#define PROCESSOR_AMD64 9
#define PROCESSOR_ARM 5
#define PROCESSOR_ARM64 12
#define PROCESSOR_IA64 6
#define PROCESSOR_INTEL 0
#define PROCESSOR_UNKNOWN 0xffff

using std::cout;
using std::endl;
using std::string;

//get informations from windows.h
void printUserData();
void printHardwareOverview();

//get informations from CPUID registers
void getData(int code, unsigned int (&regs)[4]);
void printVendorID(unsigned int (&regs)[4]);
void printProcessorDetails(unsigned int (&regs)[4]);

int main()
{
    unsigned int regs[4];

    //<windows.h> part
    printUserData();
    printHardwareOverview();

    //asm part
    printVendorID(regs);
    printProcessorDetails(regs);

    return 0;
}

//Basic informations about the system
void printUserData()
{
    DWORD nLen;
    char computerName[255];
    nLen = sizeof(computerName);
    GetComputerName(computerName, &nLen);

    char userName[255];
    nLen = sizeof(userName);
    GetUserName(userName, &nLen);

    char winPath[MAX_PATH];
    GetWindowsDirectory(winPath, sizeof(winPath));

    cout << "Computer Name: "
         << computerName << endl;
    cout << "User Name: "
         << userName << endl;
    cout << "OS-Directory: "
         << winPath << endl;
}

//Brief overview about the hardware
void printHardwareOverview()
{
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);

    string architecture;
    switch (sysInfo.wProcessorArchitecture)
    {
    case PROCESSOR_AMD64:
        architecture = "x64 (AMD or Intel)";
        break;

    case PROCESSOR_ARM:
        architecture = "ARM";
        break;

    case PROCESSOR_ARM64:
        architecture = "ARM64";
        break;

    case PROCESSOR_IA64:
        architecture = "Intel Itanium-based";
        break;

    case PROCESSOR_INTEL:
        architecture = "x86";
        break;

    case PROCESSOR_UNKNOWN:
        architecture = "Unknown architecture";
        break;
    }

    cout << endl;

    if (IsWindowsServer())
    {
        cout << "Server ";
    }
    cout << "Hardware: " << endl;

    cout << "Processor Architecture: "
         << architecture << endl;
    cout << "Processor Revision: "
         << sysInfo.wProcessorRevision
         << endl;
    cout << "Number of Processors: "
         << sysInfo.dwNumberOfProcessors
         << endl;
    cout << "Processor Level: "
         << sysInfo.wProcessorLevel
         << endl;
    cout << "Page size: "
         << sysInfo.dwPageSize << endl;
    cout << "Active Processor Mask: "
         << sysInfo.dwActiveProcessorMask
         << endl;
}

//used to read the CPUID registers
//code: address of data needed
//regs: array with register data
void getData(int code,
             unsigned int (&regs)[4])
{

    __asm__ __volatile__(
        /* save %rbx */
        "pushq %%rbx\n\t"
        "cpuid\n\t"
        /* write the result into output*/
        "movl %%ebx ,%[ebx]\n\t"
        "popq %%rbx \n\t"
        : "=a"(regs[0]), [ebx] "=r"(regs[1]),
          "=c"(regs[2]),
          "=d"(regs[3])
        : "a"(code));
}

void printVendorID(unsigned int (&regs)[4])
{
    /************************  
 * The vendor ID is a   *
 * 12-character string  *
 * stored in registers  *
 * EBX, EDX, ECX        *
 * (in this order)      *
 ************************/

    string vendor;

    //update register data for code 0
    getData(0, regs);

    //EBX
    for (int i = 4; i < 8; i++)
    {
        vendor += ((char *)regs)[i];
    }

    //EDX
    for (int i = 12; i < 16; i++)
    {
        vendor += ((char *)regs)[i];
    }

    //ECX
    for (int i = 8; i < 12; i++)
    {
        vendor += ((char *)regs)[i];
    }

    cout << "\n---------------\n";
    cout << vendor << endl;
    cout << "---------------\n";
}

//Processor model and features
void printProcessorDetails(unsigned int (&regs)[4])
{
    // extended model description is saved in EAX, EBX, ECX, EDX of [0x80000002 - 0x80000004]
    string model = "";
    int address = 0x80000002;

    while (address < 0x80000005)
    {
        getData(address++, regs);
        for (int i = 0; i < 16; i++)
        {
            model += ((char *)regs)[i];
        }
    }
    cout << model << endl;

    //cpu flags
    getData(1, regs);
    string binary;
    int idx = 0;

    //EDX:
    binary = std::bitset<32>(regs[3]).to_string();

    cout << "Onboard x87 FPU: "
         << binary[idx++] << endl;
    cout << "Virtual 8086 mode extensions: "
         << binary[idx++] << endl;
    cout << "Debugging extensions: "
         << binary[idx++] << endl;
    cout << "Page Size Extension: "
         << binary[idx++] << endl;

    cout << "Time Stamp Counter: "
         << binary[idx++] << endl;
    cout << "Model-specific registers: "
         << binary[idx++] << endl;
    cout << "Physical Address Extension: "
         << binary[idx++] << endl;
    cout << "Machine Check Exception: "
         << binary[idx++] << endl;

    cout << "CMPXCHG8 (compare-and-swap): "
         << binary[idx++] << endl;
    cout << "Onboard Advanced Programmable"
         << "Interrupt Controller: "
         << binary[idx++] << endl;
    cout << "(reserved)"
         << binary[idx++] << endl;
    cout << "SYSENTER/SYSEXIT instructions: "
         << binary[idx++] << endl;

    cout << "Memory Type Range Registers: "
         << binary[idx++] << endl;
    cout << "Page Global Enable bit in CR4: "
         << binary[idx++] << endl;
    cout << "Machine check architecture: "
         << binary[idx++] << endl;
    cout << "Conditional move and "
         << "FCMOV instructions: "
         << binary[idx++] << endl;

    cout << "Page Attribute Table: "
         << binary[idx++] << endl;
    cout << "36-bit page size extension: "
         << binary[idx++] << endl;
    cout << "Processor Serial Number: "
         << binary[idx++] << endl;
    cout << "CLFLUSH instruction (SSE2): "
         << binary[idx++] << endl;

    cout << "(reserved): "
         << binary[idx++] << endl;
    cout << "Debug store: "
         << "save trace of executed jumps: "
         << binary[idx++] << endl;
    cout << "Onboard thermal control "
         << "MSRs for ACPI: "
         << binary[idx++] << endl;
    cout << "MMX instructions: "
         << binary[idx++] << endl;

    cout << "FXSAVE, FXRESTOR instructions,"
         << " CR4 bit 9: "
         << binary[idx++] << endl;
    cout << "SSE instructions : "
         << binary[idx++] << endl;
    cout << "SSE2 instructions: "
         << binary[idx++] << endl;
    cout << "CPU cache supports self-snoop: "
         << binary[idx++] << endl;

    cout << "Hyper-threading: "
         << binary[idx++] << endl;
    cout << "Thermal monitor automatically"
         << " limits temperature: "
         << binary[idx++] << endl;
    cout << "IA64 processor emulating x86: "
         << binary[idx++] << endl;
    cout << "Pending Break Enable: "
         << binary[idx++] << endl;

    //ECX:
    idx = 0;
    binary = std::bitset<32>(regs[2]).to_string();
    cout << "Prescott New Instructions-SSE3: "
         << binary[idx++] << endl;
    cout << "PCLMULQDQ support: "
         << binary[idx++] << endl;
    cout << "64-bit debug store : "
         << binary[idx++] << endl;
    cout << "MONITOR and MWAIT instructions: "
         << binary[idx++] << endl;
    cout << "CPL qualified debug store: "
         << binary[idx++] << endl;
    cout << "Virtual Machine eXtensions: "
         << binary[idx++] << endl;
    cout << "Safer Mode Extensions : "
         << binary[idx++] << endl;
    cout << "Enhanced SpeedStep: "
         << binary[idx++] << endl;
    cout << "Thermal Monitor 2: "
         << binary[idx++] << endl;
    cout << "Supplemental SSE3 instructions: "
         << binary[idx++] << endl;
    cout << "L1 Context ID: "
         << binary[idx++] << endl;
    cout << "Silicon Debug interface: "
         << binary[idx++] << endl;
    cout << "Fused multiply-add (FMA3): "
         << binary[idx++] << endl;
    cout << "CMPXCHG16B instruction: "
         << binary[idx++] << endl;
    cout << "Can disable sending task "
         << "priority messages: "
         << binary[idx++] << endl;
    cout << "Perfmon & debug capability: "
         << binary[idx++] << endl;
    cout << "(reserved): "
         << binary[idx++] << endl;
    cout << "Process context identifiers: "
         << binary[idx++] << endl;
    cout << "Direct cache access "
         << "for DMA writes: "
         << binary[idx++] << endl;
    cout << "SSE4.1 instructions: "
         << binary[idx++] << endl;
    cout << "SSE4.2 instructions: "
         << binary[idx++] << endl;
    cout << "x2APIC support: "
         << binary[idx++] << endl;
    cout << "MOVBE instruction: "
         << binary[idx++] << endl;
    cout << "POPCNT instruction: "
         << binary[idx++] << endl;
    cout << "APIC supports one-shot operation"
         << " using a TSC deadline value: "
         << binary[idx++] << endl;
    cout << "AES instruction set: "
         << binary[idx++] << endl;
    cout << "XSAVE, XRESTOR, XSETBV, XGETBV: "
         << binary[idx++] << endl;
    cout << "XSAVE enabled by OS: "
         << binary[idx++] << endl;
    cout << "Advanced Vector Extensions: "
         << binary[idx++] << endl;
    cout << "F16C(half-precision)FP support: "
         << binary[idx++] << endl;
    cout << "RDRAND (on-chip random "
         << "number generator): "
         << binary[idx++] << endl;
    cout << "Running on a hypervisor: "
         << binary[idx++] << endl;
}

/* output 

*/

// Deficient numbers

#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
void calculate(unsigned long x)
{
    if (!x)
        return;

    ull sum = 0;
    vector<ull> factors;
    cout << "Factors of " << x << " is ";
    for (ull i = 1; i <= x; ++i)
        if (x % i == 0)
        {
            sum += i;
            cout << i << ", ";
            factors.push_back(i);
        }
    bool f = sum < x << 1;

    cout << "\nSum is ";
    for (ull i : factors)
        cout << i << (i == x ? " = " : " + ");

    cout << sum << ' ' << (f ? '<' : sum > x << 1 ? '>'
                                                  : '=')
         << " 2 * " << x << '\n'
         << x << (f ? " is" : " isn\'t") << " a deficient number.\n"
         << endl;
}
int main()
{
    for (ull x = 0; x < 99; ++x)
        calculate(x);
}