#include <iostream>
#include <cstring>
#include <string>
#define n 3

class pupil {
private:
    int i;
    std::string name[3];
    std::string school, level, quant, gender;
    int birthDate[3], age; 
    std::string phone;
public:
    void getName(std::string pupilName[3], std::string gender) {
        setlocale(0, "");
        /*std::cout << "Введите ФИО ребёнка: ";*/
        for (i = 0; i < 3; i++) {
            name[i] = pupilName[i];
        }
    }
    void getBirthDate(int BirthDate[3], int Age) {
        for (int i = 0; i < 3; i++) {
            birthDate[i] = BirthDate[i];
        }
        age = Age;
    }
    void getPhoneNumber(std::string Num) {
        phone = Num;
    }
    void getEducationPlace(std::string School, std::string Class) {
        school = School;
        level = Class;
    }
    void getQuant(std::string Quant) {
        quant = Quant;
    }
    void showInfo() {
        using namespace std;
        setlocale(0, "");

        cout << "ФИО: " << name[0] << " " << name[1] << " " << name[2] << '\n';
        cout << "Дата рождения: " << birthDate << "(" << age << ")" << '\n';
        cout << "Место учёбы: " << school << '\n';
        cout << "Класс: " << level << '\n';
        cout << "Направление в Кванториуме: " << quant << '\n';
        cout << "Контактная информация: " << phone << '\n';
    }
};

int main()
{
    setlocale(0, "");
    int birtday[3], age;
    std::string name[n], school, level, quant, gender, phone;

    pupil Peter;
    int choice;
    std::cout << "Выберите пункт меню: \n";
    std::cout << "\tВвести ФИО ребёнка - 1\n";
    std::cout << "\tВвести дату рождения - 2\n";
    std::cout << "\tУказать номер телефона - 3\n";
    std::cout << "\tМесто учёбы - 4\n";
    std::cout << "\tНаправление в Кванториуме - 5\n";
    std::cout << "\tВывести информацию об ученике - 6\n";
    std::cout << "\tВыход - 7\n";

    std::cin >> choice;
    while (choice != 7) {
        if (choice == 7) {
            std::cout << "Всего доброго!";
            break;
        }

       
        if (choice == 1) {

            std::cout << "Введите ФИО ребёнка: ";
            for (int i = 0; i < n; i++) {
                std::cin >> name[i];
            }
            std::cin >> gender;
            Peter.getName(name, gender);
            
        }
        if (choice == 2) {
            std::cout << "Введите дату рождения ребёнка: ";
            for (int i = 0; i < 3; i++) {
                std::cin >> birtday[i];
            }
            std::cin >> age;
            Peter.getBirthDate(birtday, age);
        }
        if (choice == 3) {
            std::cout << "Введите номер телефона ребёнка: ";
            std::cin >> phone;
            Peter.getPhoneNumber(phone);
        }
        if (choice == 4) {
            std::cout << "Введите место учёбы ребёнка и класс: ";
            std::cin >> school;
            std::cin >> level;
            Peter.getEducationPlace(school, level);
        }
        if (choice == 5) {
            std::cout << "Укажите направление обучения в Кванториуме: ";
            std::cin >> quant;
            Peter.getQuant(quant);
        }
        if (choice == 6) {
            Peter.showInfo();
        }
        else{
            std::cout << "\n\nТакого пункта нет\n\n";
        }
    }
    


}
