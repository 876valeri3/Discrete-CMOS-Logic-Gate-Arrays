# Discrete-CMOS-Logic-Gate-Arrays

I have recently been interested in digital IC design and decided to recreate the three basic logic gates using CMOS transistors; the BSS84 (PMOS) and the 2N7002 (NMOS). The circuits were simulated in LTSpice, then designed in KiCad. 

The PCBs are built in a DIP package as a typical IC chip would be. The reason being I wanted the PCBs to be modular and multiple modules could be put together, therefor each individual gate could build a larger project. This is useful for learning as logic gate schematics don't look similar to the phsyical design of a 74 series chip. Making them small and modular may help understanding from scratch how to build phsyical circuits. 

## Gates Built

| Gate    | Transistors      | How it is built | 
| :---    |   :---           |       :---  |
| NOT     | 1 PMOS, 1 NMOS   | One PMOS pull up, one NMOS pull down    |
| AND     | 3 PMOS, 3 NMOS   | NAND stage with parallel pull up network and series pull down network, NOT gate to invert for AND  |
| OR      | 3 PMOS, 3 NMOS   | NOR stage with series pull up network and parallel pull down network, NOT gate to invert for OR      |

## Truth Tables

| A    | B    | NOT (A) | AND   | OR
| :--- | :--- | :---    | :---  | :---
| 0    | 0    | 1       | 0     | 0
| 0    | 1    | 1       | 0     | 1
| 1    | 0    | 0       | 0     | 1
| 1    | 1    | 0       | 1     | 1

## CMOS Transistors
1. BSS84 (PMOS): Acts as the upper pull-up network
2. 2N7002 (NMOS): Acts as the lower pull-down network

Both transistors used on the PCB are SOT-23 package to keep the compact DIP package style.

## Pinout Configuration

Each modular DIP PCB mimics a standard IC layout broken out to 2.54mm pitch headers:
*   **Pin 1 (VCC):** Power Supply Input
*   **Pin 2 (A):** Digital Input A 
*   **Pin 3 (B):** Digital Input B 
*   **Pin 4 (GND):** Ground Reference
*   **Pin 5 (Q):** Logic Output (can be used to display LEDs or add on to other modules)
