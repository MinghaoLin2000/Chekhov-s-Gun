-[NSString tsu_pathUTI]
NSString *__cdecl -[NSString tsu_pathUTI](NSString *self, SEL a2)
{
  NSString *v3; // x19
  NSFileManager *v4; // x21
  unsigned __int8 v5; // w0
  id *v6; // x8
  void *v7; // x22
  NSString *v8; // x20
  id v9; // x21
  char v11; // [xsp+Fh] [xbp-21h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSString pathExtension](self, "pathExtension"));
  if ( !v3 )
  {
LABEL_10:
    v9 = 0LL;
    goto LABEL_11;
  }
  if ( !-[NSString isAbsolutePath](self, "isAbsolutePath") )
  {
    v8 = UTTagClassFilenameExtension;
    goto LABEL_8;
  }
  v11 = 1;
  v4 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v5 = -[NSFileManager fileExistsAtPath:isDirectory:](v4, "fileExistsAtPath:isDirectory:", self, &v11);
  v6 = (id *)&UTTypeData;
  if ( (v5 & (v11 == 0)) == 0 )
    v6 = (id *)&UTTypeDirectory;
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(*v6, "identifier"));
  objc_release(v4);
  v8 = UTTagClassFilenameExtension;
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSString tsu_preferredIdentifierForTagClass:conformingToUTI:](
           v3,
           "tsu_preferredIdentifierForTagClass:conformingToUTI:",
           UTTagClassFilenameExtension,
           v7));
  if ( (unsigned int)objc_msgSend(v9, "tsu_isDynamic") )
  {
    objc_release(v9);
    objc_release(v7);
LABEL_8:
    v9 = objc_retainAutoreleasedReturnValue(
           -[NSString tsu_preferredIdentifierForTagClass:conformingToUTI:](
             v3,
             "tsu_preferredIdentifierForTagClass:conformingToUTI:",
             v8,
             0LL));
    if ( !(unsigned int)objc_msgSend(v9, "tsu_isDynamic") )
      goto LABEL_11;
    objc_release(v9);
    goto LABEL_10;
  }
  objc_release(v7);
  if ( !v9 )
    goto LABEL_8;
LABEL_11:
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v9);
}