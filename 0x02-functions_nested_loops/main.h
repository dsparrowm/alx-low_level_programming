int _putchar(char c);
void print_alphabet(void);


int _putchar(char c)
{
	return (write(1, &c, 1));
}
