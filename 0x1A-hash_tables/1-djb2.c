/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to be hashed.
 *
 * Return:  The calculated hash value as an unsigned long integer.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash)+c;
}
return (hash);
}
