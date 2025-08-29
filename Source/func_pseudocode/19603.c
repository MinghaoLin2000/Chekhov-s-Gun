-[IPXLibraryChooserService init]
IPXLibraryChooserService *__cdecl -[IPXLibraryChooserService init](IPXLibraryChooserService *self, SEL a2)
{
  IPXLibraryChooserService *v2; // x19
  NSMetadataQuery *v3; // x0
  NSMetadataQuery *query; // x8
  NSMutableDictionary *v5; // x0
  NSMutableDictionary *libraries; // x8
  NSNotificationCenter *v7; // x20
  objc_super v9; // [xsp+0h] [xbp-20h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___IPXLibraryChooserService;
  v2 = -[IPXLibraryChooserService init](&v9, "init");
  if ( v2 )
  {
    v3 = (NSMetadataQuery *)objc_alloc_init((Class)&OBJC_CLASS___NSMetadataQuery);
    query = v2->_query;
    v2->_query = v3;
    objc_release(query);
    v5 = (NSMutableDictionary *)objc_msgSend(
                                  objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
                                  "initWithCapacity:",
                                  0LL);
    libraries = v2->_libraries;
    v2->_libraries = v5;
    objc_release(libraries);
    v7 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
    -[NSNotificationCenter addObserver:selector:name:object:](
      v7,
      "addObserver:selector:name:object:",
      v2,
      "queryNote:",
      0LL,
      v2->_query);
    objc_release(v7);
  }
  return v2;
}