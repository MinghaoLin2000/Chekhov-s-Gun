-[AMPCapacityBarView awakeFromNib]
void __cdecl -[AMPCapacityBarView awakeFromNib](AMPCapacityBarView *self, SEL a2)
{
  NSMutableArray *v3; // x0
  NSMutableArray *categories; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = (NSMutableArray *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", 16LL);
  categories = self->_categories;
  self->_categories = v3;
  objc_release(categories);
  self->_isCalculating = 1;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[AMPCapacityBarView createPopover](self, "createPopover");
}