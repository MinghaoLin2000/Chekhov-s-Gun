-[ipp_t _withGroupingBehavior:]
void __cdecl -[ipp_t _withGroupingBehavior:](ipp_t *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, ipp_t *); // x19
  bool addAttributesInAppropriateGroups; // w21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (void (__fastcall **)(id, ipp_t *))objc_retain(a3);
  addAttributesInAppropriateGroups = self->_addAttributesInAppropriateGroups;
  self->_addAttributesInAppropriateGroups = 1;
  v4[2](v4, self);
  self->_addAttributesInAppropriateGroups = addAttributesInAppropriateGroups;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}