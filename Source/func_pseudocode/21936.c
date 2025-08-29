-[PAXPCDispatch _unarchivedFilesWithArchiveAtURL:error:]
id __cdecl -[PAXPCDispatch _unarchivedFilesWithArchiveAtURL:error:](PAXPCDispatch *self, SEL a2, id a3, id *a4)
{
  NSURL *v6; // x19
  NSURL *v7; // x0
  NSURL *v8; // x20
  int v9; // w0
  NSDictionary *v10; // x24
  NSURL *v11; // x21
  NSErrorUserInfoKey v13; // [xsp+8h] [xbp-48h] BYREF
  const __CFString *v14; // [xsp+10h] [xbp-40h] BYREF

  v6 = (NSURL *)objc_retain(a3);
  v7 = (NSURL *)objc_retainAutoreleasedReturnValue(-[PAXPCDispatch _uniqueTemporaryFolderWithError:](self, "_uniqueTemporaryFolderWithError:", a4));
  v8 = v7;
  if ( v7 )
  {
    v9 = PKUnarchiverZip(v6, v7);
    if ( !a4 || (v9 & 1) != 0 )
    {
      if ( v9 )
        v7 = v8;
      else
        v7 = 0LL;
    }
    else
    {
      v13 = NSDebugDescriptionErrorKey;
      v14 = CFSTR("Failed to unzip pass url");
      v10 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v14,
                &v13,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  PKPassKitErrorDomain,
                  -1LL,
                  v10)));
      objc_release(v10);
      v7 = 0LL;
    }
  }
  v11 = objc_retainAutoreleaseReturnValue(v7);
  objc_release(v8);
  objc_release(v6);
  return v11;
}