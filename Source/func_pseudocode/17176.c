-[AMRemoteActionServiceViewController loadView]
void __cdecl -[AMRemoteActionServiceViewController loadView](AMRemoteActionServiceViewController *self, SEL a2)
{
  id v4; // x19
  void *v5; // x21
  __int64 v6; // x0
  AMActionLoaderServiceListener *v7; // x24
  id v8; // x23
  NSLayoutConstraint *v9; // x24
  double v10; // d0
  void *v11; // x25
  NSAssertionHandler *v12; // x23
  void *v13; // x24
  NSAssertionHandler *v14; // x26

  v4 = objc_alloc_init((Class)&OBJC_CLASS___NSView);
  objc_msgSend(v4, "setAutoresizingMask:", 2LL);
  objc_msgSend(v4, "setTranslatesAutoresizingMaskIntoConstraints:", 1LL);
  v5 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController hostAppClientParameters](self, "hostAppClientParameters"));
  v6 = objc_opt_class(&OBJC_CLASS___NSUUID);
  if ( (objc_opt_isKindOfClass(v5, v6) & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_10;
  }
  else
  {
    v12 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    v13 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionServiceViewController hostAppClientParameters](self, "hostAppClientParameters"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v12,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionServiceViewController.m"),
      44LL,
      CFSTR("Invalid hostAppClientPrameters: %@!"),
      v13);
    objc_release(v13);
    objc_release(v12);
    if ( !v5 )
      goto LABEL_10;
  }
  v7 = objc_retainAutoreleasedReturnValue(
         +[AMActionLoaderServiceListener sharedServiceListener](
           &OBJC_CLASS___AMActionLoaderServiceListener,
           "sharedServiceListener"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMActionLoaderServiceListener loaderServiceActionForActionUUID:](v7, "loaderServiceActionForActionUUID:", v5));
  objc_release(v7);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
             &OBJC_CLASS___NSLayoutConstraint,
             "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
             v4,
             8LL,
             0LL,
             0LL,
             0LL,
             1.0,
             0.0));
    LODWORD(v10) = 1140473856;
    -[NSLayoutConstraint setPriority:](v9, "setPriority:", v10);
    -[NSLayoutConstraint setActive:](v9, "setActive:", 1LL);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "amAction"));
    if ( !v11 )
    {
      v14 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v14,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("AMRemoteActionServiceViewController.m"),
        64LL,
        CFSTR("Should have amAction!"));
      objc_release(v14);
    }
    -[AMRemoteActionServiceViewController set_loaderServiceAction:](self, "set_loaderServiceAction:", v8);
    objc_msgSend(v8, "setServiceViewController:", self);
    -[AMRemoteActionServiceViewController set_amAction:](self, "set_amAction:", v11);
    -[AMRemoteActionServiceViewController _loadActionViewIntoView:](self, "_loadActionViewIntoView:", v4);
    -[AMRemoteActionServiceViewController setView:](self, "setView:", v4);
    objc_release(v11);
    objc_release(v9);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    sub_100011DB8(self, v5);
  }
  objc_release(v8);
LABEL_10:
  objc_release(v5);
  objc_release(v4);
}