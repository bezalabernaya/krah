
#include <iostream> //нужен для вывода строк "cout<<"
#include "conio.h" //нужен намеренно для "getche()", а не "cin>>"
#include "windows.h" //библиотека audiere её требует
#include "audiere.h" //сама библиотека
#include <SFML/Graphics.hpp>

using namespace std;
/*using namespace sf;
using namespace audiere;*/ //подключаем пространства имён для более короткой записи


int main()
{

    setlocale(0, "Russian");

    cout << "Играйте клавишами Q W E R T Y U I O . X - для выхода" << endl;
    audiere::AudioDevicePtr device = OpenDevice();

    audiere::OutputStreamPtr do1 = OpenSound(device, "do.wav", false); //здесь мы начинаем создание потоков со звуками определённой высоты
    audiere::OutputStreamPtr re = OpenSound(device, "re.wav", false);
    audiere::OutputStreamPtr mi = OpenSound(device, "mi.wav", false);
    audiere::OutputStreamPtr fa = OpenSound(device, "fa.wav", false);
    audiere::OutputStreamPtr sol = OpenSound(device, "sol.wav", false);
    audiere::OutputStreamPtr lja = OpenSound(device, "lja.wav", false);
    audiere::OutputStreamPtr si = OpenSound(device, "si.wav", false);
    audiere::OutputStreamPtr do_d = OpenSound(device, "do_d.wav", false);
    audiere::OutputStreamPtr re_d = OpenSound(device, "re_d.wav", false);
    audiere::OutputStreamPtr mi_2 = OpenSound(device, "mi_2.wav", false);
    audiere::OutputStreamPtr fa_d = OpenSound(device, "fa_d.wav", false);
    audiere::OutputStreamPtr sol_d = OpenSound(device, "sol_d.wav", false);
    audiere::OutputStreamPtr lja_d = OpenSound(device, "lja_d.wav", false);
    audiere::OutputStreamPtr re_2 = OpenSound(device, "re_2.wav", false);
    audiere::OutputStreamPtr do_2 = OpenSound(device, "do_2.wav", false);
    audiere::OutputStreamPtr re_2d = OpenSound(device, "re_2d.wav", false);
    audiere::OutputStreamPtr do_2d = OpenSound(device, "do_2d.wav", false);



    char notePlay = '1'; //инициализируем символьную переменную с произвольным значением

    while (notePlay != 'x') //цикл выполняется, пока не нажата клавиша "x"
    {
        notePlay = _getch();

        if (notePlay == 'a') do1->play();
        else if (notePlay == 's') re->play();
        else if (notePlay == 'd') mi->play();
        else if (notePlay == 'f') fa->play();
        else if (notePlay == 'g') sol->play();
        else if (notePlay == 'h') lja->play();
        else if (notePlay == 'j') si->play();
        else if (notePlay == 'k') do_2->play();
        else if (notePlay == 'l') re_2->play();
        else if (notePlay == ';') mi_2->play();


        else if (notePlay == 'w') do_d->play();
        else if (notePlay == 'e') re_d->play();
        else if (notePlay == 't') fa_d->play();
        else if (notePlay == 'y') sol_d->play();
        else if (notePlay == 'u') lja_d->play();
        else if (notePlay == 'o') do_2d->play();
        else if (notePlay == 'p') re_2d->play();



    }
    //Объект, который, собственно, является главным окном приложения
    sf::RenderWindow window(VideoMode(200, 200), "SFML Works!");

    // Главный цикл приложения. Выполняется, пока открыто окно
    while (window.isOpen())
    {
        // Обрабатываем очередь событий в цикле
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Пользователь нажал на «крестик» и хочет закрыть окно?
            if (event.type == sf::Event::EventType::Closed)
                // тогда закрываем его
                window.close();
        }
        // Отрисовка окна	
        window.display();
    }

    return 0;

}