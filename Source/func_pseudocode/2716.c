+[NSString storageSizeStringForFileSize:]
id __cdecl +[NSString storageSizeStringForFileSize:](id a1, SEL a2, id a3)
{
  unsigned __int64 v3; // x0
  unsigned __int64 v4; // x19
  NSBundle *v5; // x0
  NSBundle *v6; // x20
  const __CFString *v7; // x2
  NSString *v8; // x0
  NSBundle *v9; // x0
  NSBundle *v10; // x21
  const __CFString *v11; // x2
  unsigned __int64 v12; // x22
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x9
  NSString *v15; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (unsigned __int64)objc_msgSend(a3, "unsignedLongLongValue");
  if ( v3 == -1LL )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v6 = v5;
    v7 = CFSTR("N/A");
    goto LABEL_5;
  }
  v4 = v3;
  if ( !v3 )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v6 = v5;
    v7 = CFSTR("zero KB");
LABEL_5:
    v8 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v5,
             "localizedStringForKey:value:table:",
             v7,
             &stru_1000BA220,
             0LL));
    goto LABEL_14;
  }
  if ( v3 >> 40 )
  {
    v4 = v3 >> 30;
    v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v10 = v9;
    v11 = CFSTR("%.2f TB");
  }
  else
  {
    if ( !(v3 >> 30) )
    {
      if ( v3 < 0x100000 )
      {
        v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v6 = objc_retainAutoreleasedReturnValue(
               -[NSBundle localizedStringForKey:value:table:](
                 v10,
                 "localizedStringForKey:value:table:",
                 CFSTR("%.2f KB"),
                 &stru_1000BA220,
                 0LL));
        v12 = 1LL;
      }
      else
      {
        v4 = v3 >> 10;
        v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v6 = objc_retainAutoreleasedReturnValue(
               -[NSBundle localizedStringForKey:value:table:](
                 v10,
                 "localizedStringForKey:value:table:",
                 CFSTR("%.2f MB"),
                 &stru_1000BA220,
                 0LL));
        v12 = 10LL;
      }
      goto LABEL_11;
    }
    v4 = v3 >> 20;
    v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v10 = v9;
    v11 = CFSTR("%.2f GB");
  }
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v9,
           "localizedStringForKey:value:table:",
           v11,
           &stru_1000BA220,
           0LL));
  v12 = 100LL;
LABEL_11:
  objc_release(v10);
  v13 = v4 >> 10;
  v14 = ((v4 & 0x3FF) * (unsigned int)v12 + 1023) >> 10;
  if ( v14 == v12 )
  {
    v14 = 0LL;
    ++v13;
  }
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString localizedStringWithFormat:](
           &OBJC_CLASS___NSString,
           "localizedStringWithFormat:",
           v6,
           (double)v14 / (double)v12 + (double)v13));
LABEL_14:
  v15 = v8;
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}