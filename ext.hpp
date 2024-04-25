void extu(char *str)
{
    short siz_str = 0;
    while (true)
    {
        if (str[siz_str] == '\0')
        {
            break;
        }
        else
        {
            siz_str++;
        }
    }
    char buffer[siz_str];
    char *ptr = buffer;
    short a = 0;
    while (str[a] != '\0')
    {

        if ((int)str[a] >= 'A' && (int)str[a] <= 'Z')
        {
            *ptr = str[a];
            ptr++;
            a++;
        }
        else
        {
            a++;
        }
    }
    std::cout << buffer << std::endl;
}
void extl(char *str)
{
    short siz_str = 0;
    while (true)
    {
        if (str[siz_str] == '\0')
        {
            break;
        }
        else
        {
            siz_str++;
        }
    }
    char buffer[siz_str];
    char *ptr = buffer;
    short a = 0;
    while (str[a] != '\0')
    {

        if ((int)str[a] >= 'a' && (int)str[a] <= 'z')
        {
            *ptr = str[a];
            ptr++;
            a++;
        }
        else
        {
            a++;
        }
    }
    std::cout << buffer << std::endl;
}
