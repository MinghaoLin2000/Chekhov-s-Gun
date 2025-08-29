-[NSString tsu_enumerateRangesOfCharactersInSet:usingBlock:]
void __cdecl -[NSString tsu_enumerateRangesOfCharactersInSet:usingBlock:](NSString *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, _BYTE *, signed __int64, char *); // x20
  void *v8; // x21
  _BYTE *v9; // x22
  _BYTE *v10; // x0
  char v11; // [xsp+Fh] [xbp-31h] BYREF

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, _BYTE *, signed __int64, char *))objc_retain(a4);
  v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSScanner), "initWithString:", self);
  objc_msgSend(v8, "setCaseSensitive:", 1LL);
  objc_msgSend(v8, "setCharactersToBeSkipped:", 0LL);
  if ( ((unsigned int)objc_msgSend(v8, "isAtEnd") & 1) == 0 )
  {
    do
    {
      v9 = objc_msgSend(v8, "scanLocation");
      if ( (unsigned int)objc_msgSend(v8, "scanCharactersFromSet:intoString:", v6, 0LL) )
      {
        v10 = objc_msgSend(v8, "scanLocation");
        v11 = 0;
        v7[2](v7, v9, v10 - v9, &v11);
        if ( v11 )
          break;
      }
      if ( ((unsigned int)objc_msgSend(v8, "isAtEnd") & 1) == 0 )
        objc_msgSend(v8, "scanUpToCharactersFromSet:intoString:", v6, 0LL);
    }
    while ( !(unsigned int)objc_msgSend(v8, "isAtEnd") );
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}