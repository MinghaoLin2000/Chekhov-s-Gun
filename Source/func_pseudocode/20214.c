-[ipp_value_t setString:]
void __cdecl -[ipp_value_t setString:](ipp_value_t *self, SEL a2, ipp_value_string_t a3)
{
  id var0; // x19
  id v5; // x0
  void *v6; // x20
  NSObject *v7; // x22
  NSArray *v8; // x0
  NSObject *x_payload; // x8
  NSArray *v10; // x0
  _QWORD v11[2]; // [xsp+0h] [xbp-40h] BYREF
  id v12; // [xsp+10h] [xbp-30h] BYREF

  var0 = a3.var0;
  v5 = objc_retain(a3.var1);
  v6 = v5;
  if ( var0 )
  {
    v7 = (NSObject *)objc_retain(var0);
    v11[0] = v6;
    v11[1] = v7;
    v8 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v11, 2LL));
    x_payload = self->x_payload;
    self->x_payload = &v8->super;
    objc_release(x_payload);
  }
  else
  {
    v12 = v5;
    v10 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v12, 1LL));
    v7 = self->x_payload;
    self->x_payload = &v10->super;
  }
  objc_release(v7);
  objc_release(v6);
  objc_release(v6);
  objc_release(var0);
}