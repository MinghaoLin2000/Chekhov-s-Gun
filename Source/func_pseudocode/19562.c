-[StickiesMigration generateUniqueUUIDAtPath:]
id __cdecl -[StickiesMigration generateUniqueUUIDAtPath:](StickiesMigration *self, SEL a2, id a3)
{
  id v3; // x19
  NSString *v4; // x20
  void *v5; // x22
  int v6; // w25
  void *v7; // x23
  NSString *v8; // x22
  NSUUID *v9; // x24
  NSString *v10; // x24
  NSFileManager *v11; // x23
  unsigned __int8 v12; // w24
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 1001;
  do
  {
    v7 = v5;
    v8 = v4;
    v9 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
    v4 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v9, "UUIDString"));
    objc_release(v8);
    objc_release(v9);
    v10 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathExtension:](v4, "stringByAppendingPathExtension:", CFSTR("rtfd")));
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "stringByAppendingPathComponent:", v10));
    objc_release(v7);
    objc_release(v10);
    if ( !--v6 )
      break;
    v11 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v12 = -[NSFileManager fileExistsAtPath:](v11, "fileExistsAtPath:", v5);
    objc_release(v11);
  }
  while ( (v12 & 1) != 0 );
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}