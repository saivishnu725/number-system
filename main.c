#include<stdio.h>
int main()
{
				int choice, reminder;
				long int input, output;
logic:
				printf("\n 1. Decimal to Binary.\n 2. Decimal to Octal.\n 3. Decimal to HexaDecimal.\n 4. Binary to HexaDecimal.\n 5. Binary to Octal.\n 6. Binary to Decimal.\n 7. Octal to HexaDecimal.\n 8. Octal to Binary.\n 9. Octal to Decimal.\n 10. HexaDecimal to Decimal.\n 11. HexaDecimal to Binary.\n 12. HexaDecimal to Octal.\n\n Enter your choice (999 to exit):");
				scanf("%d", &choice);
				if(choice == 999)
				goto end;
				if(choice > 12 || choice <=0)
				{
								printf("\n\n\n\n\n\nPlease enter a valid  number!! (999 to exit.)");
								printf("\n\n");
								goto logic;
				}
				printf("Enter the value to be converted: ");
				scanf("%d", &input);
				switch(choice)
				{
								case 1:
												output = dec_to_binary(input);
												break;
								case 2:
												output = dec_to_octal(input);
												break;
								case 3:
												output = dec_to_hexadecimal(input);
												break;
								case 4:
												output = bin_to_hexadecimal(input);
												break;
								case 5:
												output = bin_to_octal(input);
												break;
								case 6:
												output = bin_to_decimal(input);
												break;
								case 7:
												output = oct_to_hexadecimal(input);
												break;
								case 8:
												output = oct_to_binary(input);
												break;
								case 9:
												output = oct_to_decimal(input);
												break;
								case 10:
												output = hexdec_to_decimal(input);
												break;
								case 11:
												output = hexdec_to_binary(input);
												break;
								case 12:
												output = hexdec_to_octal(input);
												break;
								default:
												break;
				}
end:
				return 0;
}

int dec_to_binary(int n)
{
				return 0;
}

int dec_to_octal(int n)
{
				return 0;
}

int dec_to_hexadecimal(int n)
{
				return 0;
}

int bin_to_hexadecimal(int n)
{
				return 0;
}

int bin_to_octal(int n)
{
				return 0;
}

int bin_to_decimal(int n)
{
				return 0;
}

int oct_to_hexadecimal(int n)
{
				return 0;
}

int oct_to_binary(int n)
{
				return 0;
}

int oct_to_decimal(int n)
{
				return 0;
}

int hexdec_to_decimal(int n)
{
				return 0;
}

int hexdec_to_binary(int n)
{
				return 0;
}

int hexdec_to_octal(int n)
{
				return 0;
}

