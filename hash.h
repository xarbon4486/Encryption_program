#include<iostream>
#include<string>
#include<random>
#include"splash.h"
using namespace std;
class encryptor
{
   string pass;
   int randval;
   int ascl =127,mid,var;
   char comnd;
   char key[2];
   int randgen()
   {
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<int> dist(0, 2);

    randval = dist(gen);
    return randval=0;
   }

   int randvalue=randgen();
 public:
 void menu()
 {  title();
    cout<<"Please Enter a command"<<endl;
    cout<<"-e for encryption"<<endl;
    cout<<"-d for decryption"<<endl;
    cin>>comnd;
    if(comnd=='e')
     {
        setedata();
     }
 else if(comnd=='d')
     {
       setddata();  
     }
else if(comnd!='e'||comnd!='d')
     {
        cout<<"Enter a valid command"<<endl;
     }
 }
 void setedata()                                                     // getting data from user
   {
      cout<<"enter your passcode "<<endl;
      cin>>pass;
      dsign();
   }
 
 void dsign()                                                     //processing and giving password a unique signature
   
{ 
  if(randvalue==0)
{
   pass.insert(0,"fur");
   pass.insert(pass.size(),"ina");
}

if(randvalue==1)
{
   pass.insert(0,"art");
   pass.insert(pass.size(),"hur");
}
if(randvalue==2)
{
   pass.insert(0,"gor");
   pass.insert(pass.size(),"don");
}
  metrono();
}

  void metrono()
{
  if(randval==0)
  {
    mid=pass.size()/2;
    pass.insert(pass.size()/2,"R");
    pass.insert(pass.size(),"E");
    //cout<<pass<<endl;
  }
  if(randval==1)
  {
    mid=pass.size()/2;
    pass.insert(pass.size()/2,"K");
    pass.insert(pass.size(),"D");
    //cout<<pass<<endl;
  }

  if(randval==2)
  {
    mid=pass.size()/2;
    pass.insert(pass.size()/2,"C");
    pass.insert(pass.size(),"P");
    //cout<<pass<<endl;
  }

   encrypt();
}

void encrypt()
{
    for (int i = 0; i < pass.size(); i++)
    {
        if (randvalue == 0)
        {
            pass[i] = (pass[i] + 3) % ascl;
        }
        else if (randvalue == 1)
        {
            pass[i] = (pass[i] + 5) % ascl;
        }
        else if (randvalue == 2)
        {
            pass[i] = (pass[i] + 7) % ascl;
        }
    }
    pass.insert(0,to_string(mid));
   
    //for furina
      if(mid<10&&randval==0)
    {
      pass.insert(0,"y");
    }

     if(mid>=10&&randval==0)
    {
      pass.insert(0,"g");
    }
   // for arthur
    if(mid<10&&randval==1)
    {
      pass.insert(0,"a");
    }
    if(mid>=10&&randval==1)
    {
      pass.insert(0,"v");
    }
   // for gordon
    if(mid<10&&randval==2)
    {
      pass.insert(0,"x");
    }
    if(mid>=10&&randval==2)
    {
      pass.insert(0,"e");
    }
    cout << "Encrypted: " << pass << endl;
    system("pause");
}

//Encryption ends here


void setddata()
{
    cout<<"Enter Encrypted password for decryption"<<endl;
    cin>>pass;
    getkey();
}
void getkey()
{
  //for furina
  if(pass[0]=='y')
  {
    var=stoi(pass.substr(1,1));
    key[0]=pass[var+2];
    key[1]=pass[pass.size()-1];
    //cout<<key[0]<<key[1];
  }

  if(pass[0]=='g')
  {
    var=stoi(pass.substr(1,2));
    key[0]=pass[var+3];
    key[1]=pass[pass.size()-1];
    //cout<<key[0]<<key[1];
  }
// for arthur
  if(pass[0]=='a')
  {
    var=stoi(pass.substr(1,1));
    key[0]=pass[var+1];
    key[1]=pass[pass.size()-1];
    //cout<<key[0]<<key[1];
  }

  if(pass[0]=='v')
  {
    var=stoi(pass.substr(1,2));
    key[0]=pass[var+4];
    key[1]=pass[pass.size()-1];
    //cout<<key[0]<<key[1];
  }
// for gordon
  if(pass[0]=='x')
  {
    var=stoi(pass.substr(1,1));
    key[0]=pass[var+1];
    key[1]=pass[pass.size()-1];
    //cout<<key[0]<<key[1];
  }

  if(pass[0]=='e')
  {
    var=stoi(pass.substr(1,2));
    key[0]=pass[var+4];
    key[1]=pass[pass.size()-1];
    //cout<<key[0]<<key[1];
  }


if(key[0]=='U' && key[1]=='H' || key[0]=='P' && key[1]== 'I' || key[0]=='J' && key[1]=='W')
{
  remo();
}

else
{
  cout<<"enter a valid encryption key"<<endl;
  system("pause");
}

}
void remo()
{
    //for val == 0
    if (key[0] == 'U' && key[1] == 'H')               //only this condition is working properly
    {
        if (pass[0] == 'y')
        {
            pass.erase(var + 2, 1);
            pass.erase(pass.size() - 1, 1);
            pass.erase(0, 5);
            pass.erase(pass.size() - 3, 3);
        }

        if (pass[0] == 'g')
        {
            pass.erase(var + 3, 1);
            pass.erase(pass.size() - 1, 1);
            pass.erase(0, 6);
            pass.erase(pass.size() - 3, 3);
        }
    }
    //FOR val == 1
    if (key[0] == 'P' && key[1] == 'I')                  //not giving proper output
    {
        if (pass[0] == 'a')
        {
            pass.erase(var + 2, 1);
            pass.erase(pass.size() - 1, 1);
            pass.erase(0, 5);
            pass.erase(pass.size() - 3, 3);
        }

        if (pass[0] == 'v')
        {
            pass.erase(var + 3, 1);
            pass.erase(pass.size() - 1, 1);
            pass.erase(0, 6);
            pass.erase(pass.size() -3, 3);
        }
    }
    //FOR val == 2
    if (key[0] == 'J' && key[1] == 'W')             //not giving proper output
    {
        if (pass[0] == 'x')
        {
            pass.erase(var + 2, 1);
            pass.erase(pass.size() - 1, 1);
            pass.erase(0, 5);
            pass.erase(pass.size() - 3, 3);
        }
        if (pass[0] == 'e')
        {
            pass.erase(var + 3, 1);
            pass.erase(pass.size() - 1, 1);
            pass.erase(0, 6);
            pass.erase(pass.size() - 3, 3);
        }
    }
    decrypt();
}

void decrypt()
{
    for (int i = 0; i < pass.size(); i++)
    {
        if (key[0]=='U' && key[1]=='H')
        {
            pass[i] = (pass[i] - 3 + ascl) % ascl;
        }
        else if (key[0]=='P' && key[1]=='I')
        {
            pass[i] = (pass[i] - 5 + ascl) % ascl;
        }
        else if (key[0]=='J' && key[1]=='W')
        {
            pass[i] = (pass[i] - 7 + ascl) % ascl;
        }
    }
    cout << "Decrypted: " << pass << endl;
     system("pause");
}
};
