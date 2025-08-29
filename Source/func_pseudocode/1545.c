-[DeviceFooterViewController updateProgressStringWithLocalizedDescription:localizedAdditionalDescription:isPrimaryProgress:]
void __cdecl -[DeviceFooterViewController updateProgressStringWithLocalizedDescription:localizedAdditionalDescription:isPrimaryProgress:](
        DeviceFooterViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  _BOOL4 v5; // w23
  unsigned __int64 v8; // x19
  unsigned __int64 v9; // x0
  void *v10; // x20
  __CFString *v11; // x21
  NSString *v12; // x0
  unsigned int v13; // w25
  NSProgress *v14; // x23
  NSString *v15; // x24
  int v16; // w27
  int v17; // w26
  int v18; // w28
  NSTextField *v19; // x25
  NSTextField *v20; // x23
  void *v21; // x24
  void *v22; // x26
  NSTextField *v23; // x25
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v5 = a5;
  v8 = (unsigned __int64)objc_retain(a3);
  v9 = (unsigned __int64)objc_retain(a4);
  v10 = (void *)v9;
  if ( v8 | v9 )
  {
    if ( v8 && (v9 = v8, v10) )
      v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ – %@"), v8, v10));
    else
      v12 = (NSString *)objc_retain((id)v9);
    v11 = (__CFString *)v12;
    if ( v5 )
      goto LABEL_3;
LABEL_9:
    -[DeviceFooterViewController setLastSecondaryProgressDescriptionString:](
      self,
      "setLastSecondaryProgressDescriptionString:",
      v11);
    goto LABEL_10;
  }
  v11 = &stru_1000BA220;
  if ( !v5 )
    goto LABEL_9;
LABEL_3:
  -[DeviceFooterViewController setLastPrimaryProgressDescriptionString:](
    self,
    "setLastPrimaryProgressDescriptionString:",
    v11);
LABEL_10:
  v13 = -[DeviceFooterViewController isHoveringOverProgress](self, "isHoveringOverProgress");
  if ( (v13 & 1) != 0
    || (v14 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"))) == 0LL )
  {
    v15 = objc_retainAutoreleasedReturnValue(
            -[DeviceFooterViewController lastSecondaryProgressDescriptionString](
              self,
              "lastSecondaryProgressDescriptionString"));
    v14 = 0LL;
    v18 = 0;
    v17 = v13 ^ 1;
    v16 = 1;
  }
  else
  {
    v15 = objc_retainAutoreleasedReturnValue(
            -[DeviceFooterViewController lastPrimaryProgressDescriptionString](
              self,
              "lastPrimaryProgressDescriptionString"));
    v16 = 0;
    v17 = 1;
    v18 = 1;
  }
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  -[NSTextField setStringValue:](v19, "setStringValue:", v15);
  objc_release(v19);
  if ( v18 )
  {
    objc_release(v15);
    if ( !v16 )
      goto LABEL_16;
  }
  else if ( !v16 )
  {
LABEL_16:
    if ( !v17 )
      goto LABEL_18;
    goto LABEL_17;
  }
  objc_release(v15);
  if ( v17 )
LABEL_17:
    objc_release(v14);
LABEL_18:
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  v21 = objc_retainAutoreleasedReturnValue(-[NSTextField stringValue](v20, "stringValue"));
  v22 = objc_msgSend(v21, "isEqualToString:", &stru_1000BA220);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController progressTextField](self, "progressTextField"));
  -[NSTextField setHidden:](v23, "setHidden:", v22);
  objc_release(v23);
  objc_release(v21);
  objc_release(v20);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release((id)v8);
}