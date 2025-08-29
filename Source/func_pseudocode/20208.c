-[ipp_value_t integer]
int __cdecl -[ipp_value_t integer](ipp_value_t *self, SEL a2)
{
  NSObject *x_payload; // x20
  __int64 v4; // x0

  x_payload = self->x_payload;
  v4 = objc_opt_class(&OBJC_CLASS___NSNumber, a2);
  if ( (objc_opt_isKindOfClass(x_payload, v4) & 1) != 0 )
    return (unsigned int)-[NSObject integerValue](self->x_payload, "integerValue");
  else
    return 0;
}