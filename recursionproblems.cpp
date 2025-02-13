
#include <iostream>
using namespace std;

void tower_of_hanoi(int n, string src, string help, string des)
{

    if (n == 1)
    {
        cout << "transfer disk " << " " << n << "from " << " " << src << "to" << des << endl;
        return;
    }

    tower_of_hanoi(n - 1, src, des, help);

    cout << " " << "transfer disk " << " " << n << " " << "from " << " " << src << " " << "to" << " " << des << " " << endl;

    tower_of_hanoi(n - 1, help, src, des);
}

void string_reverse(string str, int index)
{

    if (index == 0)
    {
        cout << str[index];

        return;
    }

    cout << str[index];
    string_reverse(str, index - 1);
}

void find_occurance(string str, char element, int index)
{

    int static first = -1; // int static in order to not let change the value of the first / last!
    int static last = -1;

    if (index == str.length())
    {
        cout << first << " " << last << endl;

        return;
    }

    char current_char = str[index];

    if (current_char == element)
    {

        if (first == -1)
        {
            first = index;
        }
        else
            last = index;
    }

    find_occurance(str, element, index + 1);
}

bool isSorted(int arr[], int index, int length)
{

    if (index == length - 1)
    {

        return true;
    }

    if (arr[index] >= arr[index + 1])
    {

        // array unsorted till now
        return false;
    }

    return isSorted(arr, index + 1, length);
}

void moveallx(string str, int index, int count, string newstring)
{

    if (index == str.length() - 1)
    {
        for (int i = 0; i < count; i++)
        {

            newstring += 'x';
        }
        cout << newstring;

        return;
    }

    char currentchar = str[index];

    if (currentchar == 'x')
    {

        count++;
        moveallx(str, index + 1, count, newstring);
    }

    else
    {
        newstring += currentchar;
        moveallx(str, index + 1, count, newstring);
    }
}




int main()
{

    // tower_of_hanoi(2,"S","H","D");
    string s = "uzairaaa";
    // string_reverse(s, s.length() - 1);
    find_occurance(s, 'a', 0);
    // int arr[] = {1, 2, 3, 4};
    // int length = sizeof(arr) / sizeof(arr[0]);

    // cout << isSorted(arr, 0, length);

    // string str = "axbcxxxd";
    // moveallx(str, 0, 0, "");
}
