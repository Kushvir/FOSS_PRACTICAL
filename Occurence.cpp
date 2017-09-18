#include<iostream>
#include<conio.h>
using namespace std;
void Occurrences()
{
    int numers[10], count = 0, i;
    cout<<" \n Program to find occurences of a number in a set of 10 user defined numbers.";
    cout<<" \n Enter the elements below : ";
    for (i = 0; i < 10; i++)
    {
        cout<<" \n Enter Number : ";
        cin>> numers[i];
    }
    for (i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numers[i] == numers[j])
            {
                count++;
            }
        }
        cout<<numers[i] << " is Occur " << count << " Time in Array" << endl;
        count = 0;
    }
}
int main()
{
    Occurrences();
    return 0;
}
