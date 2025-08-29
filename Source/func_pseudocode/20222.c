-[ipp_value_t collection]
ipp_collection_t *__cdecl -[ipp_value_t collection](ipp_value_t *self, SEL a2)
{
  NSObject *x_payload; // x20
  __int64 v4; // x0
  NSObject *v5; // x20
  Class Class; // x0
  NSObject *v7; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  x_payload = self->x_payload;
  v4 = objc_opt_class(&OBJC_CLASS___ipp_collection_t, a2);
  if ( (objc_opt_isKindOfClass(x_payload, v4) & 1) != 0
    || (v5 = self->x_payload, Class = objc_getClass("PK_ipp_collection_t"), (objc_opt_isKindOfClass(v5, Class) & 1) != 0) )
  {
    v7 = objc_retain(self->x_payload);
  }
  else
  {
    v7 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (ipp_collection_t *)objc_autoreleaseReturnValue(v7);
}