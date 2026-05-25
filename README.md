# Cleaner C++

## Struktura gałęzi

- `main` — stabilne wydania
- `develop` — główna gałąź robocza (integracja)
- `feature/backend` — logika czyszczenia systemu (C++)
- `feature/frontend` — interfejs użytkownika (Qt)

## Wymagania

- Qt 6.x
- CMake 4.x
- C++17 lub nowszy

## Layout
+-------------------------------------------------------------------------+
|  System Cleaner v1.0                                         [ _ ] [ X ] |
+-----------------------+-------------------------------------------------+
|                       |                                                 |
|  [ ICON ]             |   WITAJ W SYSTEM CLEANER                        |
|  MENU                 |   Ostatnie skanowanie: 2 dni temu               |
|                       |                                                 |
|  (o) Przegląd         |   +-----------------------------------------+   |
|      [Home]           |   |                                         |   |
|                       |   |           [ PRZYCISK: SKANUJ ]          |   |
|  ( ) Czyszczenie      |   |             (Duży, centralny)           |   |
|      [Cleaner]        |   |                                         |   |
|                       |   +-----------------------------------------+   |
|  ( ) Narzędzia        |                                                 |
|      [Tools]          |   STATYSTYKI (Karty):                           |
|                       |   +-----------+  +------------+  +------------+ |
|  ( ) Ustawienia       |   | Pliki temp|  | Logi system|  | Cache WWW  | |
|      [Settings]       |   |   120 MB  |  |    15 MB   |  |   450 MB   | |
|                       |   +-----------+  +------------+  +------------+ |
|                       |                                                 |
+-----------------------+-------------------------------------------------+
|  Status: Gotowy       |   [ LOGI: Skanowanie /home/user/.cache... ] [^] |
+-----------------------+-------------------------------------------------+S
