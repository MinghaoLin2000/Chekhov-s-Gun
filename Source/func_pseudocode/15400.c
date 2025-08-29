-[UARPUpdaterDisplayControllerDelegate getErrorMessage:size:]
id __cdecl -[UARPUpdaterDisplayControllerDelegate getErrorMessage:size:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        int a3,
        signed __int64 a4)
{
  id v7; // x19
  void *v8; // x20
  __CFString *v9; // x22
  id v10; // x21
  NSString *v11; // x23
  const __CFString *v12; // x2
  const __CFString *v13; // x2
  void *v15; // [xsp+8h] [xbp-38h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = objc_retainAutoreleasedReturnValue(
         -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
           self,
           "localizedStringForKey:",
           CFSTR("Apple Studio Display")));
  v8 = (void *)MGGetStringAnswer(CFSTR("device-name-localized"));
  v9 = &stru_100020E10;
  switch ( a3 )
  {
    case 0:
      v10 = objc_retainAutoreleasedReturnValue(
              -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
                self,
                "localizedStringForKey:",
                CFSTR("DISK_SPACE_ERROR")));
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSByteCountFormatter stringFromByteCount:countStyle:](
                &OBJC_CLASS___NSByteCountFormatter,
                "stringFromByteCount:countStyle:",
                a4,
                0LL));
      v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v10, v7, v11));
      objc_release(v11);
      goto LABEL_12;
    case 1:
      v12 = CFSTR("NETWORK_CONNECTION_ERROR");
      goto LABEL_10;
    case 2:
      v12 = CFSTR("DEVICE_CONNECTION_ERROR");
      goto LABEL_10;
    case 3:
      v12 = CFSTR("SOFTWARE_ERROR");
      goto LABEL_10;
    case 4:
      v12 = CFSTR("BOOT_ERROR");
LABEL_10:
      v10 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](self, "localizedStringForKey:", v12));
      v15 = v8;
      goto LABEL_11;
    case 5:
      v13 = CFSTR("NO_UPDATE_ERROR");
      goto LABEL_8;
    case 7:
      goto LABEL_13;
    default:
      v13 = CFSTR("GENERAL_ERROR");
LABEL_8:
      v10 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](self, "localizedStringForKey:", v13));
LABEL_11:
      v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v10, v7, v15));
LABEL_12:
      objc_release(v10);
LABEL_13:
      objc_release(v8);
      objc_release(v7);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return objc_autoreleaseReturnValue(v9);
  }
}