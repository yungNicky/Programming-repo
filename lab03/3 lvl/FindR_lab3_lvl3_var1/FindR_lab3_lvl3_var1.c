int main()
{
    float r1 = 200; // Сопротивление первого резистора
    float r2 = 470; // Сопротивление второго резистора
    float r3 = 220; // Сопротивление третьего резистора
    float calc = (1.0 / r1) + (1.0 / r2) + (1.0 / r3); // Расчет 1
    float R = 1.0 / calc; // Общее сопротивление (Ом)
    return 0;
}
