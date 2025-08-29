-[ipp_value_t setRange:]
void __cdecl -[ipp_value_t setRange:](ipp_value_t *self, SEL a2, ipp_value_range_t a3)
{
  NSNumber *v5; // x19
  NSNumber *v6; // x21
  NSArray *v7; // x0
  NSObject *x_payload; // x8
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF

  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", *(unsigned int *)a3.var0));
  v9[0] = v5;
  v6 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", *(unsigned int *)(*(_QWORD *)&a3 + 4LL)));
  v9[1] = v6;
  v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v9, 2LL));
  x_payload = self->x_payload;
  self->x_payload = &v7->super;
  objc_release(x_payload);
  objc_release(v6);
  objc_release(v5);
}