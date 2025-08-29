+[NSURL tsu_urlFromUserProvidedTelephoneString:withDataDetector:]
id __cdecl +[NSURL tsu_urlFromUserProvidedTelephoneString:withDataDetector:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  NSCharacterSet *v7; // x22
  void *v8; // x21
  NSCharacterSet *v9; // x22
  void *v10; // x23
  bool v11; // zf
  id v12; // x22
  NSURL *v13; // x0
  void *v14; // x22
  NSURL *v15; // x0
  void *v16; // x8
  void *v17; // x0
  void *v18; // x0
  __int64 v19; // x1
  NSCharacterSet *v20; // x22
  void *v21; // x23
  void *v22; // x25
  NSURL *v23; // x0
  void *v24; // x8
  _QWORD v26[5]; // [xsp+8h] [xbp-98h] BYREF
  __int64 v27; // [xsp+30h] [xbp-70h] BYREF
  __int64 *v28; // [xsp+38h] [xbp-68h]
  __int64 v29; // [xsp+40h] [xbp-60h]
  __int64 (__fastcall *v30)(); // [xsp+48h] [xbp-58h]
  __int64 (__fastcall *v31)(); // [xsp+50h] [xbp-50h]
  id v32; // [xsp+58h] [xbp-48h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSCharacterSet whitespaceAndNewlineCharacterSet](
           &OBJC_CLASS___NSCharacterSet,
           "whitespaceAndNewlineCharacterSet"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "stringByTrimmingCharactersInSet:", v7));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet alphanumericCharacterSet](&OBJC_CLASS___NSCharacterSet, "alphanumericCharacterSet"));
  v10 = objc_msgSend(v5, "rangeOfCharacterFromSet:", v9);
  objc_release(v9);
  if ( objc_msgSend(v8, "length") )
    v11 = v10 == (void *)0x7FFFFFFFFFFFFFFFLL;
  else
    v11 = 1;
  if ( v11 )
  {
    v12 = 0LL;
    goto LABEL_16;
  }
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x3032000000LL;
  v30 = sub_100122D44;
  v31 = sub_100122D54;
  v32 = 0LL;
  if ( (unsigned int)objc_msgSend(v8, "hasPrefix:", CFSTR("tel:")) )
  {
    v13 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v8));
    v14 = (void *)v28[5];
    v28[5] = (__int64)v13;
  }
  else
  {
    if ( ((unsigned int)objc_msgSend(v8, "containsString:", CFSTR(" ")) & 1) != 0 )
      goto LABEL_12;
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("tel:"), "stringByAppendingString:", v8));
    v15 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v14));
    v16 = (void *)v28[5];
    v28[5] = (__int64)v15;
    objc_release(v16);
  }
  objc_release(v14);
LABEL_12:
  v17 = (void *)v28[5];
  if ( !v17 )
  {
    v18 = objc_msgSend(v8, "tsu_range");
    v26[0] = _NSConcreteStackBlock;
    v26[1] = 3254779904LL;
    v26[2] = sub_100122D5C;
    v26[3] = &unk_1001DC5C8;
    v26[4] = &v27;
    objc_msgSend(v6, "enumerateMatchesInString:options:range:usingBlock:", v8, 0LL, v18, v19, v26);
    v17 = (void *)v28[5];
    if ( !v17 )
    {
      v20 = objc_retainAutoreleasedReturnValue(
              +[NSCharacterSet URLFragmentAllowedCharacterSet](
                &OBJC_CLASS___NSCharacterSet,
                "URLFragmentAllowedCharacterSet"));
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByAddingPercentEncodingWithAllowedCharacters:", v20));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("tel:"), "stringByAppendingString:", v21));
      v23 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v22));
      v24 = (void *)v28[5];
      v28[5] = (__int64)v23;
      objc_release(v24);
      objc_release(v22);
      objc_release(v21);
      objc_release(v20);
      v17 = (void *)v28[5];
    }
  }
  v12 = objc_retain(v17);
  _Block_object_dispose(&v27, 8);
  objc_release(v32);
LABEL_16:
  objc_release(v8);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}