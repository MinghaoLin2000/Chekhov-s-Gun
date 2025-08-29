-[DeviceFooterViewController observeValueForKeyPath:ofObject:change:context:]
void __cdecl -[DeviceFooterViewController observeValueForKeyPath:ofObject:change:context:](
        DeviceFooterViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        void *a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  NSString *v13; // x24
  unsigned int v14; // w25
  objc_super v15; // [xsp+8h] [xbp-88h] BYREF
  _QWORD block[4]; // [xsp+18h] [xbp-78h] BYREF
  id v17; // [xsp+38h] [xbp-58h]
  id v18; // [xsp+40h] [xbp-50h] BYREF
  id location; // [xsp+48h] [xbp-48h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  if ( ((unsigned int)objc_msgSend(v10, "isEqualToString:", _NSProgressRemoteLocalizedDescriptionKey) & 1) != 0
    || ((unsigned int)objc_msgSend(v10, "isEqualToString:", _NSProgressRemoteLocalizedAdditionalDescriptionKey) & 1) != 0
    || (v13 = objc_retainAutoreleasedReturnValue(NSStringFromSelector("fractionCompleted")),
        v14 = (unsigned int)objc_msgSend(v10, "isEqualToString:", v13),
        objc_release(v13),
        v14) )
  {
    objc_initWeak(&location, self);
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_1000364A4;
    block[3] = &unk_1000B9540;
    objc_copyWeak(&v18, &location);
    v17 = objc_retain(v11);
    dispatch_async(&_dispatch_main_q, block);
    objc_release(v17);
    objc_destroyWeak(&v18);
    objc_destroyWeak(&location);
  }
  else
  {
    v15.receiver = self;
    v15.super_class = (Class)&OBJC_CLASS___DeviceFooterViewController;
    -[DeviceFooterViewController observeValueForKeyPath:ofObject:change:context:](
      &v15,
      "observeValueForKeyPath:ofObject:change:context:",
      v10,
      v11,
      v12,
      a6);
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}