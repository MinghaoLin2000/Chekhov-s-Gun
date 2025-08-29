-[AMPCapacityBarView hidePopover]
void __cdecl -[AMPCapacityBarView hidePopover](AMPCapacityBarView *self, SEL a2)
{
  AMPCapacityBarPopover *pop; // x3
  __int64 vars8; // [xsp+28h] [xbp+8h]

  +[NSObject cancelPreviousPerformRequestsWithTarget:selector:object:](
    &OBJC_CLASS___NSObject,
    "cancelPreviousPerformRequestsWithTarget:selector:object:",
    self,
    "_hidePopover:",
    self->_pop);
  pop = self->_pop;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[AMPCapacityBarView performSelector:withObject:afterDelay:](
    self,
    "performSelector:withObject:afterDelay:",
    "_hidePopover:",
    pop,
    0.2);
}