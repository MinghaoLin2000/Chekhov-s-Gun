-[ipp_attribute_t withNewEmptyValue:]
void __cdecl -[ipp_attribute_t withNewEmptyValue:](ipp_attribute_t *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, ipp_value_t *); // x19
  ipp_value_t *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (void (__fastcall **)(id, ipp_value_t *))objc_retain(a3);
  v5 = objc_opt_new(&OBJC_CLASS___ipp_value_t);
  v4[2](v4, v5);
  -[NSMutableArray addObject:](self->_values, "addObject:", v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}