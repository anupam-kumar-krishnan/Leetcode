int numtorom(char c)
{
    if (c == 'I')
        return 1;
    else if (c == 'V')
        return 5;
    else if (c == 'X')
        return 10;
    else if (c == 'L')
        return 50;
    else if (c == 'D')
        return 500;
    else if (c == 'C')
        return 100;
    else
        return 1000;
}

class Solution
{
public:
    int romanToInt(string s)
    {
        int N = s.size();
        int output = 0;
        for (int i = 0; i < N - 1; i++)
        {
            if (numtorom(s[i]) < numtorom(s[i + 1]))
                output -= numtorom(s[i]);
            else
                output += numtorom(s[i]);
        }
        output += numtorom(s[N - 1]);
        return output;
    }
};