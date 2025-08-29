-[DeviceFooterViewController updateProgressDisplay:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceFooterViewController updateProgressDisplay:](DeviceFooterViewController *self, SEL a2, bool a3)
{
  _BOOL8 v3; // x21
  NSProgress *v5; // x0
  NSProgress *v6; // x19
  unsigned int v7; // w23
  NSProgress *v8; // x22
  double v9; // d0
  double v10; // d8
  int v11; // w24
  double v12; // d0
  AMPProgressBarViewController *v13; // x23
  NSDictionary *v14; // x22
  id v15; // x23
  NSDictionary *v16; // x24
  id v17; // x25
  void *v18; // x26
  int v19; // w0
  unsigned __int64 i; // x8
  char v21; // w11
  __int64 v22; // x27
  void *v23; // x28
  char __s[5]; // [xsp+7h] [xbp-69h] BYREF
  unsigned int v25; // [xsp+Ch] [xbp-64h]

  v3 = a3;
  if ( a3 )
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
  else
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
  v6 = v5;
  -[NSProgress fractionCompleted](v5, "fractionCompleted");
  if ( v3 )
    -[DeviceFooterViewController setLastPrimaryProgressFractionCompleted:](
      self,
      "setLastPrimaryProgressFractionCompleted:");
  else
    -[DeviceFooterViewController setLastSecondaryProgressFractionCompleted:](
      self,
      "setLastSecondaryProgressFractionCompleted:");
  v7 = -[DeviceFooterViewController isHoveringOverProgress](self, "isHoveringOverProgress");
  if ( (v7 & 1) != 0
    || (v8 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"))) == 0LL )
  {
    v8 = 0LL;
    v11 = v7 ^ 1;
    -[DeviceFooterViewController lastSecondaryProgressFractionCompleted](self, "lastSecondaryProgressFractionCompleted");
    v10 = v12;
  }
  else
  {
    -[DeviceFooterViewController lastPrimaryProgressFractionCompleted](self, "lastPrimaryProgressFractionCompleted");
    v10 = v9;
    v11 = 1;
  }
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressBarViewController](self, "progressBarViewController"));
  -[AMPProgressBarViewController setFractionCompleted:](v13, "setFractionCompleted:", v10);
  objc_release(v13);
  if ( v11 )
    objc_release(v8);
  v14 = objc_retainAutoreleasedReturnValue(-[NSProgress userInfo](v6, "userInfo"));
  v15 = objc_retainAutoreleasedReturnValue(
          -[NSDictionary objectForKeyedSubscript:](
            v14,
            "objectForKeyedSubscript:",
            _NSProgressRemoteLocalizedDescriptionKey));
  v16 = objc_retainAutoreleasedReturnValue(-[NSProgress userInfo](v6, "userInfo"));
  v17 = objc_retain(
          objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v16,
              "objectForKeyedSubscript:",
              _NSProgressRemoteLocalizedAdditionalDescriptionKey)));
  if ( (unsigned int)objc_msgSend(v17, "hasPrefix:", CFSTR("xxxx"))
    && (unsigned __int64)objc_msgSend(v17, "length") >= 8 )
  {
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "substringWithRange:", 4LL, 4LL));
    if ( (unsigned int)objc_msgSend(v18, "getCString:maxLength:encoding:", __s, 5LL, 1LL)
      && (v19 = strlen(__s), v19 >= 1) )
    {
      for ( i = 0LL; i != 4; ++i )
      {
        if ( i >= (unsigned int)v19 )
          v21 = 32;
        else
          v21 = __s[i];
        *((_BYTE *)&v25 + i) = v21;
      }
      v22 = bswap32(v25);
    }
    else
    {
      v22 = 0LL;
    }
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "substringFromIndex:", 8LL));
    objc_release(v18);
    objc_release(v17);
  }
  else
  {
    v22 = 0LL;
    v23 = v17;
  }
  -[DeviceFooterViewController updateProgressStringWithLocalizedDescription:localizedAdditionalDescription:isPrimaryProgress:](
    self,
    "updateProgressStringWithLocalizedDescription:localizedAdditionalDescription:isPrimaryProgress:",
    v15,
    v23,
    v3);
  objc_release(v23);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  -[DeviceFooterViewController setCurrentSyncOperation:](self, "setCurrentSyncOperation:", v22);
  objc_release(v6);
}