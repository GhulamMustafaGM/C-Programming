// Or Neural network

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

class Nueral_Network
{
public:
    int I1, I2, T = 0, N = 2;
    //2 Inputs, Threshold, Layers
    float w1 = 1, w2 = 1, X;
    //2 Weights, Weighted Sum of Inputs

    Nueral_Network()
    {
    }

    float think(float I1, float I2)
    {
        float arr[2][2] = {{I1, this->w1}, {I2, this->w2}};

        float A = arr[0][0] * arr[0][1];
        float B = arr[1][0] * arr[1][1];
        this->X = A + B;
        return X;
    }
    float sigmoid(float x)
    {
        x = this->X;
        x = 1 / (1 + exp(-x));
        return x;
    }
    float output()
    {
        float x = this->X, t = this->T;
        float output = sigmoid(x - t);
        return output;
    }
};

int main()
{

    // OR Neural Network
    // No hidden layer

    Nueral_Network n;
    float input1 = 1;
    float input2 = 0;

    cout << "\nYour Inputs: [ " << input1 << " , " << input2 << " ]\n\n";

    n.think(input1, input2);
    cout << "NN Output: [ " << n.output() << " ]";

    cout << "\n\nValues 0.5 and below are considered 0 while all above are 1\n\n";

    cout << "[ 0, 0 ] = ";
    n.think(0, 0);
    cout << "[ " << n.output() << " ]";

    cout << "\n[ 1, 0 ] = ";
    n.think(1, 0);
    cout << "[ " << n.output() << " ]";

    cout << "\n[ 0, 1 ] = ";
    n.think(0, 1);
    cout << "[ " << n.output() << " ]";

    cout << "\n[ 1, 1 ] = ";
    n.think(1, 1);
    cout << "[ " << n.output() << " ]";

    return 0;
}
