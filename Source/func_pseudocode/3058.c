-[DeviceSetupViewController xmlStringForDict:]
id __cdecl -[DeviceSetupViewController xmlStringForDict:](DeviceSetupViewController *self, SEL a2, id a3)
{
  NSData *v3; // x19
  void *v4; // x20
  void *v5; // x21
  void *v6; // x22
  char *v7; // x0
  __int64 v8; // x1
  char *v9; // x23
  id v10; // x24
  NSData *v11; // x22
  void *v12; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSPropertyListSerialization dataWithPropertyList:format:options:error:](
           &OBJC_CLASS___NSPropertyListSerialization,
           "dataWithPropertyList:format:options:error:",
           a3,
           100LL,
           0LL,
           0LL));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("<dict>"), "dataUsingEncoding:", 4LL));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("</dict>"), "dataUsingEncoding:", 4LL));
  v6 = -[NSData rangeOfData:options:range:](
         v3,
         "rangeOfData:options:range:",
         v4,
         0LL,
         0LL,
         -[NSData length](v3, "length"));
  v7 = (char *)-[NSData rangeOfData:options:range:](
                 v3,
                 "rangeOfData:options:range:",
                 v5,
                 1LL,
                 0LL,
                 -[NSData length](v3, "length"));
  v9 = &v7[v8 - (_QWORD)v6];
  v10 = objc_alloc((Class)&OBJC_CLASS___NSString);
  v11 = objc_retainAutoreleasedReturnValue(-[NSData subdataWithRange:](v3, "subdataWithRange:", v6, v9));
  v12 = objc_msgSend(v10, "initWithData:encoding:", v11, 4LL);
  objc_release(v11);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}