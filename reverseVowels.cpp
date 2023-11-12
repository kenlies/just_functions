#include <string.h>
#include <string>

string reverseVowels(std::string s) {
    
    char *vows = "aeiouAEIOU";
    char h1 = '\0';
    char h2 = '\0';

    int i = 0;
    while (i < s.size() - 1 )
    {
        if (strchr(vows, s[i]))
        {
            h1 = s[i];
            int j = 1;
            for (; !strchr(vows, s[i + j]) && i + j < s.size(); j++);
            if (i + j == s.size())
                break ;
            h2 = s[i + j];
            s[i++] = h2;
            while (s[i] != h2)
                i++;
            s[i] = h1;
            continue ;
        }
        i++;
    }
    return s;
}
