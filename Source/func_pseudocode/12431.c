-[NSMutableString tsu_insertCharacter:atIndex:]
void __cdecl -[NSMutableString tsu_insertCharacter:atIndex:](
        NSMutableString *self,
        SEL a2,
        unsigned __int16 a3,
        unsigned __int64 a4)
{
  void *v6; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:", CFSTR("%C"), a3);
  -[NSMutableString insertString:atIndex:](self, "insertString:atIndex:", v6, a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}