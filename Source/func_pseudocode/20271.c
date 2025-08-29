-[ipp_t addNewEmptyAttribute:groupTag:valueTag:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[ipp_t addNewEmptyAttribute:groupTag:valueTag:](ipp_t *self, SEL a2, id a3, int a4, int a5)
{
  __int64 v5; // x21
  __int64 v6; // x22
  id v8; // x19
  ipp_attribute_t *v9; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = *(_QWORD *)&a5;
  v6 = *(_QWORD *)&a4;
  v8 = objc_retain(a3);
  v9 = -[ipp_attribute_t initWithName:group:value:](
         objc_alloc(&OBJC_CLASS___ipp_attribute_t),
         "initWithName:group:value:",
         v8,
         v6,
         v5);
  if ( self->_addAttributesInAppropriateGroups )
    -[ipp_t _addAttrToAppropriateGroup:](self, "_addAttrToAppropriateGroup:", v9);
  else
    -[NSMutableArray addObject:](self->_attrs, "addObject:", v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}