-[IKPTRecentsService thumbnailPathForImageID:]
id __cdecl -[IKPTRecentsService thumbnailPathForImageID:](IKPTRecentsService *self, SEL a2, id a3)
{
  void *v4; // x21
  NSString *v5; // x20
  NSString *v6; // x22
  id v7; // x19
  void *v8; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "stringByDeletingPathExtension"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@-thumbnail"), v4));
  v6 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathExtension:](v5, "stringByAppendingPathExtension:", CFSTR("tiff")));
  objc_release(v5);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "stringByAppendingPathComponent:", v6));
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}