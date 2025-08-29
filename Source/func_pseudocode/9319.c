-[TSPDirectoryPackageConverter progressTotalUnitCountWithZipArchive:]
unsigned __int64 __cdecl -[TSPDirectoryPackageConverter progressTotalUnitCountWithZipArchive:](
        TSPDirectoryPackageConverter *self,
        SEL a2,
        id a3)
{
  char *v4; // x19
  NSFileManager *v5; // x23
  NSURL *v6; // x24
  NSArray *v7; // x25
  NSDirectoryEnumerator *v8; // x20
  void *v9; // x23
  __int64 v10; // x27
  void *v11; // x28
  void *v12; // x25
  unsigned int v13; // w26
  id v14; // x0
  void *v15; // x24
  unsigned int v16; // w25
  id v17; // x0
  void *v18; // x26
  id v20; // [xsp+0h] [xbp-150h] BYREF
  id v21; // [xsp+8h] [xbp-148h] BYREF
  __int128 v22; // [xsp+10h] [xbp-140h] BYREF
  __int128 v23; // [xsp+20h] [xbp-130h]
  __int128 v24; // [xsp+30h] [xbp-120h]
  __int128 v25; // [xsp+40h] [xbp-110h]
  objc_super v26; // [xsp+50h] [xbp-100h] BYREF
  _QWORD v27[2]; // [xsp+60h] [xbp-F0h] BYREF
  _BYTE v28[128]; // [xsp+70h] [xbp-E0h] BYREF

  v26.receiver = self;
  v26.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackageConverter;
  v4 = -[TSPPackageConverter progressTotalUnitCountWithZipArchive:](&v26, "progressTotalUnitCountWithZipArchive:", a3);
  v24 = 0u;
  v25 = 0u;
  v22 = 0u;
  v23 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v6 = objc_retainAutoreleasedReturnValue(-[TSPPackageConverter URL](self, "URL"));
  v27[0] = NSURLIsDirectoryKey;
  v27[1] = NSURLFileSizeKey;
  v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v27, 2LL));
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSFileManager enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:](
           v5,
           "enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:",
           v6,
           v7,
           0LL,
           0LL));
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v9 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
         v8,
         "countByEnumeratingWithState:objects:count:",
         &v22,
         v28,
         16LL);
  if ( v9 )
  {
    v10 = *(_QWORD *)v23;
    do
    {
      v11 = 0LL;
      do
      {
        if ( *(_QWORD *)v23 != v10 )
          objc_enumerationMutation(v8);
        v12 = *(void **)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)v11);
        v21 = 0LL;
        v13 = (unsigned int)objc_msgSend(v12, "getResourceValue:forKey:error:", &v21, NSURLIsDirectoryKey, 0LL);
        v14 = objc_retain(v21);
        v15 = v14;
        if ( v13 && ((unsigned int)objc_msgSend(v14, "boolValue") & 1) == 0 )
        {
          v20 = 0LL;
          v16 = (unsigned int)objc_msgSend(v12, "getResourceValue:forKey:error:", &v20, NSURLFileSizeKey, 0LL);
          v17 = objc_retain(v20);
          v18 = v17;
          if ( v16 )
            v4 = &v4[(_QWORD)objc_msgSend(v17, "unsignedLongLongValue")];
          objc_release(v18);
        }
        objc_release(v15);
        v11 = (char *)v11 + 1;
      }
      while ( v9 != v11 );
      v9 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
             v8,
             "countByEnumeratingWithState:objects:count:",
             &v22,
             v28,
             16LL);
    }
    while ( v9 );
  }
  objc_release(v8);
  return (unsigned __int64)v4;
}