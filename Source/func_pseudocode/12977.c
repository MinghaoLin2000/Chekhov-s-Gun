-[NSMutableString tsu_indentBy:]
void __cdecl -[NSMutableString tsu_indentBy:](NSMutableString *self, SEL a2, unsigned __int64 a3)
{
  void *v5; // x0
  void *v6; // x19
  NSString *v7; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_msgSend(CFSTR("          "), "mutableCopy");
  v6 = v5;
  while ( (unsigned __int64)objc_msgSend(v5, "length") < a3 )
  {
    objc_msgSend(v6, "appendString:", v6);
    v5 = v6;
  }
  objc_msgSend(v6, "deleteCharactersInRange:", a3, (char *)objc_msgSend(v6, "length") - a3);
  -[NSMutableString insertString:atIndex:](self, "insertString:atIndex:", v6, 0LL);
  v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("\n%@"), v6));
  -[NSMutableString replaceOccurrencesOfString:withString:options:range:](
    self,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("\n"),
    v7,
    0LL,
    0LL,
    -[NSMutableString length](self, "length"));
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}