-[TSUExtendedAttribute setAttributeToPathFileSystemRepresentation:options:error:]
bool __cdecl -[TSUExtendedAttribute setAttributeToPathFileSystemRepresentation:options:error:](
        TSUExtendedAttribute *self,
        SEL a2,
        const char *a3,
        int a4,
        id *a5)
{
  const char *v9; // x0
  const char *v10; // x22
  NSData *value; // x0
  NSUInteger v12; // x23
  const char *v13; // x2
  __int64 v14; // x2
  int v15; // w0
  bool result; // w0
  id v17; // x8

  v9 = -[NSString UTF8String](self->_name, "UTF8String");
  if ( !v9 )
  {
LABEL_5:
    if ( a5 )
    {
      v14 = 22LL;
LABEL_15:
      v17 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  v14,
                  0LL)));
      result = 0;
      *a5 = v17;
      return result;
    }
    return 0;
  }
  v10 = v9;
  value = self->_value;
  if ( value )
  {
    v12 = -[NSData length](value, "length");
    if ( v12 )
    {
      v13 = -[NSData bytes](self->_value, "bytes");
      if ( !v13 )
        goto LABEL_5;
    }
    else
    {
      v13 = "";
    }
    v15 = setxattr(a3, v10, v13, v12, 0, a4);
  }
  else
  {
    if ( !strcmp(v10, "com.apple.quarantine") )
      return 1;
    v15 = removexattr(a3, v10, a4);
  }
  if ( v15 != -1 )
    return 1;
  if ( a5 )
  {
    v14 = (unsigned int)*__error();
    goto LABEL_15;
  }
  return 0;
}