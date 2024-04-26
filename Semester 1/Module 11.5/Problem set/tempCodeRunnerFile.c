    for (int i = 0; i < strlen(st); i++)
    {  
        alphabets[st[i]-97]++;
        printf("%c", st[i]);   
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] != 0)
        {
            printf("%c : %d\n", i+97, alphabets[i]);
        }
    }