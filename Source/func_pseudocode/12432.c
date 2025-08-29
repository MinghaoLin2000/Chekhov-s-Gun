-[NSMutableString tsu_appendSeparator:format:]
void __cdecl -[NSMutableString tsu_appendSeparator:format:](NSMutableString *self, SEL a2, id a3, id a4)
{
  __int64 v7; // [xsp+40h] [xbp+10h] BYREF

  if ( -[NSMutableString length](self, "length") )
    -[NSMutableString appendString:](self, "appendString:", a3);
  -[NSMutableString appendString:](
    self,
    "appendString:",
    +[NSString tsu_stringWithFormat:arguments:](&OBJC_CLASS___NSString, "tsu_stringWithFormat:arguments:", a4, &v7));
}