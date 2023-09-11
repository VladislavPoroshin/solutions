// figure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "include.h"

int main()
{
    triangle Tri_one;
    triangle Tri_two(2,2,2);
    bool TF_one = (Tri_one == Tri_two);
    double Sq_one = Tri_two.GetSquare();
    double Pr_one = Tri_two.GetPerimeter();
    double Check_one = Tri_one.check();

    rectangle rect_one;
    rectangle rect_two(2, 2);
    bool TF_two = (rect_one == rect_two);
    double Sq_two = rect_two.GetSquare();
    double Pr_two = rect_two.GetPerimeter();
    double Check_two = rect_one.check();

    circle crc_one;
    circle crc_two(2);
    bool TF_three = (crc_one == crc_two);
    double Sq_three = crc_two.GetSquare();
    double Pr_three = crc_two.GetPerimeter();
    double Check_three = crc_one.check();

    std::cout << TF_one << ' ' << Sq_one << ' '  << Pr_one << ' '  << Check_one << ' '  << TF_two << ' '  << Sq_two << ' '  << Pr_two << ' '  << Check_two << ' '  << TF_three << ' '  << Sq_three << ' '  << Pr_three << ' '  << Check_three << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
