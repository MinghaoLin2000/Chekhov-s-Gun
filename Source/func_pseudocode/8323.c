-[BackgroundAssetConsentTask requestConsentWithCompletion:]
void __cdecl -[BackgroundAssetConsentTask requestConsentWithCompletion:](
        BackgroundAssetConsentTask *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF

  v4 = objc_msgSend(a3, "copy");
  -[BackgroundAssetConsentTask setCompletionBlock:](self, "setCompletionBlock:", v4);
  objc_release(v4);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100009268;
  block[3] = &unk_1000108C8;
  block[4] = self;
  dispatch_async(&_dispatch_main_q, block);
}