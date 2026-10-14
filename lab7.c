#include <stdio.h>

// Функция для вывода числа словами
void printNumberInWords(int num) {
    switch (num) {
        case 1:  printf("один\n");       break;
        case 2:  printf("два\n");        break;
        case 3:  printf("три\n");        break;
        case 4:  printf("четыре\n");     break;
        case 5:  printf("пять\n");       break;
        case 6:  printf("шесть\n");      break;
        case 7:  printf("семь\n");       break;
        case 8:  printf("восемь\n");     break;
        case 9:  printf("девять\n");     break;
        case 10: printf("десять\n");     break;
        case 11: printf("одиннадцать\n"); break;
        case 12: printf("двенадцать\n");  break;
        case 13: printf("тринадцать\n");  break;
        default: printf("Ошибка: число вне диапазона.\n"); break;
    }
}

int main() {
    int number;

    printf("Введите число от 1 до 13: ");
    
    // Проверка на корректность ввода
    if (scanf("%d", &number) == 1) {
        printf("Число словами: ");
        printNumberInWords(number);
    } else {
        printf("Ошибка: введено некорректное значение.\n");
    }

    return 0;
}
