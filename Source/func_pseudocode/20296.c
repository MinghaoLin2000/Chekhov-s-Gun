-[ipp_collection_t copyWithZone:]
id __cdecl -[ipp_collection_t copyWithZone:](ipp_collection_t *self, SEL a2, _NSZone *a3)
{
  id v4; // x0
  NSMutableArray *attrs; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_alloc((Class)objc_opt_class(self, a2));
  attrs = self->super._attrs;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v4, "_initWithAttrs:", attrs);
}