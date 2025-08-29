+[PAUbiquityController ubiquitousPassHashForFilename:]
id __cdecl +[PAUbiquityController ubiquitousPassHashForFilename:](id a1, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x19
  NSFileManager *v6; // x20
  void *v7; // x21
  unsigned int v8; // w22
  id v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(a1), "_ubiquitousURLForFilename:", v4));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "path"));
  v8 = -[NSFileManager fileExistsAtPath:](v6, "fileExistsAtPath:", v7);
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
    v9 = objc_retainAutoreleasedReturnValue((id)PKManifestHash(v5));
  else
    v9 = 0LL;
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}