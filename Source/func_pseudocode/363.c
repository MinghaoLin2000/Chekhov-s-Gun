-[AskUserAlert dismiss:]
void __cdecl -[AskUserAlert dismiss:](AskUserAlert *self, SEL a2, signed __int64 a3)
{
  __int64 v4; // x8
  __int64 v5; // x2
  id v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = 1000LL;
  if ( a3 == 2 )
    v4 = 1001LL;
  if ( a3 == 3 )
    v5 = 1002LL;
  else
    v5 = v4;
  v6 = objc_retainAutoreleasedReturnValue(-[AskUserAlert buttonWithTag:](self, "buttonWithTag:", v5));
  objc_msgSend(v6, "performClick:", self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}