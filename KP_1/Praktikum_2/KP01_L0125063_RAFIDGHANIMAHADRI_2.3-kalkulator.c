#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
printf("\n"
"[1] Celcius ke Fahrenheit\n"
"[2] Celcius ke Reamur\n"
"[3] Celcius ke Kelvin\n"
"[0] Exit program\n");
}

int main(){
	char buffer[32];
	char get_menu[8];
	float celcius;
	int pilih;
	
	while (1) {
		menu();
		printf("Pilih: ");
		if (fgets(get_menu, sizeof(get_menu), stdin) == NULL) {
			printf("Try again\n");
			continue;
		}
		get_menu[strcspn(get_menu, "\n")] = 0; 
		pilih = atoi(get_menu);

		if (pilih == 0) {
			printf("Keluar program...\n");
			break;
		}
		
		printf("Masukkan Celcius: ");
		
		if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
			printf("Try again\n");
			continue;
		}
		buffer[strcspn(buffer, "\n")] = 0;
		celcius = strtof(buffer, NULL);

		switch (pilih) {
			case 1: {
				float fahrenheit = (9.0/5.0) * celcius + 32;
				printf("Hasil: %.2f F\n", fahrenheit);
				break;
			}
			case 2: {
				float reamur = (4.0/5.0) * celcius;
				printf("Hasil: %.2f R\n", reamur);
				break;
			}
			case 3: {
				float kelvin = celcius + 273.15;
				printf("Hasil: %.2f K\n", kelvin);
				break;
			}
			default:
				printf("No valid choices\n");
			}
		}
	return 0;
}
