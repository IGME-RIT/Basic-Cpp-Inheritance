/*
Constructors and Destructors
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Include iostream for output during the program.
#include <iostream>
using namespace std;

// These classes all inherit from the character class.
#include "../header/fighter.h"
#include "../header/ranger.h"
#include "../header/wizard.h"
#include "../header/necromancer.h"

int main() 
{
    // Create a fighter, ranger, and wizard at level 5
    int level = 5;

    // Print out each character's stats:

    // The fighter uses public inheritance.
    // Any class can treat Fighter objects as Character objects.
    // This is the most commonly used form of inheritance.
    Fighter fighter = Fighter(level);
    fighter.PrintFighterClass();
    fighter.PrintStats();           // We are able to call PrintStats here because fighter inherits publicly.
    cout << endl;

    // The ranger uses private inheritance.
    // Only the ranger knows that it inherits from Character.
    Ranger ranger = Ranger(level);
    ranger.PrintAll();              // The ranger needs to define its own way of printing, because we can't call PrintStats.
    cout << endl;                   // Instead, we make a function PrintAll, and that function calls PrintRangerClass and PrintStats

    // The wizard uses protected inheritance.
    // The Wizard class, and classes inheriting from it will know that they inherit from Character.
    Wizard wizard = Wizard(level);
    wizard.PrintAll();              // Wizard also needs it's own way of printing, because main doesn't know it's a Character.
    cout << endl;

    // The necromancer also uses protected inheritance, but it inherits from the wizard class.
    // Since wizards inheritance of character is protected, necromancer also knows that it is a character.
    Necromancer necromancer = Necromancer(level);
    necromancer.PrintAll();         // Necromancer isn't a character to main, but can internally call PrintStats like Wizard does.

    // Notice, we can't do
    // necromancer.PrintWizardClass();
    // Because necromancers inhertitance from wizard is protected.

    cin.get();  // wait for user to press enter.
    return 0;   // End Program.
}