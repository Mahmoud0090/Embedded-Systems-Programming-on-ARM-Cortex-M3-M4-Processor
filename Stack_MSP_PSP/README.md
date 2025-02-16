#SP (stack pointer) register selection

- we change the the SP from being MSP as default in thread mode to
PSP 
- after that generate interrupt to see how SP is changed to MSP during
interrupt , and after finishing the interrupt SP is return to be PSP
- changing the SP to be PSP or MSP is done by changing the SPSEL bit 
in CONTROL register
