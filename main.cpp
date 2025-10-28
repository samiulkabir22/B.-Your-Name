
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    bool non[num];
    for (int i = 0; i < num; i++)
    {
        int a;
        cin >> a;
        char b[2][a];
        // input names;

        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < a; k++)
            {
                cin >> b[j][k];
            }
        }

        // check names;

        int count = 0;
        for (int k = 0; k < a; k++)
        {
            for (int l = 0; l < a; l++)
            {
                if (b[0][k] == b[1][l])
                {
                    count++;
                    b[1][l] = 0;
                    break;
                }
            }
        }
        if (count == a)
        {
            non[i] = true;
        }
        else
        {
            non[i] = false;
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (non[i])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

