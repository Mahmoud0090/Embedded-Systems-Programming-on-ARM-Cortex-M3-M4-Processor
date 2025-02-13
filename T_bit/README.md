# T-bit
- explaining about T bit in EPSR which determin whether the next instruction
is ARM or Thumb ISA , since cotex M4 has only thumb ISA hence T bit should
be 1

- the LSB of the PC register is always made as 1 and that in loaded to T bit

- so if the address of a func is for example 0x20008000 , when moved to PC 
will be 0x20008001
