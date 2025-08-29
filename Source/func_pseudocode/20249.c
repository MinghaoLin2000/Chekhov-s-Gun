-[ipp_attribute_t setNSName:]
void __cdecl -[ipp_attribute_t setNSName:](ipp_attribute_t *self, SEL a2, id a3)
{
  NSString *v4; // x0
  NSString *v5; // x19
  NSString *v6; // x8
  NSString *x_name; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (NSString *)objc_retain(a3);
  v5 = v4;
  if ( v4 )
  {
    v6 = objc_retainAutoreleasedReturnValue(internString(v4));
    x_name = self->x_name;
    self->x_name = v6;
  }
  else
  {
    x_name = self->x_name;
    self->x_name = 0LL;
  }
  objc_release(x_name);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}