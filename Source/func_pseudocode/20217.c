-[ipp_value_t setResolution:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_value_t setResolution:](ipp_value_t *self, SEL a2, ipp_value_resolution_t a3)
{
  __int64 v3; // x22
  unsigned __int64 v4; // x20
  NSNumber *v6; // x19
  NSNumber *v7; // x20
  NSNumber *v8; // x22
  NSArray *v9; // x0
  NSObject *x_payload; // x8
  _QWORD v11[3]; // [xsp+0h] [xbp-50h] BYREF

  v3 = *(_QWORD *)&a3.var2;
  v4 = *(_QWORD *)&a3.var0;
  v6 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", HIDWORD(v4), v6));
  v11[1] = v7;
  v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v3));
  v11[2] = v8;
  v9 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v11, 3LL));
  x_payload = self->x_payload;
  self->x_payload = &v9->super;
  objc_release(x_payload);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}