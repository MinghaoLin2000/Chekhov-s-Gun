-[job_spool_client_t DocumentPassword]
NSData *__cdecl -[job_spool_client_t DocumentPassword](job_spool_client_t *self, SEL a2)
{
  void *v2; // x19
  void *v3; // x20
  const char *v4; // x21
  NSData *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings documentPassword](self->_printSettings, "documentPassword"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "precomposedStringWithCanonicalMapping"));
  objc_release(v2);
  if ( v3 )
  {
    v4 = (const char *)objc_msgSend(objc_retainAutorelease(v3), "UTF8String");
    v5 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", v4, strlen(v4)));
  }
  else
  {
    v5 = 0LL;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}