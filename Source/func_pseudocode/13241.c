-[SFUZipArchive collapseCommonRootDirectoryIgnoreCase:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SFUZipArchive collapseCommonRootDirectoryIgnoreCase:](SFUZipArchive *self, SEL a2, bool a3)
{
  _BOOL8 v3; // x21
  void *v5; // x20
  id v6; // x0
  void *v7; // x22
  NSMutableDictionary *v8; // x21
  char *v9; // x25
  id v10; // x22
  char *v11; // x0
  char *v12; // x23
  char *v13; // x24
  void *v14; // x25
  void *v15; // x27
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = a3;
  v5 = objc_autoreleasePoolPush();
  v6 = -[SFUZipArchive commonRootDirectoryIgnoringCase:](self, "commonRootDirectoryIgnoringCase:", v3);
  if ( v6 )
  {
    v7 = v6;
    v8 = (NSMutableDictionary *)objc_msgSend(
                                  objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
                                  "initWithCapacity:",
                                  -[NSMutableDictionary count](self->mEntries, "count"));
    v9 = (char *)objc_msgSend(v7, "length");
    v10 = -[SFUZipArchive allEntryNames](self, "allEntryNames");
    v11 = (char *)objc_msgSend(v10, "count");
    if ( v11 )
    {
      v12 = v11;
      v13 = 0LL;
      v14 = v9 + 1;
      do
      {
        v15 = objc_msgSend(v10, "objectAtIndex:", v13);
        if ( objc_msgSend(v15, "length") != v14
          && ((unsigned int)objc_msgSend(v15, "hasPrefix:", CFSTR("__MACOSX")) & 1) == 0 )
        {
          -[NSMutableDictionary setObject:forKey:](
            v8,
            "setObject:forKey:",
            -[NSMutableDictionary objectForKey:](self->mEntries, "objectForKey:", v15),
            objc_msgSend(v15, "substringFromIndex:", v14));
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    objc_release(self->mEntries);
    self->mEntries = v8;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_autoreleasePoolPop(v5);
}