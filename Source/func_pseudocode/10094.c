-[TSPDatabaseObjectWithFileState fileURL]
id __cdecl -[TSPDatabaseObjectWithFileState fileURL](TSPDatabaseObjectWithFileState *self, SEL a2)
{
  NSURL *packageURL; // x20
  NSString *fileState; // x8
  NSArray *v4; // x19
  NSString *v5; // x21
  NSURL *v6; // x20
  _QWORD v8[2]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  packageURL = self->_packageURL;
  fileState = self->_fileState;
  v8[0] = CFSTR("data");
  v8[1] = fileState;
  v4 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v8, 2LL));
  v5 = objc_retainAutoreleasedReturnValue(+[NSString pathWithComponents:](&OBJC_CLASS___NSString, "pathWithComponents:", v4));
  v6 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:](packageURL, "URLByAppendingPathComponent:", v5));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}