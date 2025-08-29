-[ProgressViewController setProgress:]
void __cdecl -[ProgressViewController setProgress:](ProgressViewController *self, SEL a2, id a3)
{
  id v5; // x19
  id *p_progress; // x21
  NSProgressIndicator *v7; // x23
  id v8; // x23
  NSString *v9; // x24
  void *v10; // x23
  id v11; // x0
  id v12; // x22
  NSString *v13; // x23
  void *v14; // x21
  NSProgressIndicator *v15; // x21
  NSProgressIndicator *v16; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a3);
  p_progress = (id *)&self->_progress;
  if ( self->_progress )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[ProgressViewController progressBar](self, "progressBar"));
    -[NSProgressIndicator stopAnimation:](v7, "stopAnimation:", 0LL);
    objc_release(v7);
    v8 = *p_progress;
    v9 = objc_retainAutoreleasedReturnValue(NSStringFromSelector("fractionCompleted"));
    objc_msgSend(v8, "removeObserver:forKeyPath:", self, v9);
    objc_release(v9);
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(*p_progress, "userInfo"));
    objc_msgSend(v10, "removeObserver:forKeyPath:", self, _NSProgressRemoteLocalizedDescriptionKey);
    objc_release(v10);
    v11 = *p_progress;
    *p_progress = 0LL;
    objc_release(v11);
  }
  if ( v5 )
  {
    objc_storeStrong((id *)&self->_progress, a3);
    v12 = *p_progress;
    v13 = objc_retainAutoreleasedReturnValue(NSStringFromSelector("fractionCompleted"));
    objc_msgSend(v12, "addObserver:forKeyPath:options:context:", self, v13, 0LL, 0LL);
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(*p_progress, "userInfo"));
    objc_msgSend(
      v14,
      "addObserver:forKeyPath:options:context:",
      self,
      _NSProgressRemoteLocalizedDescriptionKey,
      1LL,
      0LL);
    objc_release(v14);
    v15 = objc_retainAutoreleasedReturnValue(-[ProgressViewController progressBar](self, "progressBar"));
    -[NSProgressIndicator setIndeterminate:](v15, "setIndeterminate:", 1LL);
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(-[ProgressViewController progressBar](self, "progressBar"));
    -[NSProgressIndicator startAnimation:](v16, "startAnimation:", 0LL);
    objc_release(v16);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}