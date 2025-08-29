-[IKPTRecentsService init]
IKPTRecentsService *__cdecl -[IKPTRecentsService init](IKPTRecentsService *self, SEL a2)
{
  IKPTRecentsService *v2; // x19
  NSMutableArray *v3; // x0
  NSMutableArray *recents; // x8
  NSMutableDictionary *v5; // x0
  NSMutableDictionary *thumbnailData; // x8
  objc_super v8; // [xsp+0h] [xbp-20h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___IKPTRecentsService;
  v2 = -[IKPTRecentsService init](&v8, "init");
  if ( v2 )
  {
    v3 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    recents = v2->_recents;
    v2->_recents = v3;
    objc_release(recents);
    v5 = (NSMutableDictionary *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    thumbnailData = v2->_thumbnailData;
    v2->_thumbnailData = v5;
    objc_release(thumbnailData);
  }
  return v2;
}