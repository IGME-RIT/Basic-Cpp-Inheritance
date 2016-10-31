/*
Inheritance
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
#pragma once


class Character
{
// There are three basic member access keywords: public, protected, and private.
// Access between different classes is based on these 3 keywords.

public:                     // public:
    Character(int level);   // functions and members can be accessed from anywhere in any class.
    void PrintStats();          

// m_variableName is a variant of a naming convention called hungarian notation.
// The m_ marks that it is a member variable.

private:                    // private:
    int m_level;            // functions and members can be accessed only by this specific class.

protected:                  // protected:
    int m_strength;         // functions and members can be accessed only from this class, or a derived (inheriting) class.
    int m_dexterity;
    int m_intelligence;

};