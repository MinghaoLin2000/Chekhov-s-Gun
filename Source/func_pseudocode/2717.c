+[NSString totalTimeStringForTotalTime:]
id __cdecl +[NSString totalTimeStringForTotalTime:](id a1, SEL a2, id a3)
{
  unsigned int v3; // w20
  NSBundle *v4; // x0
  NSBundle *v5; // x19
  unsigned __int64 v6; // x21
  const __CFString *v7; // x2
  NSString *v8; // x20
  NSString *v9; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (unsigned int)objc_msgSend(a3, "integerValue");
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = v4;
  if ( v3 >> 5 >= 0x753 )
  {
    v6 = v3 / 0xEA60uLL;
    v7 = CFSTR("%d minute(s)");
  }
  else
  {
    v6 = (unsigned int)(v3 / 0x3E8 - 60 * ((71582789 * (unsigned __int64)(v3 / 0x3E8)) >> 32));
    if ( v3 / 0x3E8 == 60 * ((71582789 * (unsigned __int64)(v3 / 0x3E8)) >> 32) )
      v7 = CFSTR("%d minute(s)");
    else
      v7 = CFSTR("%d second(s)");
  }
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v4,
           "localizedStringForKey:value:table:",
           v7,
           &stru_1000BA220,
           0LL));
  objc_release(v5);
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v8, v6));
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}