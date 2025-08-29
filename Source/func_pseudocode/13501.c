-[NSString tsu_stringByTrimmingCharactersInSetFromFront:]
id __cdecl -[NSString tsu_stringByTrimmingCharactersInSetFromFront:](NSString *self, SEL a2, id a3)
{
  NSString *p_isa; // x19
  void *v5; // x21
  void *v6; // x1
  void *v7; // x20
  const __CFString *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  p_isa = objc_retain(self);
  v5 = -[NSString rangeOfCharacterFromSet:options:](p_isa, "rangeOfCharacterFromSet:options:", a3, 8LL);
  v7 = v6;
  if ( v6 == (void *)-[NSString length](p_isa, "length") )
  {
    v8 = &stru_1001DFAA0;
  }
  else
  {
    if ( v5 )
      goto LABEL_6;
    v8 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](p_isa, "substringFromIndex:", v7));
  }
  objc_release(p_isa);
  p_isa = &v8->isa;
LABEL_6:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(p_isa);
}