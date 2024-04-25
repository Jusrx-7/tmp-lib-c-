#define __null '\0'
void utol(char *ptr)
{
    /* Explaining utol() upper to lower
     * char *ptr = msg // making poiter point to msg[0]
     * then check if msg[0] comes between A-Z you can use (int)char(A) for knowing the number of A and the same for Z
     * and checking if (int)(msg[0] || *ptr ) comes between (int)char(A) and (int)char(Z)
     * After Checking i searching in ascci table using
     * (int)char('A') - (int)char('a') and it was 32
     * so i used this 32 and adding it into any number comes between A-Z and this will make it From A-Z to a-z
     */
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
