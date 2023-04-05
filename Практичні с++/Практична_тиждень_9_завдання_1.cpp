#include <iostream>
#include <string>
#include <map>

int main() {
    std::string values;
    std::getline(std::cin, values); // Зчитати перший рядок вводу
    std::string template_str;
    std::getline(std::cin, template_str); // Зчитати другий рядок вводу

    // Розібрати пари "ім'я=значення" з першого рядка
    std::map<std::string, std::string> value_map;
    size_t pos = 0;
    while ((pos = values.find(',')) != std::string::npos) {
        std::string pair = values.substr(0, pos);
        size_t equal_pos = pair.find('=');
        if (equal_pos != std::string::npos) {
            std::string name = pair.substr(0, equal_pos);
            std::string value = pair.substr(equal_pos + 1);
            value_map[name] = value;
        }
        values.erase(0, pos + 1);
    }

    // Замінити плейсхолдери у другому рядку значеннями
    for (auto it = value_map.begin(); it != value_map.end(); ++it) {
        std::string placeholder = "[" + it->first + "]";
        size_t placeholder_pos = template_str.find(placeholder);
        while (placeholder_pos != std::string::npos) {
            template_str.replace(placeholder_pos, placeholder.length(), it->second);
            placeholder_pos = template_str.find(placeholder, placeholder_pos + 1);
        }
    }

    // Вивести результат
    std::cout << template_str << std::endl;

    return 0;
}