-[ipp_request_t _setupNewRequest]
void __cdecl -[ipp_request_t _setupNewRequest](ipp_request_t *self, SEL a2)
{
  NSLocale *v3; // x21
  id v4; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  self->super._request_id = atomic_fetch_add(&dword_1000C3D08, 1u);
  -[ipp_t _addString:valueTag:name:lang:value:](
    self,
    "_addString:valueTag:name:lang:value:",
    1LL,
    71LL,
    CFSTR("attributes-charset"),
    0LL,
    CFSTR("utf-8"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSLocale currentLocale](&OBJC_CLASS___NSLocale, "currentLocale"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSLocale objectForKey:](v3, "objectForKey:", NSLocaleLanguageCode));
  objc_release(v3);
  -[ipp_t _addString:valueTag:name:lang:value:](
    self,
    "_addString:valueTag:name:lang:value:",
    1LL,
    72LL,
    CFSTR("attributes-natural-language"),
    0LL,
    v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}