#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include <cstdlib>

using namespace std;
//Variables
int opcion1, opcion2, opcion3, boleto, masboleto, resultadoboleto, sino, sala;
int *numerodeboleto;
void pausarylimpiar()
{
    system("pause");
    system("cls");
}
void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void salas()
{
    srand(time(0));
    sala = rand() % 6 + 1;
    cout << endl;
    cout << "Le toca ver la pelicula en sala " << sala << endl;

    if (sala == 6)
    {
        pausarylimpiar();
        cout << "Vera la pelicula en Macro XE" << endl;
    }
}
void masboletos45()
{
    cout << "Ingrese el numero de boletos" << endl;
    cin >> boleto;
    cout << "Desea agregar mas bolestos?" << endl;
    cout << "1. Si" << " o " << "2. No" << endl;
    cin >> sino;
    pausarylimpiar();
    if (sino == 1)
    {
        do
        {
            cout << "Ingrese el numero de boletos" << endl;
            cin >> masboleto;

            boleto = boleto + masboleto;

            cout << "Desea agregar mas bolestos?" << endl;
            cout << "1. Si" << " o " << "2. No" << endl;
            cin >> sino;
            pausarylimpiar();
        } while (sino == 1);
        resultadoboleto = boleto * 45;
        cout << "El total de boletos  adquiridos es: " << boleto << ", la cantidad a cancelar es: " << "Q" << resultadoboleto << ".00" << endl;
        salas();
    }
    else
    {
        resultadoboleto = boleto * 45;
        cout << "El total de boletos  adquiridos es: " << boleto << ", la cantidad a cancelar es: " << "Q" << resultadoboleto << ".00" << endl;
        salas();
    }
}
void masboletos25()
{
    cout << "Ingrese el numero de boletos" << endl;
    cin >> boleto;
    cout << "Desea agregar mas bolestos?" << endl;
    cout << "1. Si" << " o " << "2. No" << endl;
    cin >> sino;
    pausarylimpiar();
    if (sino == 1)
    {
        do
        {
            cout << "Ingrese el numero de boletos" << endl;
            cin >> masboleto;

            boleto = boleto + masboleto;

            cout << "Desea agregar mas bolestos?" << endl;
            cout << "1. Si" << " o " << "2. No" << endl;
            cin >> sino;
            pausarylimpiar();
        } while (sino == 1);
        resultadoboleto = boleto * 25;
        cout << "El total de boletos  adquiridos es: " << boleto << ", la cantidad a cancelar es: " << "Q" << resultadoboleto << ".00" << endl;
        salas();
    }
    else
    {
        resultadoboleto = boleto * 25;
        cout << "El total de boletos  adquiridos es: " << boleto << ", la cantidad a cancelar es: " << "Q" << resultadoboleto << ".00" << endl;
        salas();
    }
}
void masboletos30()
{
    cout << "Ingrese el numero de boletos" << endl;
    cin >> boleto;
    cout << "Desea agregar mas bolestos?" << endl;
    cout << "1. Si" << " o " << "2. No" << endl;
    cin >> sino;
    pausarylimpiar();
    if (sino == 1)
    {
        do
        {
            cout << "Ingrese el numero de boletos" << endl;
            cin >> masboleto;

            boleto = boleto + masboleto;

            cout << "Desea agregar mas bolestos?" << endl;
            cout << "1. Si" << " o " << "2. No" << endl;
            cin >> sino;
            pausarylimpiar();
        } while (sino == 1);
        resultadoboleto = boleto * 30;
        cout << "El total de boletos  adquiridos es: " << boleto << ", la cantidad a cancelar es: " << "Q" << resultadoboleto << ".00" << endl;
        salas();
    }
    else
    {
        resultadoboleto = boleto * 30;
        cout << "El total de boletos  adquiridos es: " << boleto << ", la cantidad a cancelar es: " << "Q" << resultadoboleto << ".00" << endl;
        salas();
    }
}
int main()
{
    //Código
    gotoxy(16, 10); cout << "#####   #####  #######  #     #  #           #  #######  #     #  #####  ######    #####" << endl;
    gotoxy(16, 11); cout << "#    #   ###   #        ##    #   #         #   #        ##    #   ###   #     #  #     #" << endl;
    gotoxy(16, 12); cout << "#    #   ###   #####    # #   #    #       #    #####    # #   #   ###   #     #  #     #" << endl;
    gotoxy(16, 13); cout << "#####    ###   #####    #  #  #     #     #     #####    #  #  #   ###   #     #  #     #" << endl;
    gotoxy(16, 14); cout << "#    #   ###   #        #   # #      #   #      #        #   # #   ###   #     #  #     #" << endl;
    gotoxy(16, 15); cout << "#    #   ###   #        #    ##       # #       #        #    ##   ###   #     #  #     #" << endl;
    gotoxy(16, 16); cout << "#####   #####  #######  #     #        #        #######  #     #  #####  ######    #####" << endl;
    string command = "sleep 2";
#ifdef _WIN32
    command = "timeout /T 2 /nobreak > nul";
#endif
    system(command.c_str());
    system("cls");
    cout << "La cartelera de esta semana es:"<<endl;
    cout << "1. El exorcista del Papa" << endl;
    cout << "2. Evil Dead: El despertar" << endl;
    cout << "3. Desastre bajo tierra" << endl;
    cout << "4. los caballeros del zodiaco: El inicio" << endl;
    cout << "5. Super Mario Bros. La pelicula" << endl;
    cin >> opcion1;
    pausarylimpiar();
    switch (opcion1)
    {
    case 1:
        cout << "Sinopsis: Pelicula sobre Gabriele Amorth un sacerdote que ejercio como exorcista" << endl;
        cout << "          principal del vaticano, realizando mas de mil exoscismos a lo largo de su vida." << endl;
        cout << "El horario disponible es el de las 21:00" << endl;
        cout << "Que tipo de bolestos desea?" << endl;
        cout << "1. ADULTO    Q45.00 " << endl;
        cout << "2. 3RA EDAD  Q25.00" << endl;
        cout << "3. Regresar al menu principal" << endl;
        cin >> opcion2;
        pausarylimpiar();
        switch (opcion2)
        {
        case 1:
            masboletos45();
            break;
        case 2:
            masboletos25();
            break;
        default:
            return main();
            break;
        }
        break;
    case 2:
        cout << "Sinopsis: Historia de 2 hermanas cuyo encuentro se ve interrumpido por el surgimiento" << endl;
        cout << "          de demonios poseedores de carne, empujandolos a una batalla por supervivencia." << endl;
        cout << "Que horario desea?" << endl;
        cout << "1. 18:45" << endl;
        cout << "2. 21:15" << endl;
        cout << "3. 21:45" << endl;
        cin >> opcion3;
        pausarylimpiar();
        switch (opcion3)
        {
        case 1:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            default:
                return main();
                break;
            }
            break;
        case 2:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            default:
                return main();
                break;
            }
            break;
        case 3:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            default:
                return main();
                break;
            }
            break;
        default:
            break;
        }
        break;
    case 3:
        cout << "Sinopsis: Dos millas bajo tierra, nueve mineros de los Apalaches luchan por" << endl;
        cout << "          sobrevivir despues de una explosion que los deja con una hora de oxigeno." << endl;
        cout << "Que horario desea?" << endl;
        cout << "1. 19:15" << endl;
        cout << "2. 21:45" << endl;
        cin >> opcion3;
        pausarylimpiar();
        switch (opcion3)
        {
        case 1:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            default:
                return main();
                break;
            }
            break;
        case 2:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            default:
                return main();
                break;
            }
            break;
        default:
            break;
        }
        break;
    case 4:
        cout << "Sinopsis: Cinco jovenes guerreos son reclutados para ser los Caballeros del Zodiaco, una" << endl;
        cout << "          fuerza cosmica de elite dedicada a protejer a la diosa Atenea y al planeta tierra." << endl;
        cout << "Que horario desea?" << endl;
        cout << "1. 18:20" << endl;
        cout << "2. 21:00" << endl;
        cin >> opcion3;
        pausarylimpiar();
        switch (opcion3)
        {
        case 1:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Ninios    Q30.00" << endl;
            cout << "4. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            case 3:
                masboletos30();
                break;
            default:
                return main();
                break;
            }
            break;
        case 2:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Ninios    Q30.00" << endl;
            cout << "4. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            case 3:
                masboletos30();
                break;
            default:
                return main();
                break;
            }
            break;
        default:
            break;
        }
        break;
    case 5:
        cout << "Sinopsis: Pelicula de animacion basada en la franquicia de videojuegos Super Mario Bros." << endl;
        cout << "          de Nintendo. Esta producida por Shigeru Miyamoto, creador de la licencia." << endl;
        cout << "Que horario desea?" << endl;
        cout << "1. 18:00" << endl;
        cout << "2. 19:30" << endl;
        cout << "3. 20:20" << endl;
        cout << "4. 21:50" << endl;
        cin >> opcion3;
        pausarylimpiar();
        switch (opcion3)
        {
        case 1:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Ninios    Q30.00" << endl;
            cout << "4. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            case 3:
                masboletos30();
                break;
            default:
                return main();
                break;
            }
            break;
        case 2:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Ninios    Q30.00" << endl;
            cout << "4. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            case 3:
                masboletos30();
                break;
            default:
                return main();
                break;
            }
            break;
        case 3:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Ninios    Q30.00" << endl;
            cout << "4. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            case 3:
                masboletos30();
                break;
            default:
                return main();
                break;
            }
            break;
        case 4:
            cout << "Que tipo de bolestos desea?" << endl;
            cout << "1. ADULTO    Q45.00 " << endl;
            cout << "2. 3RA EDAD  Q25.00" << endl;
            cout << "3. Ninios    Q30.00" << endl;
            cout << "4. Regresar al menu principal" << endl;
            cin >> opcion2;
            pausarylimpiar();
            switch (opcion2)
            {
            case 1:
                masboletos45();
                break;
            case 2:
                masboletos25();
                break;
            case 3:
                masboletos30();
                break;
            default:
                return main();
                break;
            }
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}