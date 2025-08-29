-[AMPProgressBarViewController setFractionCompleted:]
void __cdecl -[AMPProgressBarViewController setFractionCompleted:](
        AMPProgressBarViewController *self,
        SEL a2,
        double a3)
{
  AMPProgressBarView *v5; // x20
  NSTimer *v6; // x20
  AMPProgressBarView *v7; // x19
  NSTimer *v8; // x20
  NSTimer *v9; // x0
  NSTimer *indeterminateTimer; // x8
  _QWORD v11[5]; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController progressBarView](self, "progressBarView"));
  -[AMPProgressBarView setFractionCompleted:](v5, "setFractionCompleted:", a3);
  objc_release(v5);
  if ( a3 <= 0.0 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController indeterminateTimer](self, "indeterminateTimer"));
    -[NSTimer invalidate](v8, "invalidate");
    objc_release(v8);
    -[AMPProgressBarViewController setIndeterminateTimer:](self, "setIndeterminateTimer:", 0LL);
    v7 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController progressBarView](self, "progressBarView"));
    -[AMPProgressBarView startIndeterminateAnimation](v7, "startIndeterminateAnimation");
    goto LABEL_5;
  }
  if ( a3 < 1.0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController indeterminateTimer](self, "indeterminateTimer"));
    -[NSTimer invalidate](v6, "invalidate");
    objc_release(v6);
    -[AMPProgressBarViewController setIndeterminateTimer:](self, "setIndeterminateTimer:", 0LL);
    v7 = objc_retainAutoreleasedReturnValue(-[AMPProgressBarViewController progressBarView](self, "progressBarView"));
    -[AMPProgressBarView stopIndeterminateAnimation](v7, "stopIndeterminateAnimation");
LABEL_5:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v7);
    return;
  }
  if ( !self->_indeterminateTimer )
  {
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_100069E08;
    v11[3] = &unk_1000BA048;
    v11[4] = self;
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSTimer scheduledTimerWithTimeInterval:repeats:block:](
             &OBJC_CLASS___NSTimer,
             "scheduledTimerWithTimeInterval:repeats:block:",
             0LL,
             v11,
             1.0));
    indeterminateTimer = self->_indeterminateTimer;
    self->_indeterminateTimer = v9;
    objc_release(indeterminateTimer);
  }
}