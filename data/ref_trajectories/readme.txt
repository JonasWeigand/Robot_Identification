Hi,

die Dateinamen der .mat-files haben folgende Syntax : 
{Reibmodell}_v{ConditionNumber}_grids{DatenpunkteDesLinearisierungsmeshs}_T{Periode der Trajektorie}_ts{AnzahlAbtastzeitpunkte}

mit der Function BoundConstraints2 wandelst du mit die Variablen der .mat-files in Zeittrajektorien um.
BoundConstraints2(v{variable aus .mat-file},t{Zeitschritte zwischen 0 und T die du willst*},omega__f{berechnet sich aus Formel unten},numberOfConstraints{ist immer 18})
omega__f=2*pi/T