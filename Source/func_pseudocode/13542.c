+[NSString tsu_localizedDisplayNameWithPersonNameComponents:]
id __cdecl +[NSString tsu_localizedDisplayNameWithPersonNameComponents:](id a1, SEL a2, id a3)
{
  id v3; // x19
  NSString *v4; // x22
  os_log_s *v5; // x20
  void *v6; // x20
  void *v7; // x22
  void *v8; // x21
  void *v9; // x0
  NSString *v10; // x0
  void *v11; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retain(a3);
  if ( !v3 )
  {
    v4 = 0LL;
    goto LABEL_21;
  }
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSPersonNameComponentsFormatter localizedStringFromPersonNameComponents:style:options:](
           &OBJC_CLASS___NSPersonNameComponentsFormatter,
           "localizedStringFromPersonNameComponents:style:options:",
           v3,
           0LL,
           0LL));
  if ( v4 )
    goto LABEL_21;
  if ( TSUDefaultCat_init_token != -1 )
    dispatch_once(&TSUDefaultCat_init_token, &stru_1001DF588);
  v5 = (os_log_s *)TSUDefaultCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_10017483C(v5);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "givenName"));
  v7 = objc_msgSend(v6, "length");
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "familyName"));
  v9 = objc_msgSend(v8, "length");
  if ( v7 && v9 )
  {
    if ( ((unsigned int)objc_msgSend(v6, "tsu_isCJKString") & 1) != 0
      || (unsigned int)objc_msgSend(v8, "tsu_isCJKString") )
    {
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingString:", v6));
    }
    else
    {
      v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ %@"), v6, v8));
    }
  }
  else
  {
    if ( v7 )
    {
      v11 = v6;
    }
    else
    {
      if ( !v9 )
      {
        v4 = 0LL;
        goto LABEL_20;
      }
      v11 = v8;
    }
    v10 = objc_retain(v11);
  }
  v4 = v10;
LABEL_20:
  objc_release(v8);
  objc_release(v6);
LABEL_21:
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}