
#include <iostream> //����� ��� ������ ����� "cout<<"
#include "conio.h" //����� ��������� ��� "getche()", � �� "cin>>"
#include "windows.h" //���������� audiere � �������
#include "audiere.h" //���� ����������
#include <SFML/Graphics.hpp>

using namespace std;
/*using namespace sf;
using namespace audiere;*/ //���������� ������������ ��� ��� ����� �������� ������


int main()
{

    setlocale(0, "Russian");

    cout << "������� ��������� Q W E R T Y U I O . X - ��� ������" << endl;
    audiere::AudioDevicePtr device = OpenDevice();

    audiere::OutputStreamPtr do1 = OpenSound(device, "do.wav", false); //����� �� �������� �������� ������� �� ������� ����������� ������
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



    char notePlay = '1'; //�������������� ���������� ���������� � ������������ ���������

    while (notePlay != 'x') //���� �����������, ���� �� ������ ������� "x"
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
    //������, �������, ����������, �������� ������� ����� ����������
    sf::RenderWindow window(VideoMode(200, 200), "SFML Works!");

    // ������� ���� ����������. �����������, ���� ������� ����
    while (window.isOpen())
    {
        // ������������ ������� ������� � �����
        sf::Event event;
        while (window.pollEvent(event))
        {
            // ������������ ����� �� �������� � ����� ������� ����?
            if (event.type == sf::Event::EventType::Closed)
                // ����� ��������� ���
                window.close();
        }
        // ��������� ����	
        window.display();
    }

    return 0;

}