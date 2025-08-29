+[PAUbiquityController passFilePathForUbiquitousPassWithFilename:]
id __cdecl +[PAUbiquityController passFilePathForUbiquitousPassWithFilename:](id a1, SEL a2, id a3)
{
  void *v3; // x20
  void *v4; // x19
  void *v5; // x20
  NSFileManager *v6; // x21
  unsigned __int8 v7; // w22
  void *v8; // x21
  NSFileManager *v9; // x20
  unsigned int v10; // w22
  id v11; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_ubiquitousURLForFilename:", a3));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "path"));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByAppendingPathComponent:", CFSTR("pass.json")));
  v6 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v7 = -[NSFileManager fileExistsAtPath:](v6, "fileExistsAtPath:", v5);
  objc_release(v6);
  if ( (v7 & 1) != 0 )
    goto LABEL_4;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByAppendingPathComponent:", CFSTR("card.json")));
  objc_release(v5);
  v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v10 = -[NSFileManager fileExistsAtPath:](v9, "fileExistsAtPath:", v8);
  objc_release(v9);
  if ( v10 )
  {
    v5 = v8;
LABEL_4:
    v11 = objc_retain(v5);
    v8 = v11;
    goto LABEL_6;
  }
  v11 = 0LL;
LABEL_6:
  objc_release(v8);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}