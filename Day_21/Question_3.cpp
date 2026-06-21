#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int vowel = 0, consonant = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    cout << "Vowels = " << vowel << endl;
    cout << "Consonants = " << consonant << endl;

    return 0;
}
