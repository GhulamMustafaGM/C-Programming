
// Decimal to Binary (Bitset approach)

#include <iostream>
#include <bitset>
//using namespace std;

///this is a range based conversion code which can convert decimals to binary only within a range of 0-1023.

class std_bits
{

public:
    std_bits(int v)
    {

        bits.reset();
        start_bits(v);
    }
    void _512Bit_position()
    {
        bits.set(9);
    }
    void _256Bit_position()
    {
        bits.set(8);
    }
    void _128Bit_position()
    {
        bits.set(7);
    }
    void _64Bit_Position()
    {
        bits.set(6);
    }
    void _32Bit_Position()
    {
        bits.set(5);
    }
    void _16Bit_Position()
    {
        bits.set(4);
    }
    void _8Bit_Position()
    {
        bits.set(3);
    }
    void _4Bit_Position()
    {
        bits.set(2);
    }
    void _2Bit_Position()
    {
        bits.set(1);
    }
    void _1Bit_Position()
    {
        bits.set(0);
    }

    void start_bits(int v)
    {
        if (v >= 512 && v < 1024)
        {
            _512Bit_position();
            start_bits(v - 512);
        }
        if (v >= 256)
        {
            _256Bit_position();
            start_bits(v - 256);
        }
        else if (v >= 128)
        {
            _128Bit_position();
            start_bits(v - 128);
        }
        else if (v >= 64)
        {
            _64Bit_Position();
            start_bits(v - 64);
        }
        else if (v >= 32)
        {
            _32Bit_Position();
            start_bits(v - 32);
        }
        else if (v >= 16)
        {
            _16Bit_Position();
            start_bits(v - 16);
        }
        else if (v >= 8)
        {
            _8Bit_Position();
            start_bits(v - 8);
        }
        else if (v >= 4)
        {
            _4Bit_Position();
            start_bits(v - 4);
        }
        else if (v >= 2)
        {
            _2Bit_Position();
            start_bits(v - 2);
        }
        else if (v == 1)
        {
            _1Bit_Position();
        }
        else if (v == 0)
            ;
    }
    void Binify() const
    {

        std::cout << "Binary: " << bits.to_string() << '\n';
    }

private:
    std::bitset<sizeof(int) * 8> bits;
};

int main()
{

    int dec;

    std::cin >> dec;
    std::cout << "Decimal: " << dec << '\n';

    std_bits new_dec(dec);
    new_dec.Binify();
}