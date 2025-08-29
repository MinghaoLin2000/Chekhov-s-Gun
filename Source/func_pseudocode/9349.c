-[TSPDirectoryPackageWriter targetDataURLForPath:]
id __cdecl -[TSPDirectoryPackageWriter targetDataURLForPath:](TSPDirectoryPackageWriter *self, SEL a2, id a3)
{
  id v4; // x19
  NSURL *v5; // x20
  NSURL *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter URL](self, "URL"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:isDirectory:](v5, "URLByAppendingPathComponent:isDirectory:", v4, 0LL));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}