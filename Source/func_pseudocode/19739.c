-[platform_http_get debugDescription]
NSString *__cdecl -[platform_http_get debugDescription](platform_http_get *self, SEL a2)
{
  id v3; // x19
  NSString *v4; // x20
  objc_super v6; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___platform_http_get;
  v3 = objc_retainAutoreleasedReturnValue(-[platform_http_get description](&v6, "description"));
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@ { session %@, endpoint %@ }"),
           v3,
           self->_session,
           self->_url));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}