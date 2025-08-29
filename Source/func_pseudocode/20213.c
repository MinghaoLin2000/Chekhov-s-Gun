-[ipp_value_t setDate:]
void __cdecl -[ipp_value_t setDate:](ipp_value_t *self, SEL a2, ipp_value_date_t a3)
{
  NSData *v4; // x0
  NSObject *x_payload; // x8
  ipp_value_date_t v6; // [xsp+8h] [xbp-28h] BYREF

  v6 = a3;
  v4 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", &v6, 11LL));
  x_payload = self->x_payload;
  self->x_payload = &v4->super;
  objc_release(x_payload);
}