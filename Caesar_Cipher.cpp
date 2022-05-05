#include <iostream>
#include <string>

//CAESAR CIPHER
//USING ASCII TABLE

using namespace std;

string encrypt(string, int);

int main()
{
    string word;
    int howMuch;

    cout<<"*****************************"<<endl;
    cout<<"CAESAR CIPHER FOR BIG LETTERS"<<endl;

    cout<<endl;

    cout<<"Word: "<<endl;
    cin>>word;

    cout<<"How much: "<<endl;
    cin>>howMuch;

    cout<<endl;

    cout<<"Encrypted word: "<<encrypt(word, howMuch)<<endl;

    system("PAUSE");
    return 0;
}


//ENCRYPTING FUNCTION

string encrypt(string word, int howMuch)
{
    int t;

    for(int i = 0; i < word.length(); i++)
    {
        t = word[i] + howMuch;
        //BLOCKADE ASCII TABLE
        if(t < 'A')
            word[i] +=( 26 + howMuch);//26 EQUAL TO AMOUNT LETTERS FROM A TO Z
        else if (t > 'Z')
            word[i] -= (26 - howMuch);
        else
            word[i] += howMuch;
    }

    return word;
}


