-[TSUExtendedAttribute initFromPath:name:options:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSUExtendedAttribute initFromPath:name:options:error:](
        TSUExtendedAttribute *self,
        SEL a2,
        id a3,
        id a4,
        int a5,
        id *a6)
{
  __int64 v7; // x22
  id v10; // x19
  void *v11; // x0
  TSUExtendedAttribute *v12; // x22

  v7 = *(_QWORD *)&a5;
  v10 = objc_retain(a4);
  v11 = objc_msgSend(objc_retainAutorelease(a3), "fileSystemRepresentation");
  if ( v11 )
  {
    self = (TSUExtendedAttribute *)objc_retain(
                                     -[TSUExtendedAttribute initFromPathFileSystemRepresentation:name:forRemoval:options:error:](
                                       self,
                                       "initFromPathFileSystemRepresentation:name:forRemoval:options:error:",
                                       v11,
                                       v10,
                                       0LL,
                                       v7,
                                       a6));
    v12 = self;
  }
  else
  {
    v12 = 0LL;
    if ( a6 )
      *a6 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  2LL,
                  0LL)));
  }
  objc_release(v10);
  objc_release(self);
  return v12;
}