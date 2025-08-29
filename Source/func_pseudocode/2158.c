-[AMPProgressBarView stopIndeterminateAnimation]
void __cdecl -[AMPProgressBarView stopIndeterminateAnimation](AMPProgressBarView *self, SEL a2)
{
  NSTimer *indeterminateAnimationTimer; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[NSTimer invalidate](self->_indeterminateAnimationTimer, "invalidate");
  indeterminateAnimationTimer = self->_indeterminateAnimationTimer;
  self->_indeterminateAnimationTimer = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(indeterminateAnimationTimer);
}