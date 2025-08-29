-[BackgroundAssetConsentViewController initWithDelegate:]
BackgroundAssetConsentViewController *__cdecl -[BackgroundAssetConsentViewController initWithDelegate:](
        BackgroundAssetConsentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  BackgroundAssetConsentViewController *v5; // x0
  BackgroundAssetConsentViewController *v6; // x20
  id v7; // x21
  ASBackgroundAssetConsentViewController *v8; // x22
  __int64 v10; // [xsp+0h] [xbp-60h] BYREF
  id v11; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF
  objc_super v13; // [xsp+30h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___BackgroundAssetConsentViewController;
  v5 = -[BackgroundAssetConsentViewController initWithNibName:bundle:](&v13, "initWithNibName:bundle:", 0LL, 0LL);
  v6 = v5;
  if ( v5 )
  {
    objc_storeWeak((id *)&v5->_delegate, v4);
    v7 = objc_alloc_init((Class)&OBJC_CLASS___ASBackgroundAssetConsentViewController);
    -[BackgroundAssetConsentViewController setConsentViewController:](v6, "setConsentViewController:", v7);
    objc_release(v7);
    objc_initWeak(&location, v6);
    objc_copyWeak(&v11, &location);
    v8 = objc_retainAutoreleasedReturnValue(
           -[BackgroundAssetConsentViewController consentViewController](
             v6,
             "consentViewController",
             _NSConcreteStackBlock,
             3254779904LL,
             sub_10000BF24,
             &unk_100010AD8));
    -[ASBackgroundAssetConsentViewController setResponseBlock:](v8, "setResponseBlock:", &v10);
    objc_release(v8);
    objc_destroyWeak(&v11);
    objc_destroyWeak(&location);
  }
  objc_release(v4);
  return v6;
}