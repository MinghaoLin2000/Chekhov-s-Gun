+[TSPPackage isZeroLengthFileOrEmptyDirectory:isDirectory:]
bool __cdecl +[TSPPackage isZeroLengthFileOrEmptyDirectory:isDirectory:](id a1, SEL a2, id a3, bool *a4)
{
  id v5; // x19
  unsigned int v6; // w22
  id v7; // x0
  void *v8; // x20
  NSFileManager *v9; // x22
  NSArray *v10; // x21
  void *v11; // x0
  NSArray *v12; // x0
  id v14; // [xsp+0h] [xbp-30h] BYREF
  id v15; // [xsp+8h] [xbp-28h] BYREF

  v5 = objc_retain(a3);
  *a4 = 0;
  v15 = 0LL;
  v6 = (unsigned int)objc_msgSend(v5, "getResourceValue:forKey:error:", &v15, NSURLIsDirectoryKey, 0LL);
  v7 = objc_retain(v15);
  v8 = v7;
  if ( v6 )
  {
    *a4 = (unsigned __int8)objc_msgSend(v7, "boolValue");
    if ( (unsigned int)objc_msgSend(v8, "boolValue") )
    {
      v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v10 = objc_retainAutoreleasedReturnValue(
              -[NSFileManager contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:](
                v9,
                "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                v5,
                0LL,
                1LL,
                0LL));
      objc_release(v9);
      if ( !v10 )
      {
        LOBYTE(v6) = 0;
        goto LABEL_9;
      }
      v11 = -[NSArray count](v10, "count");
    }
    else
    {
      v14 = 0LL;
      v6 = (unsigned int)objc_msgSend(v5, "getResourceValue:forKey:error:", &v14, NSURLFileSizeKey, 0LL);
      v12 = (NSArray *)objc_retain(v14);
      v10 = v12;
      if ( !v6 )
      {
LABEL_9:
        objc_release(v10);
        goto LABEL_10;
      }
      v11 = -[NSArray longLongValue](v12, "longLongValue");
    }
    LOBYTE(v6) = v11 == 0LL;
    goto LABEL_9;
  }
LABEL_10:
  objc_release(v8);
  objc_release(v5);
  return v6;
}