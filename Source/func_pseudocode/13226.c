-[SFUZipArchive initWithData:collapseCommonRootDirectory:ignoreCase:]
// local variable allocation has failed, the output may be wrong!
SFUZipArchive *__cdecl -[SFUZipArchive initWithData:collapseCommonRootDirectory:ignoreCase:](
        SFUZipArchive *self,
        SEL a2,
        id a3,
        bool a4,
        bool a5)
{
  _BOOL8 v5; // x20
  _BOOL4 v6; // w21
  SFUZipArchive *v8; // x19

  v5 = a5;
  v6 = a4;
  v8 = -[SFUZipArchive init](self, "init");
  if ( v8 )
  {
    v8->mEntries = (NSMutableDictionary *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v8->mDataRepresentation = (SFUZipArchiveDataRepresentation *)-[SFUZipArchiveMemoryDataRepresentation initWithData:](
                                                                   objc_alloc(&OBJC_CLASS___SFUZipArchiveMemoryDataRepresentation),
                                                                   "initWithData:",
                                                                   a3);
    -[SFUZipArchive readEntries](v8, "readEntries");
    if ( v6 )
      -[SFUZipArchive collapseCommonRootDirectoryIgnoreCase:](v8, "collapseCommonRootDirectoryIgnoreCase:", v5);
  }
  return v8;
}