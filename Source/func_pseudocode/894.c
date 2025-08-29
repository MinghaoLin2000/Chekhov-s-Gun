-[AMPCapacityBarView showPopover]
void __cdecl -[AMPCapacityBarView showPopover](AMPCapacityBarView *self, SEL a2)
{
  AMPCapacityBarPopover *pop; // x3
  __int64 vars8; // [xsp+28h] [xbp+8h]

  +[NSObject cancelPreviousPerformRequestsWithTarget:selector:object:](
    &OBJC_CLASS___NSObject,
    "cancelPreviousPerformRequestsWithTarget:selector:object:",
    self,
    "_hidePopover:",
    self->_pop);
  +[NSObject cancelPreviousPerformRequestsWithTarget:selector:object:](
    &OBJC_CLASS___NSObject,
    "cancelPreviousPerformRequestsWithTarget:selector:object:",
    self,
    "_showPopover:",
    self->_pop);
  pop = self->_pop;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[AMPCapacityBarView performSelector:withObject:afterDelay:](
    self,
    "performSelector:withObject:afterDelay:",
    "_showPopover:",
    pop,
    0.03);
}