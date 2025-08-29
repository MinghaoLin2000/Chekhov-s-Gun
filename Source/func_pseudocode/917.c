-[AMPCapacityBarView .cxx_destruct]
void __cdecl -[AMPCapacityBarView .cxx_destruct](AMPCapacityBarView *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_displayCategories, 0LL);
  objc_storeStrong((id *)&self->_popoverSizeString, 0LL);
  objc_storeStrong((id *)&self->_popoverLabelString, 0LL);
  objc_storeStrong((id *)&self->_accessibilityLabel, 0LL);
  objc_storeStrong((id *)&self->_categories, 0LL);
  objc_storeStrong((id *)&self->_pop, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_popObjects, 0LL);
}