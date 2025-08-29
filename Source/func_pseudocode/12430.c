-[NSMutableString tsu_appendCharacter:]
void __cdecl -[NSMutableString tsu_appendCharacter:](NSMutableString *self, SEL a2, unsigned __int16 a3)
{
  UniChar chars; // [xsp+Eh] [xbp-2h] BYREF

  chars = a3;
  CFStringAppendCharacters((CFMutableStringRef)self, &chars, 1LL);
}