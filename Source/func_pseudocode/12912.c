-[NSFileManager tsu_makeWritableItemAtURL:permissionsOverride:resetCreationDate:error:]
bool __cdecl -[NSFileManager tsu_makeWritableItemAtURL:permissionsOverride:resetCreationDate:error:](
        NSFileManager *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  _BOOL4 v7; // w25
  id v10; // x19
  id v11; // x20
  void *v12; // x21
  NSDictionary *v13; // x0
  NSDictionary *v14; // x24
  NSUInteger v15; // x0
  NSUInteger v16; // x27
  unsigned __int8 v17; // w23
  __int64 v18; // x26
  unsigned __int8 v19; // w0
  NSDate *v20; // x25
  NSNumber *v21; // x27
  NSDictionary *v22; // x26
  _QWORD v24[2]; // [xsp+8h] [xbp-B8h] BYREF
  _QWORD v25[2]; // [xsp+18h] [xbp-A8h] BYREF
  _QWORD v26[4]; // [xsp+28h] [xbp-98h] BYREF
  _QWORD v27[4]; // [xsp+48h] [xbp-78h] BYREF

  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[NSFileManager attributesOfItemAtPath:error:](self, "attributesOfItemAtPath:error:", v12, a6));
    v14 = v13;
    if ( v13 )
    {
      v15 = -[NSDictionary filePosixPermissions](v13, "filePosixPermissions");
      v16 = v15;
      if ( v11 )
        v15 = (NSUInteger)objc_msgSend(v11, "unsignedIntegerValue");
      v18 = v15 | 0x80;
      v19 = -[NSDictionary fileIsImmutable](v14, "fileIsImmutable");
      if ( v16 != v18 || (v19 & 1) != 0 || v7 )
      {
        if ( v7 )
        {
          v20 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
          v26[0] = NSFilePosixPermissions;
          v21 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", v18));
          v27[0] = v21;
          v27[1] = &__kCFBooleanFalse;
          v26[1] = NSFileImmutable;
          v26[2] = NSFileCreationDate;
          v26[3] = NSFileModificationDate;
          v27[2] = v20;
          v27[3] = v20;
          v22 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    v27,
                    v26,
                    4LL));
          objc_release(v21);
        }
        else
        {
          v24[0] = NSFilePosixPermissions;
          v20 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", v18));
          v24[1] = NSFileImmutable;
          v25[0] = v20;
          v25[1] = &__kCFBooleanFalse;
          v22 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    v25,
                    v24,
                    2LL));
        }
        objc_release(v20);
        v17 = (unsigned __int8)-[NSFileManager sfu_setAttributes:ofItemAtURL:recursively:error:](
                                 self,
                                 "sfu_setAttributes:ofItemAtURL:recursively:error:",
                                 v22,
                                 v10,
                                 1LL,
                                 a6);
        objc_release(v22);
      }
      else
      {
        v17 = 1;
      }
    }
    else
    {
      v17 = 0;
    }
    objc_release(v14);
  }
  else
  {
    v17 = 0;
    if ( a6 )
      *a6 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  NSCocoaErrorDomain,
                  262LL,
                  0LL)));
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  return v17;
}