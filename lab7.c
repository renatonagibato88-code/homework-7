#include <stdio.h>

int main() {
    int number;

    printf("Введите число от 1 до 13: ");
    if (scanf("%d", &number) != 1 || number < 1 || number > 13) {
        printf("Ошибка: неверный ввод или число вне диапазона.\n");
        return 1;
    }

    printf("Число словами: ");

    // Обрабатываем числа от 11 до 13
    if (number >= 11 && number <= 13) {
        if (number == 11) printf("один");
        else if (number == 12) printf("две"); // Обратите внимание: "две-", а не "два-"
        else if (number == 13) printf("три");
        
        printf("надцать\n"); // Дописываем суффикс для 11, 12, 13
    } 
    // Обрабатываем числа от 1 до 10
    else {
        if (number == 1) printf("один\n");
        else if (number == 2) printf("два\n");
        else if (number == 3) printf("три\n");
        else if (number == 4) printf("четыре\n");
        else if (number == 5) printf("пять\n");
        else if (number == 6) printf("шесть\n");
        else if (number == 7) printf("семь\n");
        else if (number == 8) printf("восемь\n");
        else if (number == 9) printf("девять\n");
        else if (number == 10) printf("десять\n");
    }

    return 0;
}
