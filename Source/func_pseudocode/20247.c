-[ipp_attribute_t addNewEmptyValue]
id __cdecl -[ipp_attribute_t addNewEmptyValue](ipp_attribute_t *self, SEL a2)
{
  ipp_value_t *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_opt_new(&OBJC_CLASS___ipp_value_t);
  -[NSMutableArray addObject:](self->_values, "addObject:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}