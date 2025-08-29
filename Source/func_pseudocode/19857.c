-[job_spool_client_t JobAccountID]
NSString *__cdecl -[job_spool_client_t JobAccountID](job_spool_client_t *self, SEL a2)
{
  void *v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings jobAccountID](self->_printSettings, "jobAccountID"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "precomposedStringWithCanonicalMapping"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v3);
}