# Solveur d'équation du second degré en C++

Ce programme résout une équation du second degré de la forme **ax² + bx + c = 0**, où **a**, **b**, et **c** sont des coefficients réels. Il prend en compte tous les cas possibles, y compris les cas particuliers où **a = 0**, **b = 0**, ou **c = 0**.

---

## Fonctionnalités

Le programme gère les cas suivants :

1. **Cas où a = 0** :
   - Si **a = 0**, l'équation devient linéaire (**bx + c = 0**).
   - Si **b = 0** et **c = 0**, l'équation a une infinité de solutions (tout **x** est solution).
   - Si **b = 0** et **c ≠ 0**, l'équation n'a pas de solution.
   - Si **b ≠ 0**, l'équation a une solution unique : **x = -c / b**.

2. **Cas où a ≠ 0** :
   - Le programme calcule le **discriminant** (**Δ = b² - 4ac**) pour déterminer la nature des solutions.
   - Si **Δ > 0**, l'équation a deux solutions réelles distinctes.
   - Si **Δ = 0**, l'équation a une solution réelle double.
   - Si **Δ < 0**, l'équation n'a pas de solutions réelles, mais deux solutions complexes conjuguées.

3. **Cas particuliers** :
   - Si **c = 0**, l'équation devient **ax² + bx = 0**. Les solutions sont **x = 0** et **x = -b / a**.
   - Si **b = 0**, l'équation devient **ax² + c = 0**. Les solutions dépendent du signe de **-c / a** :
     - Si **-c / a > 0**, il y a deux solutions réelles.
     - Si **-c / a = 0**, il y a une solution double (**x = 0**).
     - Si **-c / a < 0**, il n'y a pas de solutions réelles, mais deux solutions complexes.
       
![photo](https://github.com/user-attachments/assets/e578648c-d2e8-43c0-8ffe-ca570df69d8d)


---


## Exemples d'exécution

1. **Exemple 1** :
   - Entrée : **a = 1**, **b = -3**, **c = 2**
   - Sortie : Deux solutions réelles : **x₁ = 1**, **x₂ = 2**

2. **Exemple 2** :
   - Entrée : **a = 1**, **b = 2**, **c = 5**
   - Sortie : Deux solutions complexes : **x₁ = -1 + 2i**, **x₂ = -1 - 2i**

3. **Exemple 3** :
   - Entrée : **a = 0**, **b = 2**, **c = 4**
   - Sortie : Une solution linéaire : **x = -2**

4. **Exemple 4** :
   - Entrée : **a = 0**, **b = 0**, **c = 0**
   - Sortie : Une infinité de solutions (tout **x** est solution)

5. **Exemple 5** :
   - Entrée : **a = 0**, **b = 0**, **c = 5**
   - Sortie : Pas de solution

---


## Auteur

- **Développeur | ديفلوبور**

  
![logo développeur fb](https://github.com/user-attachments/assets/ee882425-cfc4-41d3-985d-3202e1443509)



📞 Phone: 0542577666  
📸 Instagram: @developpeur.27  
🎵 TikTok: @developpeur.27  


