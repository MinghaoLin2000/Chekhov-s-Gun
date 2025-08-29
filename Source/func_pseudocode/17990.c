-[PlugInLibraryService init]
PlugInLibraryService *__cdecl -[PlugInLibraryService init](PlugInLibraryService *self, SEL a2)
{
  PlugInLibraryService *v2; // x19
  NSMutableDictionary *v3; // x0
  NSMutableDictionary *sessionRefs; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___PlugInLibraryService;
  v2 = -[PlugInLibraryService init](&v6, "init");
  if ( v2 )
  {
    v3 = (NSMutableDictionary *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    sessionRefs = v2->_sessionRefs;
    v2->_sessionRefs = v3;
    objc_release(sessionRefs);
  }
  return v2;
}