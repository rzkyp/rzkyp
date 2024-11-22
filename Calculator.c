/* Nama: M. Rizky Pratama 
   Kelas: 1IF
   Tanggal: 19 November 2024
   Program 2 Perhitungan menggunakan switch
*/

#include <stdio.h>

int main() {
    char operator;
    int operand1, operand2, hasil;

    printf("#≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈#\n");
    printf("#≈≈≈≈≈≈≈≈≈≈≈≈Program 2≈≈≈≈≈≈≈≈≈≈≈≈#\n");
    printf("#≈Perhitungan Menggunakan Switch≈≈#\n");
    printf("#≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈#\n");
    printf("Masukkan angka pertama: ");
    scanf("%d", &operand1);
    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Masukkan angka kedua: ");
    scanf("%d", &operand2);

    switch (operator) {
        case '+':
            hasil = operand1 + operand2;
            printf("%.2d + %.2d = %.2d\n", operand1, operand2, hasil);
            break;
        case '-':
            hasil = operand1 - operand2;
            printf("%.2d - %.2d = %.2d\n", operand1, operand2, hasil);
            break;
        case '*':
            hasil = operand1 * operand2;
            printf("%.2d * %.2d = %.2d\n", operand1, operand2, hasil);
            break;
        case '/':
          switch (operand2) {
            case 0:
              printf("Mohon masukan selain dari Nol");
            break;
           default:
             hasil = operand1 / operand2;
             printf("%.2d / %.2d = %.2d\n", operand1, operand2, hasil);
                    break;
         }
         break;
        default:
            printf("Error: Operator tidak valid.\n");
            break;
    }

    return 0;
}
