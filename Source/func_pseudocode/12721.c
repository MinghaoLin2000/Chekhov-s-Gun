-[TSUExtendedAttribute setAttributeToPath:options:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSUExtendedAttribute setAttributeToPath:options:error:](
        TSUExtendedAttribute *self,
        SEL a2,
        id a3,
        int a4,
        id *a5)
{
  __int64 v6; // x20
  void *v8; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *(_QWORD *)&a4;
  v8 = objc_msgSend(objc_retainAutorelease(a3), "fileSystemRepresentation");
  if ( v8 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return -[TSUExtendedAttribute setAttributeToPathFileSystemRepresentation:options:error:](
             self,
             "setAttributeToPathFileSystemRepresentation:options:error:",
             v8,
             v6,
             a5);
  }
  else
  {
    if ( a5 )
      *a5 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  2LL,
                  0LL)));
    return 0;
  }
}