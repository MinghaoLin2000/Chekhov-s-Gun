-[TSPDirectoryPackageDataWriter targetDataURLForPath:]
id __cdecl -[TSPDirectoryPackageDataWriter targetDataURLForPath:](TSPDirectoryPackageDataWriter *self, SEL a2, id a3)
{
  NSURL *v3; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         -[NSURL URLByAppendingPathComponent:isDirectory:](
           self->_URL,
           "URLByAppendingPathComponent:isDirectory:",
           a3,
           0LL));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}