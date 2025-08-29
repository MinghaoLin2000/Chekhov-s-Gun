-[AMParametersObserver _parametersChangeObserved]
void __cdecl -[AMParametersObserver _parametersChangeObserved](AMParametersObserver *self, SEL a2)
{
  NSAssertionHandler *v2; // x21
  void *v3; // x22
  NSDictionary *v6; // x20
  void *v7; // x0
  NSDictionary *v8; // x23
  NSDictionary *v9; // x25
  AMAction *v10; // x26
  void *v11; // x27
  unsigned __int8 v12; // w24
  void *v13; // x0
  AMAction *v14; // x20
  void *v15; // x21
  void *v16; // x22
  AMAction *v17; // x20
  void *v18; // x21
  _QWORD v19[5]; // [xsp+0h] [xbp-B0h] BYREF
  _QWORD v20[5]; // [xsp+28h] [xbp-88h] BYREF
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  os_unfair_lock_assert_owner(&self->__lock);
  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v2 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v2,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMParametersObserver.m"),
      168LL,
      CFSTR("Should be on main thread!"));
    objc_release(v2);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _previousParameters](self, "_previousParameters"));
  if ( !v6 )
  {
    v2 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver action](self, "action"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler parameters](v2, "parameters"));
    if ( !v7 )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(v2);
      return;
    }
    v3 = v7;
  }
  v8 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _previousParameters](self, "_previousParameters"));
  if ( !v8 )
  {
    objc_release(0LL);
    if ( !v6 )
    {
      objc_release(v3);
      v6 = (NSDictionary *)v2;
    }
    objc_release(v6);
    goto LABEL_14;
  }
  v9 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _previousParameters](self, "_previousParameters"));
  v10 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver action](self, "action"));
  v11 = objc_retainAutoreleasedReturnValue(-[AMAction parameters](v10, "parameters"));
  v12 = (unsigned __int8)-[NSDictionary isEqual:](v9, "isEqual:", v11);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  if ( v6 )
  {
    v13 = v6;
  }
  else
  {
    objc_release(v3);
    v13 = v2;
  }
  objc_release(v13);
  if ( (v12 & 1) == 0 )
  {
LABEL_14:
    v14 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver action](self, "action"));
    v15 = objc_retainAutoreleasedReturnValue(-[AMAction parameters](v14, "parameters"));
    v16 = objc_msgSend(v15, "copy");
    -[AMParametersObserver _setPreviousParameters:](self, "_setPreviousParameters:", v16);
    objc_release(v16);
    objc_release(v15);
    objc_release(v14);
    v17 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver action](self, "action"));
    v18 = objc_retainAutoreleasedReturnValue(-[AMAction parameters](v17, "parameters"));
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 3254779904LL;
    v20[2] = sub_10000FA74;
    v20[3] = &unk_10001CA38;
    v20[4] = self;
    objc_msgSend(v18, "enumerateKeysAndObjectsUsingBlock:", v20);
    objc_release(v18);
    objc_release(v17);
    v19[0] = _NSConcreteStackBlock;
    v19[1] = 3254779904LL;
    v19[2] = sub_10000FB3C;
    v19[3] = &unk_10001C338;
    v19[4] = self;
    dispatch_async(&_dispatch_main_q, v19);
  }
}