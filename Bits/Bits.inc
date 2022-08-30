Bits.inc (a: Bits) : Bits 
Bits.inc a = (Nat.to_bits (Nat.succ (Bits.to_nat a)))
