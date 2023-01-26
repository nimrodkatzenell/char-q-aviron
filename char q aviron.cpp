#include <iostream>
#include <string.h>
using namespace std;
char* sameLetters(char s1[], char s2[]);
int main()
{
    char a[] = "cassdc";
    char b[] = "cdsqac";
    char* c = sameLetters(a, b);
    cout << c;
}
char* sameLetters(char s1[], char s2[])
{
    int size;
    if (strlen(s1) > strlen(s2))
    {
        size = strlen(s1);
    }
    else
    {
        size = strlen(s2);
    }
    char* temp = new char[size];
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        bool flag = true;

        for (int j = i; j < size; j++)
        {

            if (s1[i] == s2[j])
            {
                for (int k = 0; k < count; k++)
                {
                    if (temp[k] == s1[i])
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    temp[count] = s1[i];
                    count++;
                }
            }

        }
    }
    temp[count] = '\0';
    return temp;



}