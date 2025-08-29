-[ipp_attribute_t encodeWithCoder:]
void __cdecl -[ipp_attribute_t encodeWithCoder:](ipp_attribute_t *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *x_name; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  objc_msgSend(v4, "encodeInteger:forKey:", self->_group_tag, CFSTR("_group_tag"));
  objc_msgSend(v4, "encodeInteger:forKey:", self->_value_tag, CFSTR("_value_tag"));
  x_name = self->x_name;
  if ( x_name )
    objc_msgSend(v4, "encodeObject:forKey:", x_name, CFSTR("_name"));
  objc_msgSend(v4, "encodeObject:forKey:", self->_values, CFSTR("_values"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}