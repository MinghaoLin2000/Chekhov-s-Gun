-[PAMediaConversionServiceResourceURLCollection logMessageSummaryWithFullPath:]
id __cdecl -[PAMediaConversionServiceResourceURLCollection logMessageSummaryWithFullPath:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        bool a3)
{
  NSMutableString *v5; // x19
  id v6; // x20
  void *v7; // x21
  void **v9; // [xsp+0h] [xbp-50h] BYREF
  __int64 v10; // [xsp+8h] [xbp-48h]
  __int64 (__fastcall *v11)(int, id); // [xsp+10h] [xbp-40h]
  void *v12; // [xsp+18h] [xbp-38h]
  id v13; // [xsp+20h] [xbp-30h]
  bool v14; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableString stringWithString:](&OBJC_CLASS___NSMutableString, "stringWithString:", CFSTR("<")));
  v9 = _NSConcreteStackBlock;
  v10 = 3254779904LL;
  v11 = sub_100009860;
  v12 = &unk_100040F30;
  v13 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v14 = a3;
  v6 = objc_retain(v13);
  -[PAMediaConversionServiceResourceURLCollection enumerateResourceURLs:](self, "enumerateResourceURLs:", &v9);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "componentsJoinedByString:", CFSTR("|"), v9, v10, v11, v12));
  -[NSMutableString appendString:](v5, "appendString:", v7);
  objc_release(v7);
  -[NSMutableString appendString:](v5, "appendString:", CFSTR(">"));
  objc_release(v13);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}