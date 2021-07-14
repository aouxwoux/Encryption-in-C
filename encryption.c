#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int checker(string c);
int main(int argc, string argv[])
{

    int la=0;
    int tempnum=0;
    if(argc==2)
    {
        if(checker(argv[1])==1)
        {
            char alphabets[26]={};
            for(int a=97,z=123,l=0;a<z;a++,l++)
            {
                alphabets[l]=(char)a;
            }
            string key=argv[1];
            string text=get_string("Text: \n");
            printf("ciphertext: ");
            for(int a=0;a<strlen(text);a++)
            {
                if(isalpha(text[a])!=1)
                {
                    
                for(int a2=0;a2<strlen(alphabets);a2++)
                {
                    if((tolower(text[a])==(tolower(alphabets[a2]))))
                 {
                        tempnum=a2;
                        char refinedKey=key[tempnum];
                        char idk=text[a];
                        if(islower(idk)==false)
                        {
                            if(a==(strlen(text)-1))
                            {
                                printf("%c\n",toupper(refinedKey));
                            }
                            else
                            {
                                printf("%c",toupper(refinedKey));
                            }
                            
                        }
                        else if(isupper(idk)==false)
                        {
                            if(a==(strlen(text)-1))
                            {
                                printf("%c\n",tolower(refinedKey));
                            }
                            else
                            {
                                printf("%c",tolower(refinedKey));
                            }
                            
                        }
                            
                        }
                if(isalpha(text[a])==0)
                {
                     printf("%c",text[a]);
                 }
                      
                 }
                    
                }
             }
            
                
            }
            else
          {
            return 1;
          }
        }
  else
    {
        return 1;
    }
}
int checker(string c)
{
    if(strlen(c)==26)
    {
        for(int i=0;i<strlen(c);i++)
        {
            if(isalpha(c[i])==false)
            {
                printf("Key must only contain alphabets.");
                return 0;
            }
            for(int i2=0;i2<strlen(c);i2++)
            {
                if(c[i]==c[i2])
                {
                    if(i==i2)
                    {
                        continue;
                    }
                    printf("Key must not contain repeated characters.");
                    return 0;
                }
            }
        }
    }
    else
    {
        printf("Key must contain 26 characters.");
        return 0;
    }
    return 1;
}
