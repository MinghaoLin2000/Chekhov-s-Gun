-[ipp_value_t boolean]
bool __cdecl -[ipp_value_t boolean](ipp_value_t *self, SEL a2)
{
  NSObject *x_payload; // x20
  __int64 v4; // x0
  NSObject *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  x_payload = self->x_payload;
  v4 = objc_opt_class(&OBJC_CLASS___NSNumber, a2);
  if ( (objc_opt_isKindOfClass(x_payload, v4) & 1) == 0 )
    return 0;
  v5 = self->x_payload;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8)-[NSObject boolValue](v5, "boolValue");
}