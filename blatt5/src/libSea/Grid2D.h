#ifndef BLATT5_GRID2D_H
#define BLATT5_GRID2D_H


#include <vector>
#include "Coordinates.h"


namespace Sea {

    // TODO Aufgabe 3:
    //  Erstellt eine Template-Klasse `Grid2D` mit dem Template-Klassen-Parameter `T`.
    template<class T>
    class Grid2D{
    public:

        // TODO Aufgabe 3:
        //  Definiert die Member-Variable `grid` als Vektor von Vektoren mit Elementen vom Typ `T`.
        //  Jeder "innere" Vektor in `grid` soll dabei einer Zeile entsprechen, also der Y-Koordinate.
        //  Jede dieser Zeilen enthält gleich viele Elemente (vom Typ `T`), die jeweils eine Spalte bilden, also die X-Koordinate.
        //  Tipp: Wie ein Vektor von Vektoren definiert wird, ist bspw. bei der bisherigen Definition von `OutputGrid` in 'Output.h' zu sehen.

        std::vector<std::vector<T>> grid;

        // TODO Aufgabe 3:
        //  Erstellt einen Konstruktor `Grid2D(sizeX, sizeY, initElement)`.
        //  `sizeX` und `sizeY` sind die Größe in X- und Y-Richtung, also Y viele Vektoren (Zeilen) der Größe X.
        //  sowie ein Element vom Typ `T` zur Initialisierung der Vektoren.
        Grid2D(unsigned int sizeX, unsigned int sizeY, const T &initElement);

        // TODO Aufgabe 3:
        //  Erstellt zwei Methoden `sizeX()` und `sizeY()`.
        //  Sie sollen jeweils die Größe in X- bzw. Y-Richtung zurückgeben.
        unsigned int sizeX() const;
        unsigned int sizeY() const;

        // TODO Aufgabe 3:
        //  Überladet den `operator[]` so, dass er ein `Coordinates`-Element als Parameter erhält und eine Referenz auf das entsprechende Element zurückgibt.
        //  Instanzen von Grid2D sollen dann wie folgt verwendet werden können: `Coordinates c(3, 4); gridVariable[c] = ...`
        //  Erstellt zwei Varianten: einmal mit und einmal ohne `const` (Rückgabewert und Funktion).

        T const & operator[](Coordinates const & coords) const;
        T & operator[](Coordinates const & coords);

        // TODO Aufgabe 3:
        //  Überladet den `operator()` so, dass er X- und Y-Koordinaten als einzelne ganzzahlige Parameter erhält und eine Referenz auf das entsprechende Element zurückgibt.
        //  Instanzen von Grid2D sollen dann wie folgt verwendet werden können: `gridVariable(x, y) = ...` bzw. `gridVariable(3, 4) = ...`
        //  Erstellt zwei Varianten: einmal mit und einmal ohne `const` (Rückgabewert und Funktion).

        T const & operator()(unsigned int x, unsigned int y) const;
        T & operator()(unsigned int x, unsigned int y);

        //(TODO Aufgabe 4:)
        //   Warum werden von den Operatoren sowohl Varianten mit als auch ohne `const` benötigt?

    };
}


#include "Grid2D.inl" // Siehe Hinweis in 'game.h'


#endif //BLATT5_GRID2D_H
