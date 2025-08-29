-[AMPProgressBarView startIndeterminateAnimation]
void __cdecl -[AMPProgressBarView startIndeterminateAnimation](AMPProgressBarView *self, SEL a2)
{
  NSTimer *v3; // x0
  NSTimer *indeterminateAnimationTimer; // x8
  _QWORD v5[5]; // [xsp+8h] [xbp-38h] BYREF

  if ( !self->_indeterminateAnimationTimer )
  {
    v5[0] = _NSConcreteStackBlock;
    v5[1] = 3254779904LL;
    v5[2] = sub_10004E124;
    v5[3] = &unk_1000B98F8;
    v5[4] = self;
    v3 = objc_retainAutoreleasedReturnValue(
           +[NSTimer scheduledTimerWithTimeInterval:repeats:block:](
             &OBJC_CLASS___NSTimer,
             "scheduledTimerWithTimeInterval:repeats:block:",
             1LL,
             v5,
             0.01));
    indeterminateAnimationTimer = self->_indeterminateAnimationTimer;
    self->_indeterminateAnimationTimer = v3;
    objc_release(indeterminateAnimationTimer);
  }
}