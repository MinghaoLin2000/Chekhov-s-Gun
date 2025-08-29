-[NSImage testName]
id __cdecl -[NSImage testName](NSImage *self, SEL a2)
{
  void *v3; // x20
  NSRegularExpression *v4; // x21
  id v5; // x22
  void *v6; // x23
  void *v7; // x0
  NSString *v8; // x0
  void *v9; // x8
  id v10; // x19
  _QWORD v12[4]; // [xsp+8h] [xbp-98h] BYREF
  id v13; // [xsp+28h] [xbp-78h]
  __int64 *v14; // [xsp+30h] [xbp-70h]
  id v15; // [xsp+38h] [xbp-68h] BYREF
  __int64 v16; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v17; // [xsp+48h] [xbp-58h]
  __int64 v18; // [xsp+50h] [xbp-50h]
  __int64 (__fastcall *v19)(); // [xsp+58h] [xbp-48h]
  __int64 (__fastcall *v20)(); // [xsp+60h] [xbp-40h]
  id v21; // [xsp+68h] [xbp-38h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v16 = 0LL;
  v17 = &v16;
  v18 = 0x3032000000LL;
  v19 = sub_100005FA4;
  v20 = sub_100005FB4;
  v21 = 0LL;
  if ( (unsigned int)-[NSImage _isSymbolImage](self, "_isSymbolImage") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[NSImage description](self, "description"));
    if ( v3 )
    {
      v15 = 0LL;
      v4 = objc_retainAutoreleasedReturnValue(
             +[NSRegularExpression regularExpressionWithPattern:options:error:](
               &OBJC_CLASS___NSRegularExpression,
               "regularExpressionWithPattern:options:error:",
               CFSTR(".*\\bsymbol = (.*)>"),
               0LL,
               &v15));
      v5 = objc_retain(v15);
      if ( v4 )
      {
        v6 = objc_msgSend(v3, "length");
        v12[0] = _NSConcreteStackBlock;
        v12[1] = 3254779904LL;
        v12[2] = sub_100005FBC;
        v12[3] = &unk_1000B8B88;
        v14 = &v16;
        v13 = objc_retain(v3);
        -[NSRegularExpression enumerateMatchesInString:options:range:usingBlock:](
          v4,
          "enumerateMatchesInString:options:range:usingBlock:",
          v13,
          0LL,
          0LL,
          v6,
          v12);
        objc_release(v13);
      }
      objc_release(v4);
      objc_release(v5);
    }
    objc_release(v3);
  }
  v7 = (void *)v17[5];
  if ( !v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[NSImage name](self, "name"));
    v9 = (void *)v17[5];
    v17[5] = (__int64)v8;
    objc_release(v9);
    v7 = (void *)v17[5];
    if ( !v7 )
    {
      v17[5] = (__int64)&stru_1000BA220;
      objc_release(0LL);
      v7 = (void *)v17[5];
    }
  }
  v10 = objc_retain(v7);
  _Block_object_dispose(&v16, 8);
  objc_release(v21);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}