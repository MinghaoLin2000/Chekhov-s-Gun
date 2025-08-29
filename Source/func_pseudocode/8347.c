-[BackgroundAssetConsentViewController dismissConsentSheet]
void __cdecl -[BackgroundAssetConsentViewController dismissConsentSheet](
        BackgroundAssetConsentViewController *self,
        SEL a2)
{
  ASBackgroundAssetConsentViewController *v3; // x20
  void *v4; // x21
  ASBackgroundAssetConsentViewController *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentViewController consentViewController](self, "consentViewController"));
  v4 = objc_retainAutoreleasedReturnValue(-[ASBackgroundAssetConsentViewController presentingViewController](v3, "presentingViewController"));
  v5 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentViewController consentViewController](self, "consentViewController"));
  objc_msgSend(v4, "dismissViewController:", v5);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}