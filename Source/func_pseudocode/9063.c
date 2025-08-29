-[TSPPackageWriter filenameForData:preferredFilename:]
id __cdecl -[TSPPackageWriter filenameForData:preferredFilename:](TSPPackageWriter *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  __CFString *v7; // x21
  NSString *v8; // x22
  void *v9; // x23
  void *v10; // x24
  __CFString *v11; // x25
  NSUInteger v12; // x25
  __int64 v13; // x28
  __CFString *v14; // x0
  __CFString *v15; // x26
  __CFString *v16; // x21
  const char *v17; // x27
  NSFileManager *v18; // x26
  NSString *v19; // x27
  __CFString *v20; // x25
  void *v21; // x0
  void *v22; // x25
  void *v23; // x24
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByDeletingPathExtension"));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("-%llu"),
           objc_msgSend(v5, "identifier")));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "pathExtension"));
  v10 = objc_msgSend(v9, "length");
  if ( (unsigned int)-[__CFString hasPrefix:](v7, "hasPrefix:", CFSTR("~")) )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("x"), "stringByAppendingString:", v7));
    objc_release(v7);
    v7 = v11;
  }
  v12 = -[NSString length](v8, "length");
  if ( v10 )
    v13 = 247LL - (_QWORD)v10;
  else
    v13 = 248LL;
  if ( -[__CFString length](v7, "length") )
    v14 = v7;
  else
    v14 = CFSTR("data");
  v15 = objc_retain(v14);
  objc_release(v7);
  v16 = objc_retainAutorelease(v15);
  v17 = (const char *)-[__CFString fileSystemRepresentation](v16, "fileSystemRepresentation");
  if ( v17 )
  {
    v18 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v19 = objc_retainAutoreleasedReturnValue(
            -[NSFileManager stringWithFileSystemRepresentation:length:](
              v18,
              "stringWithFileSystemRepresentation:length:",
              v17,
              strlen(v17)));
    v20 = (__CFString *)objc_retainAutoreleasedReturnValue(
                          -[NSString tsu_substringWithComposedCharacterSequencesTruncatedToLength:](
                            v19,
                            "tsu_substringWithComposedCharacterSequencesTruncatedToLength:",
                            v13 - v12));
    objc_release(v16);
    objc_release(v19);
    objc_release(v18);
    v16 = v20;
  }
  v21 = objc_retainAutoreleasedReturnValue(-[__CFString stringByAppendingString:](v16, "stringByAppendingString:", v8));
  v22 = v21;
  if ( v10 )
  {
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "stringByAppendingPathExtension:", v9));
    objc_release(v22);
    v22 = v23;
  }
  objc_release(v9);
  objc_release(v8);
  objc_release(v16);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v22);
}