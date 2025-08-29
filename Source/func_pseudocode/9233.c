-[TSPTemporaryObjectContextDelegate init]
TSPTemporaryObjectContextDelegate *__cdecl -[TSPTemporaryObjectContextDelegate init](
        TSPTemporaryObjectContextDelegate *self,
        SEL a2)
{
  TSPTemporaryObjectContextDelegate *v2; // x19
  NSMutableSet *v3; // x0
  NSMutableSet *persistenceWarnings; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___TSPTemporaryObjectContextDelegate;
  v2 = -[TSPTemporaryObjectContextDelegate init](&v6, "init");
  if ( v2 )
  {
    v3 = (NSMutableSet *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
    persistenceWarnings = v2->_persistenceWarnings;
    v2->_persistenceWarnings = v3;
    objc_release(persistenceWarnings);
    v2->_ignoreDocumentSupport = 1;
  }
  return v2;
}