-[ipp_value_t setInteger:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_value_t setInteger:](ipp_value_t *self, SEL a2, int a3)
{
  NSNumber *v4; // x0
  NSObject *x_payload; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", *(_QWORD *)&a3));
  x_payload = self->x_payload;
  self->x_payload = &v4->super.super;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(x_payload);
}