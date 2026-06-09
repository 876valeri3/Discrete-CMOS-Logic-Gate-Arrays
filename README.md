# Discrete-CMOS-Logic-Gate-Arrays

I have recently been interested in digital IC design and decided to recreate the three basic logic gates using CMOS transistors; the BSS84 (PMOS) and the 2N7002 (NMOS). The circuits were simulated in LTSpice, then designed in KiCad. 

The PCBs are built in a DIP package as a typical IC chip would be. The reason being I wanted the PCBs to be modular and multiple modules could be put together, therefor each individual gate could build a larger project. This is useful for educational purposes as logic gate schematics don't look similar to the phsyical design of a 74 series chip. Making them small and modular may help understanding from scratch how to build phsyical circuits. 

## CMOS Transistors
1. BSS84 (PMOS): Acts as the upper pull-up network
2. 2N7002 (NMOS): Acts as the lower pull-down network

Both transistors used on the PCB are SOT-23 package to keep the compact DIP package style.

## Pinout Configuration

Each modular DIP PCB mimics a standard IC layout broken out to 2.54mm pitch headers:
*   **Pin 1 (5V):** +5V Power Supply Input
*   **Pin 2 (A):** Digital Input A 
*   **Pin 3 (B):** Digital Input B 
*   **Pin 4 (GND):** 0V Ground Reference
*   **Pin 5 (Q):** Logic Output (can be used to display LEDs or add on to other modules)
