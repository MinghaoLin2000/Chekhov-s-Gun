-[BackgroundAssetConsentTask consentSheetConfirmed]
void __cdecl -[BackgroundAssetConsentTask consentSheetConfirmed](BackgroundAssetConsentTask *self, SEL a2)
{
  BackgroundAssetConsentViewController *v3; // x20
  NSWindow *v4; // x20
  void (__fastcall **v5)(id, void *); // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentTask consentViewController](self, "consentViewController"));
  -[BackgroundAssetConsentViewController dismissConsentSheet](v3, "dismissConsentSheet");
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentTask window](self, "window"));
  -[NSWindow close](v4, "close");
  objc_release(v4);
  v5 = (void (__fastcall **)(id, void *))objc_retainAutoreleasedReturnValue(-[BackgroundAssetConsentTask completionBlock](self, "completionBlock"));
  v5[2](v5, &__kCFBooleanTrue);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[BackgroundAssetConsentTask setCompletionBlock:](self, "setCompletionBlock:", 0LL);
}