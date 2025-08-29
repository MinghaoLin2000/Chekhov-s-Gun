-[SFUFileDataRepresentation hasSameLocationAs:]
bool __cdecl -[SFUFileDataRepresentation hasSameLocationAs:](SFUFileDataRepresentation *self, SEL a2, id a3)
{
  __int64 v5; // x0
  id v6; // x20
  void *v7; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_opt_class(&OBJC_CLASS___SFUFileDataRepresentation);
  if ( (objc_opt_isKindOfClass(a3, v5) & 1) == 0 )
    return 0;
  v6 = -[SFUFileDataRepresentation path](self, "path");
  v7 = objc_msgSend(a3, "path");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8)objc_msgSend(v6, "isEqualToString:", v7);
}