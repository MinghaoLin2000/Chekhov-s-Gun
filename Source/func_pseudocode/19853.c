-[job_spool_client_t FinishingsCol]
ipp_collection_t *__cdecl -[job_spool_client_t FinishingsCol](job_spool_client_t *self, SEL a2)
{
  void *v2; // x19
  ipp_collection_t *v3; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings finishingTemplate](self->_printSettings, "finishingTemplate"));
  if ( v2 )
  {
    v3 = objc_opt_new(&OBJC_CLASS___ipp_collection_t);
    -[ipp_t _addString:valueTag:name:lang:value:](
      v3,
      "_addString:valueTag:name:lang:value:",
      2LL,
      68LL,
      CFSTR("finishing-template"),
      0LL,
      v2);
  }
  else
  {
    v3 = 0LL;
  }
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}