-[iAUPServer appendToLog:]
void __cdecl -[iAUPServer appendToLog:](iAUPServer *self, SEL a2, id a3)
{
  iAUPServerDelegate *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = -[iAUPServer delegate](self, "delegate");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[iAUPServerDelegate logStatusString:](v4, "logStatusString:", a3);
}