-[TSUZipFileArchive createTemporaryDirectoryRelativeToURL:]
void __cdecl -[TSUZipFileArchive createTemporaryDirectoryRelativeToURL:](TSUZipFileArchive *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  NSFileManager *v6; // x21
  NSURL *v7; // x0
  NSURL *v8; // x8
  TSUTemporaryDirectory *v9; // x21
  NSURL *v10; // x0
  NSURL *temporaryDirectoryURL; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( !self->_temporaryDirectoryURL )
  {
    if ( !v4
      || (v6 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager")),
          v7 = objc_retainAutoreleasedReturnValue(
                 -[NSFileManager URLForDirectory:inDomain:appropriateForURL:create:error:](
                   v6,
                   "URLForDirectory:inDomain:appropriateForURL:create:error:",
                   99LL,
                   1LL,
                   v5,
                   1LL,
                   0LL)),
          v8 = self->_temporaryDirectoryURL,
          self->_temporaryDirectoryURL = v7,
          objc_release(v8),
          objc_release(v6),
          !self->_temporaryDirectoryURL) )
    {
      v9 = -[TSUTemporaryDirectory initWithSignature:error:](
             objc_alloc(&OBJC_CLASS___TSUTemporaryDirectory),
             "initWithSignature:error:",
             CFSTR("ZipFile"),
             0LL);
      -[TSUTemporaryDirectory leakTemporaryDirectory](v9, "leakTemporaryDirectory");
      v10 = (NSURL *)objc_retainAutoreleasedReturnValue(-[TSUTemporaryDirectory URL](v9, "URL"));
      temporaryDirectoryURL = self->_temporaryDirectoryURL;
      self->_temporaryDirectoryURL = v10;
      objc_release(temporaryDirectoryURL);
      objc_release(v9);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}