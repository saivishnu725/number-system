#include<stdio.h>
int main()
{
				int choice, i, reminder;
				long int input, output;
				printf("\n 1. Decimal to Binary.\n 2. Decimal to Octal.\n 3. Decimal to HexaDecimal.\n 4. Binary to HexaDecimal.\n 5. Binary to Octal.\n 6. Binary to Decimal.\n 7. Octal to HexaDecimal.\n 8. Octal to Binary.\n 9. Octal to Decimal.\n 10. HexaDecimal to Decimal.\n 11. HexaDecimal to Binary.\n 12. HexaDecimal to Octal.\n\n Enter your choice:");
				scanf("%d", &choice);
				logic:
				switch(choice)
				{
								case 1:
												output = dec_to_binary();
												break;
								case 2:
												output = dec_to_octal();
												break;
								case 3:
												output = dec_to_hexadecimal();
												break;
								case 4:
												output = bin_to_hexadecimal();
												break;
								case 5:
												output = bin_to_octal();
												break;
								case 6:
												output = bin_to_decimal();
												break;
								case 7:
												output = oct_to_hexadecimal();
												break;
								case 8:
												output = oct_to_binary();
												break;
								case 9:
												output = oct_to_decimal();
												break;
								case 10:
												output = hexdec_to_decimal();
												break;
								case 11:
												output = hexdec_to_binary();
												break;
								case 12:
												output = hexdec_to_octal();
												break;
								default:
												printf("Please enter a valid function number (999 to exit.)");
												scanf("%d", &choice);
												if(choice == 999)
																break;
												goto logic;
				}
				return 0;
}

