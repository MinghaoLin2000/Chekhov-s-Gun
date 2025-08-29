-[SiriNCService _installSiriViewController:intoViewService:]
void __cdecl -[SiriNCService _installSiriViewController:intoViewService:](SiriNCService *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x0
  void *v7; // x20
  void *v8; // x21
  void *v9; // x22
  NSDictionary *v10; // x24
  NSArray *v11; // x23
  NSDictionary *v12; // x24
  NSArray *v13; // x23
  void *v14; // x23
  __int64 v15; // x21
  void *v16; // x23
  const __CFString *v17; // [xsp+8h] [xbp-78h] BYREF
  void *v18; // [xsp+10h] [xbp-70h] BYREF
  const __CFString *v19; // [xsp+18h] [xbp-68h] BYREF
  void *v20; // [xsp+20h] [xbp-60h] BYREF

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = v6;
  if ( v6 )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "rootContainer"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "view"));
    objc_msgSend(v9, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
    objc_msgSend(v9, "removeFromSuperview");
    objc_msgSend(v8, "addSubview:", v9);
    v19 = CFSTR("av");
    v20 = v9;
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v20,
              &v19,
              1LL));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSLayoutConstraint constraintsWithVisualFormat:options:metrics:views:](
              &OBJC_CLASS___NSLayoutConstraint,
              "constraintsWithVisualFormat:options:metrics:views:",
              CFSTR("H:|-(0)-[av]-(0)-|"),
              0LL,
              0LL,
              v10));
    objc_msgSend(v8, "addConstraints:", v11);
    objc_release(v11);
    objc_release(v10);
    v17 = CFSTR("av");
    v18 = v9;
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v18,
              &v17,
              1LL));
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSLayoutConstraint constraintsWithVisualFormat:options:metrics:views:](
              &OBJC_CLASS___NSLayoutConstraint,
              "constraintsWithVisualFormat:options:metrics:views:",
              CFSTR("V:|-(0)-[av]-(0)-|"),
              0LL,
              0LL,
              v12));
    objc_msgSend(v8, "addConstraints:", v13);
    objc_release(v13);
    objc_release(v12);
    if ( +[CATransaction disableActions](&OBJC_CLASS___CATransaction, "disableActions") )
    {
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "window"));
      objc_msgSend(v14, "layoutIfNeeded");
      objc_release(v14);
    }
    else
    {
      +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 1LL);
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "window"));
      objc_msgSend(v16, "layoutIfNeeded");
      objc_release(v16);
      +[CATransaction setDisableActions:](&OBJC_CLASS___CATransaction, "setDisableActions:", 0LL);
    }
    objc_release(v9);
    objc_release(v8);
  }
  else
  {
    v15 = AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
      sub_100012AFC(v15);
  }
  objc_release(v7);
  objc_release(v5);
}