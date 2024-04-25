#define __null '\0'
void utol(char *ptr)
{
    while (*ptr != __null)
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr += 'a' - 'A'; // *ptr = char( *ptr + ('a'-'A'));
            ptr++;
        }
        else
        {
            ptr++;
        }
    }
}
