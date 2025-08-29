-[SiriNCAlertViewController viewDidLoad]
void __cdecl -[SiriNCAlertViewController viewDidLoad](SiriNCAlertViewController *self, SEL a2)
{
  void *v3; // x19
  __int64 v4; // x0
  id v5; // x22
  void *v6; // x21
  AFUISiriViewController *v7; // x24
  AFUISiriViewController *v8; // x24
  SiriUIHeater *v9; // x24
  AFUISiriViewController *v10; // x25
  void *v11; // x24
  NSLayoutConstraint *v12; // x21
  SiriNCService *v13; // x0
  const char *v14; // x1
  _UNKNOWN **v15; // x27
  void *v16; // x26
  NSNumber *v17; // x28
  NSDictionary *v18; // x22
  NSDictionary *v19; // x23
  NSArray *v20; // x27
  NSArray *v21; // x0
  double v22; // d0
  NSLayoutConstraint *v23; // x19
  void *v24; // x22
  NSDictionary *v25; // x26
  NSArray *v26; // x23
  void *v27; // x23
  NSLayoutConstraint *v28; // x22
  double v29; // d0
  void *v30; // x23
  void *v31; // x22
  void *v32; // x26
  NSArray *v33; // x23
  void *v34; // x22
  double v35; // d0
  NSLayoutConstraint *v36; // x0
  NSLayoutConstraint *siriViewHeightConstraint; // x8
  void *v38; // x22
  NSNumber *v39; // x22
  void *v40; // x26
  __int64 v41; // x0
  const __CFString *v42; // x27
  AFUISiriViewController *v43; // x22
  NSNotificationCenter *v44; // x22
  NSDistributedNotificationCenter *v45; // x22
  NSDistributedNotificationCenter *v46; // x22
  AFUISiriViewController *v47; // x22
  void *v48; // x23
  void *v49; // x27
  SiriNCService *v50; // x20
  void *v51; // [xsp+8h] [xbp-D8h]
  id v52; // [xsp+10h] [xbp-D0h]
  id v53; // [xsp+18h] [xbp-C8h]
  id v54; // [xsp+20h] [xbp-C0h]
  objc_super v55; // [xsp+28h] [xbp-B8h] BYREF
  __int64 v56; // [xsp+38h] [xbp-A8h] BYREF
  NSNumber *v57; // [xsp+40h] [xbp-A0h] BYREF
  const __CFString *v58; // [xsp+48h] [xbp-98h] BYREF
  void *v59; // [xsp+50h] [xbp-90h] BYREF
  const __CFString *v60; // [xsp+58h] [xbp-88h] BYREF
  void *v61; // [xsp+60h] [xbp-80h] BYREF
  const __CFString *v62; // [xsp+68h] [xbp-78h] BYREF
  void *v63; // [xsp+70h] [xbp-70h] BYREF
  const __CFString *v64; // [xsp+78h] [xbp-68h] BYREF
  NSNumber *v65; // [xsp+80h] [xbp-60h] BYREF

  v55.receiver = self;
  v55.super_class = (Class)&OBJC_CLASS___SiriNCAlertViewController;
  -[SiriNCAlertViewController viewDidLoad](&v55, "viewDidLoad");
  v3 = objc_retain(objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view")));
  v4 = objc_opt_class(&OBJC_CLASS___NCCustomAlertBackgroundView);
  v54 = v3;
  if ( (objc_opt_isKindOfClass(v3, v4) & 1) != 0 )
  {
    v5 = objc_retain(v3);
    objc_msgSend(v5, "setDark:", 1LL);
    v54 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "contentView"));
    objc_release(v5);
    objc_release(v5);
  }
  objc_msgSend(v3, "setUserInterfaceLayoutDirection:", (unsigned int)SiriLanguageIsRTL());
  objc_msgSend(v3, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___SiriUIConfiguration), "initAsSystemHostedPresentation:", 1LL);
  v52 = objc_alloc_init((Class)&OBJC_CLASS___AFConnection);
  v53 = v6;
  v7 = objc_retainAutoreleasedReturnValue(
         +[AFUISiriViewController viewControllerWithConnection:configuration:delegate:dataSource:](
           &OBJC_CLASS___AFUISiriViewController,
           "viewControllerWithConnection:configuration:delegate:dataSource:"));
  -[SiriNCAlertViewController setSiriViewController:](self, "setSiriViewController:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[SiriNCAlertViewController addChildViewController:](self, "addChildViewController:", v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController heater](self, "heater"));
  -[SiriUIHeater prepareForUseAfterTimeInterval:](v9, "prepareForUseAfterTimeInterval:", 0.0);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v11 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](v10, "view"));
  objc_release(v10);
  objc_msgSend(v54, "addSubview:positioned:relativeTo:", v11, 1LL, 0LL);
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v11,
            7LL,
            0LL,
            0LL,
            0LL,
            1.0,
            SiriUIWindowWidth(objc_msgSend(v11, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL))));
  v13 = (SiriNCService *)_os_feature_enabled_impl("SiriUI", "compact_siri");
  v15 = &AFDeviceSupportsSystemAssistantExperience_ptr;
  v51 = v3;
  if ( (_DWORD)v13 )
  {
    if ( SiriUIShowSiriInWindow(v13, v14) )
    {
      v16 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
      v64 = CFSTR("padding");
      v17 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", SiriUICloseButtonPadding));
      v65 = v17;
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v65,
                &v64,
                1LL));
      v62 = CFSTR("siriView");
      v63 = v11;
      v19 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v63,
                &v62,
                1LL));
      v20 = objc_retainAutoreleasedReturnValue(
              +[NSLayoutConstraint constraintsWithVisualFormat:options:metrics:views:](
                &OBJC_CLASS___NSLayoutConstraint,
                "constraintsWithVisualFormat:options:metrics:views:",
                CFSTR("H:|-padding-[siriView]-padding-|"),
                0LL,
                v18,
                v19));
      objc_msgSend(v16, "addConstraints:", v20);
      v21 = v20;
      v15 = &AFDeviceSupportsSystemAssistantExperience_ptr;
      objc_release(v21);
      objc_release(v19);
      objc_release(v18);
      objc_release(v17);
      objc_release(v16);
      LODWORD(v22) = 1148846080;
      v23 = v12;
      -[NSLayoutConstraint setPriority:](v12, "setPriority:", v22);
    }
    else
    {
      v27 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
      v28 = objc_retainAutoreleasedReturnValue(
              +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
                &OBJC_CLASS___NSLayoutConstraint,
                "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                v11,
                9LL,
                0LL,
                v27,
                9LL,
                1.0,
                0.0));
      objc_release(v27);
      LODWORD(v29) = 1148846080;
      -[NSLayoutConstraint setPriority:](v28, "setPriority:", v29);
      v30 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
      objc_msgSend(v30, "addConstraint:", v28);
      objc_release(v30);
      objc_release(v28);
      v23 = v12;
    }
    objc_msgSend(v11, "addConstraint:", v23);
  }
  else
  {
    v24 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
    v60 = CFSTR("siriView");
    v61 = v11;
    v25 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v61,
              &v60,
              1LL));
    v26 = objc_retainAutoreleasedReturnValue(
            +[NSLayoutConstraint constraintsWithVisualFormat:options:metrics:views:](
              &OBJC_CLASS___NSLayoutConstraint,
              "constraintsWithVisualFormat:options:metrics:views:",
              CFSTR("H:|[siriView]|"),
              0LL,
              &__NSDictionary0__struct,
              v25));
    objc_msgSend(v24, "addConstraints:", v26);
    objc_release(v26);
    objc_release(v25);
    objc_release(v24);
    v23 = v12;
  }
  v31 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
  v58 = CFSTR("siriView");
  v59 = v11;
  v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15[115], "dictionaryWithObjects:forKeys:count:", &v59, &v58, 1LL));
  v33 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintsWithVisualFormat:options:metrics:views:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintsWithVisualFormat:options:metrics:views:",
            CFSTR("V:|[siriView]|"),
            0LL,
            &__NSDictionary0__struct,
            v32));
  objc_msgSend(v31, "addConstraints:", v33);
  objc_release(v33);
  objc_release(v32);
  objc_release(v31);
  v34 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
  objc_msgSend(v34, "addConstraint:", v23);
  objc_release(v34);
  -[SiriNCAlertViewController _siriMinimumHeight](self, "_siriMinimumHeight");
  v36 = objc_retainAutoreleasedReturnValue(
          +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
            &OBJC_CLASS___NSLayoutConstraint,
            "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
            v11,
            8LL,
            1LL,
            0LL,
            0LL,
            1.0,
            v35));
  siriViewHeightConstraint = self->_siriViewHeightConstraint;
  self->_siriViewHeightConstraint = v36;
  objc_release(siriViewHeightConstraint);
  v38 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController view](self, "view"));
  objc_msgSend(v38, "addConstraint:", self->_siriViewHeightConstraint);
  objc_release(v38);
  objc_msgSend(v11, "setMode:", 1LL);
  v56 = AFUIPresentationPropertiesSupportsTouchKey;
  v39 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1LL));
  v57 = v39;
  v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15[115], "dictionaryWithObjects:forKeys:count:", &v57, &v56, 1LL));
  objc_release(v39);
  if ( (unsigned int)AFDeviceSupportsSystemAssistantExperience(v41) )
  {
    if ( (unsigned int)_os_feature_enabled_impl("SiriUI", "sae_use_container") )
      v42 = CFSTR("com.apple.siri.SystemAssistantExperience");
    else
      v42 = CFSTR("com.apple.siri.SystemAssistantExperience-Old");
  }
  else
  {
    v42 = CFSTR("com.apple.siri.Compact");
  }
  v43 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  -[AFUISiriViewController showPresentationWithIdentifier:properties:](
    v43,
    "showPresentationWithIdentifier:properties:",
    v42,
    v40);
  objc_release(v43);
  v44 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v44,
    "addObserver:selector:name:object:",
    self,
    "_localeChanged:",
    NSCurrentLocaleDidChangeNotification,
    0LL);
  objc_release(v44);
  v45 = objc_retainAutoreleasedReturnValue(
          +[NSDistributedNotificationCenter defaultCenter](
            &OBJC_CLASS___NSDistributedNotificationCenter,
            "defaultCenter"));
  -[NSDistributedNotificationCenter addObserver:selector:name:object:suspensionBehavior:](
    v45,
    "addObserver:selector:name:object:suspensionBehavior:",
    self,
    "respondToSheildRaisedNotification:",
    CFSTR("com.apple.shieldWindowRaised"),
    0LL,
    4LL);
  objc_release(v45);
  v46 = objc_retainAutoreleasedReturnValue(
          +[NSDistributedNotificationCenter defaultCenter](
            &OBJC_CLASS___NSDistributedNotificationCenter,
            "defaultCenter"));
  -[NSDistributedNotificationCenter addObserver:selector:name:object:suspensionBehavior:](
    v46,
    "addObserver:selector:name:object:suspensionBehavior:",
    self,
    "respondToSheildLoweredNotification:",
    CFSTR("com.apple.shieldWindowLowered"),
    0LL,
    4LL);
  objc_release(v46);
  v47 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v48 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](v47, "view"));
  v49 = objc_retainAutoreleasedReturnValue(objc_msgSend(v48, "statusView"));
  v50 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController service](self, "service"));
  objc_msgSend(v49, "setTextInputFieldViewTransferDelegate:", v50);
  objc_release(v50);
  objc_release(v49);
  objc_release(v48);
  objc_release(v47);
  objc_release(v40);
  objc_release(v23);
  objc_release(v11);
  objc_release(v52);
  objc_release(v53);
  objc_release(v54);
  objc_release(v51);
}