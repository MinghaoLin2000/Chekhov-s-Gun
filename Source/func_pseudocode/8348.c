-[BackgroundAssetConsentViewController presentConsentSheet]
void __cdecl -[BackgroundAssetConsentViewController presentConsentSheet](
        BackgroundAssetConsentViewController *self,
        SEL a2)
{
  ASBackgroundAssetConsentViewController *v3; // x20
  void *v4; // x21
  ASBackgroundAssetConsentViewController *v5; // x20
  void *v6; // x21
  void *v7; // x22
  void *v8; // x23
  ASBackgroundAssetConsentViewController *v9; // x20
  void *v10; // x21
  void *v11; // x22
  void *v12; // x23
  ASBackgroundAssetConsentViewController *v13; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentViewController consentViewController](self, "consentViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[ASBackgroundAssetConsentViewController templateView](v3, "templateView"));
  objc_msgSend(v4, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentViewController consentViewController](self, "consentViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[ASBackgroundAssetConsentViewController templateView](v5, "templateView"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "heightAnchor"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "constraintEqualToConstant:", 600.0));
  objc_msgSend(v8, "setActive:", 1LL);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v9 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentViewController consentViewController](self, "consentViewController"));
  v10 = objc_retainAutoreleasedReturnValue(-[ASBackgroundAssetConsentViewController templateView](v9, "templateView"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "widthAnchor"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "constraintEqualToConstant:", 480.0));
  objc_msgSend(v12, "setActive:", 1LL);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v13 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentViewController consentViewController](self, "consentViewController"));
  -[BackgroundAssetConsentViewController presentViewControllerAsSheet:](self, "presentViewControllerAsSheet:", v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}