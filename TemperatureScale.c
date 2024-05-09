#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// red
void red()
{
    printf("\033[1;31m");
}

// reset
void reset()
{
    printf("\033[0m");
}

// celcious to farenhite
void C2F(float ctemp)
{
    char ch = 248;
    float F = (ctemp * 9) / 5 + 32;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Celcious temperature = \033[0m\033[1;34m%.2f%cC\033[0m\n", ctemp, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mFarenhite temperature is = \033[0m\033[1;34m%.2f%cF\033[0m\n\n", F, ch);
}

// farenhite to celcious
void F2C(float ftemp)
{
    char ch = 248;
    float C = (ftemp - 32) * 5 / 9;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Farenhite temperature = \033[0m\033[1;34m%.2f%cF\033[0m\n", ftemp, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mCelcious temperature      = \033[0m\033[1;34m%.2f%cC\033[0m\n\n", C, ch);
}

// celcious to kelvin
void C2K(float ctemp)
{
    char ch = 248;
    float K = ctemp + 273.16;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Celcious temperature = \033[0m\033[1;34m%.2f%cC\033[0m\n", ctemp, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mKelvin temperature       = \033[0m\033[1;34m%.2fK\033[0m\n\n", K);
}

// kelvin to celcious
void K2C(float ktemp)
{
    char ch = 248;
    float C = ktemp - 273.16;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Kelvin temperature = \033[0m\033[1;34m%.2fK\033[0m\n", ktemp);
    printf("\t\t\t\t\t\t\t\033[1;32mCelcious temperature = \033[0m\033[1;34m%.2f%cC\033[0m\n\n", C, ch);
}

// farenhite to kelvin
void F2K(float ftemp)
{
    char ch = 248;
    float K = (ftemp - 32) * 5 / 9 + 273;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Farenhite temperature = \033[0m\033[1;34m%.2f%cF\033[0m\n", ftemp, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mKelvin temperature \t  = \033[0m\033[1;34m%.2fK\033[0m\n\n", K);
}

// kelvin to farenhite
void K2F(float ktemp)
{
    char ch = 248;
    float F = (ktemp - 273.16) * 9 / 5 + 32;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Kelvin temperature = \033[0m\033[1;34m%.2fK\033[0m\n", ktemp);
    printf("\t\t\t\t\t\t\t\033[1;32mFarenhite temperature = \033[0m\033[1;34m%.2f%cF\033[0m\n\n", F, ch);
}

// celsious to farenhite and kelvin
void C2FandK(float ctemp)
{
    char ch = 248;
    float F = (ctemp * 9) / 5 + 32;
    float K = ctemp + 273.16;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Celcious temperature = \033[0m\033[1;34m%.2f%cC\033[0m\n", ctemp, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mFarenhite temperature is = \033[0m\033[1;34m%.2f%cF\033[0m\n", F, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mKelvin temperature is = \033[0m\033[1;34m%.2fK\033[0m\n\n", K);
}

// farenhite to celcious and kelvin
void F2CandK(float ftemp)
{
    char ch = 248;
    float C = (ftemp - 32) * 5 / 9;
    float K = (ftemp - 32) * 5 / 9 + 273;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Farenhite temperature = \033[0m\033[1;34m%.2f%cF\033[0m\n", ftemp, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mCelcious temperature is = \033[0m\033[1;34m%.2f%cC\033[0m\n", C, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mKelvin temperature is = \033[0m\033[1;34m%.2fK\033[0m\n\n", K);
}

// kelvin to celcious and farenhite
void K2CandF(float ktemp)
{
    char ch = 248;
    float C = ktemp - 273.16;
    float F = (ktemp - 273.16) * 5 / 9 + 32;
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;32mThe Kelvin temperature = \033[0m\033[1;34m%.2fK\033[0m\n", ktemp);
    printf("\t\t\t\t\t\t\t\033[1;32mCelcious temperature is = \033[0m\033[1;34m%.2f%cC\033[0m\n", C, ch);
    printf("\t\t\t\t\t\t\t\033[1;32mFarenhite temperature is = \033[0m\033[1;34m%.2f%cF\033[0m\n", F, ch);
}

int main()
{
    system("cls");
    printf("\t\t\t\t\t\t\t\033[1;35mWelcome to the Temperature \033[0m\e[1m\033[1;34mconverter!\e[m\033[0m\n\t\t\t\t\t\t\t\033[1;35mFollow the instruction.\033[0m\n\n");
    while (1)

    {
        int serial;
        printf("\n\t\t\t\t\t\t\t\033[1;33m1.Celcious to Farenhite.\n\t\t\t\t\t\t\t2.Farenhite to Celcious.\n\t\t\t\t\t\t\t3.Celcious to Kelvin.\n\t\t\t\t\t\t\t4.Kelvin to Celcious.\n\t\t\t\t\t\t\t5.Farenhite to Kelvin.\n\t\t\t\t\t\t\t6.Kelvin to farenhite.\n\t\t\t\t\t\t\t7.Celcious to Farenhite and Kelvin.\n\t\t\t\t\t\t\t8.Farenhite to Celcious and Kelvin.\n\t\t\t\t\t\t\t9.Kelvin to Farenhite and Celcious.\033[0m\n");
        red();
        printf("\t\t\t\t\t\t\t0.Exit.\n\n\n");
        reset();
        printf("\t\t\t\t\t\t\t\033[1;35mChoose one which you want to convert: ");
        reset();
        printf("\033[1;34m");
        scanf("%d", &serial);
        reset();
        printf("\n");
        if (serial < 0 || serial > 9)
        {
            system("cls");
            Beep(4000, 1000);
            printf("\033[1;31m");
            printf("\t\t\t\t\t\t\tInvalid!Try again.\n");
            reset();
        }
        else if (serial == 0)
        {
            system("cls");
            printf("\n\t\t\t\t\t\t\t\033[1;32mThank you!\033[0m\n\t\t\t\t\t\t\t\033[1;34mYou are successfully exited from the converter.\n\t\t\t\t\t\t\tTo try again press \033[1;35m'ctrl + alt + N'\n\t\t\t\t\t\t\t\033[0m\033[1;34mEither press\033[0m \033[1;31m'ctrl + J'\033[0m\n\n");
            break;
        }
        else if (serial == 1)
        {
            float ctemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Celcious temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ctemp);
            reset();
            C2F(ctemp);
        }

        else if (serial == 2)
        {
            float ftemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Farenhite temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ftemp);
            reset();
            F2C(ftemp);
        }

        else if (serial == 3)
        {
            float ctemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Celcious temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ctemp);
            reset();
            C2K(ctemp);
        }

        else if (serial == 4)
        {
            float ktemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Kelvin temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ktemp);
            reset();
            K2C(ktemp);
        }

        else if (serial == 5)
        {
            float ftemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Farenhite temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ftemp);
            reset();
            F2K(ftemp);
        }

        else if (serial == 6)
        {
            float ktemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Kelvin temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ktemp);
            reset();
            K2F(ktemp);
        }

        else if (serial == 7)
        {
            float ctemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Celcious temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ctemp);
            reset();
            C2FandK(ctemp);
        }

        else if (serial == 8)
        {
            float ftemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Farenhite temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ftemp);
            reset();
            F2CandK(ftemp);
        }

        else if (serial == 9)
        {
            float ktemp;
            printf("\033[1;32m");
            printf("\t\t\t\t\t\t\tEnter the Kelvin temperature: ");
            printf("\033[1;34m");
            scanf("%f", &ktemp);
            reset();
            K2CandF(ktemp);
        }
    }
    return 0;
}