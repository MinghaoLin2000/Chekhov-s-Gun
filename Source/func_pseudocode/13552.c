+[NSString tsu_fogShareTokenFromFileURL:]
id __cdecl +[NSString tsu_fogShareTokenFromFileURL:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x21
  void *v5; // x22
  void *v6; // x23
  NSArray *v7; // x24
  NSString *v8; // x20
  _QWORD v10[2]; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v3, "isFileURL") )
  {
    v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "lastPathComponent"));
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "dataUsingEncoding:", 4LL));
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "tsu_encodeToHexidecimalString"));
    v10[0] = CFSTR("fog");
    v10[1] = v6;
    v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v10, 2LL));
    v8 = objc_retainAutoreleasedReturnValue(-[NSArray componentsJoinedByString:](v7, "componentsJoinedByString:", CFSTR(":")));
    objc_release(v7);
    objc_release(v6);
    objc_release(v5);
    objc_release(v4);
  }
  else
  {
    v8 = 0LL;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}