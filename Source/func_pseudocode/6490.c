-[VideoConversionService generateGIFForVideoAtSourceBookmarkDictionary:toDestinationBookmarkDictionary:options:replyHandler:]
void __cdecl -[VideoConversionService generateGIFForVideoAtSourceBookmarkDictionary:toDestinationBookmarkDictionary:options:replyHandler:](
        VideoConversionService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x24
  id v11; // x19
  id v12; // x20
  id v13; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v10 = objc_retain(a6);
  v11 = objc_retain(a5);
  v12 = objc_retain(a4);
  v13 = objc_retain(a3);
  -[VideoConversionService performConversionOfClass:forSourceBookmarkDictionary:destinationBookmarkDictionary:options:replyHandler:](
    self,
    "performConversionOfClass:forSourceBookmarkDictionary:destinationBookmarkDictionary:options:replyHandler:",
    objc_opt_class(&OBJC_CLASS___GIFExportVideoTranscodingTask),
    v13,
    v12,
    v11,
    v10);
  objc_release(v10);
  objc_release(v11);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}