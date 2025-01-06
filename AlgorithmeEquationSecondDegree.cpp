#include <iostream>
#include <cmath> // Pour utiliser sqrt()

int main()
{
          double a, b, c;
          std::cout << "Entrez les coefficients a, b, c de l'équation ax² + bx + c = 0 : \n";
          std::cin >> a >> b >> c;

          // Cas 1 : a = 0, b = 0, c = 0
          if (a == 0 && b == 0 && c == 0)
          {
                    std::cout << "L'équation a une infinité de solutions (tout x est solution)." << std::endl;
          }
          // Cas 2 : a = 0, b = 0, c != 0
          else if (a == 0 && b == 0 && c != 0)
          {
                    std::cout << "L'équation n'a pas de solution." << std::endl;
          }
          // Cas 3 : a = 0, b != 0, c = 0
          else if (a == 0 && b != 0 && c == 0)
          {
                    double x = 0;
                    std::cout << "L'équation est linéaire, la solution est x = " << x << std::endl;
          }
          // Cas 4 : a = 0, b != 0, c != 0
          else if (a == 0 && b != 0 && c != 0)
          {
                    double x = -c / b;
                    std::cout << "L'équation est linéaire, la solution est x = " << x << std::endl;
          }
          // Cas 5 : a != 0, b = 0, c = 0
          else if (a != 0 && b == 0 && c == 0)
          {
                    double x = 0;
                    std::cout << "L'équation a une solution double : x = " << x << std::endl;
          }
          // Cas 6 : a != 0, b = 0, c != 0
          else if (a != 0 && b == 0 && c != 0)
          {
                    double term = -c / a;
                    if (term > 0)
                    {
                              double x1 = -sqrt(term);
                              double x2 = sqrt(term);
                              std::cout << "L'équation a deux solutions réelles : x1 = " << x1 << ", x2 = " << x2 << std::endl;
                    }
                    else if (term == 0)
                    {
                              std::cout << "L'équation a une solution double : x = 0" << std::endl;
                    }
                    else
                    {
                              double imaginaryPart = sqrt(-term);
                              std::cout << "L'équation a deux solutions complexes : x1 = " << imaginaryPart << "i, x2 = -" << imaginaryPart << "i" << std::endl;
                    }
          }
          // Cas 7 : a != 0, b != 0, c = 0
          else if (a != 0 && b != 0 && c == 0)
          {
                    double x1 = 0;
                    double x2 = -b / a;
                    std::cout << "L'équation a deux solutions : x1 = " << x1 << ", x2 = " << x2 << std::endl;
          }
          // Cas 8 : a != 0, b != 0, c != 0 (cas général)
          else if (a != 0 && b != 0 && c != 0)
          {
                    double discriminant = b * b - 4 * a * c;
                    if (discriminant > 0)
                    {
                              double x1 = (-b - sqrt(discriminant)) / (2 * a);
                              double x2 = (-b + sqrt(discriminant)) / (2 * a);
                              std::cout << "L'équation a deux solutions réelles : x1 = " << x1 << ", x2 = " << x2 << std::endl;
                    }
                    else if (discriminant == 0)
                    {
                              double x = -b / (2 * a);
                              std::cout << "L'équation a une solution double : x = " << x << std::endl;
                    }
                    else
                    {
                              double realPart = -b / (2 * a);
                              double imaginaryPart = sqrt(-discriminant) / (2 * a);
                              std::cout << "L'équation a deux solutions complexes : x1 = " << realPart << " + " << imaginaryPart << "i, x2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
                    }
          }

          return 0;
}