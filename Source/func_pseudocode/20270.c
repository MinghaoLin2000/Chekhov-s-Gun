-[ipp_t withNewAttr:groupTag:valueTag:apply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t withNewAttr:groupTag:valueTag:apply:](ipp_t *self, SEL a2, id a3, int a4, int a5, id a6)
{
  __int64 v7; // x22
  __int64 v8; // x23
  id v10; // x19
  void (__fastcall **v11)(id, ipp_attribute_t *); // x20
  ipp_attribute_t *v12; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = *(_QWORD *)&a5;
  v8 = *(_QWORD *)&a4;
  v10 = objc_retain(a3);
  v11 = (void (__fastcall **)(id, ipp_attribute_t *))objc_retain(a6);
  v12 = -[ipp_attribute_t initWithName:group:value:](
          objc_alloc(&OBJC_CLASS___ipp_attribute_t),
          "initWithName:group:value:",
          v10,
          v8,
          v7);
  v11[2](v11, v12);
  if ( self->_addAttributesInAppropriateGroups )
    -[ipp_t _addAttrToAppropriateGroup:](self, "_addAttrToAppropriateGroup:", v12);
  else
    -[NSMutableArray addObject:](self->_attrs, "addObject:", v12);
  objc_release(v12);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}