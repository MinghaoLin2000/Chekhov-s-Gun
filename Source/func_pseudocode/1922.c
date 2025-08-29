-[DeviceSettingsErrorViewController messageForError:]
id __cdecl -[DeviceSettingsErrorViewController messageForError:](
        DeviceSettingsErrorViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  unsigned __int64 v7; // x0
  NSBundle *v8; // x0
  NSBundle *v9; // x20
  const __CFString *v10; // x2
  __CFString *v11; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "domain"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualTo:", NSOSStatusErrorDomain);
  objc_release(v5);
  if ( v6 && objc_msgSend(v4, "code") == (void *)7011 )
  {
    v7 = -[DeviceSettingsErrorViewController mediaDomain](self, "mediaDomain");
    if ( v7 == 2 )
    {
      v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v9 = v8;
      v10 = CFSTR("The TV library could not be found.");
      goto LABEL_12;
    }
    if ( v7 == 1 )
    {
      v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v9 = v8;
      v10 = CFSTR("The Music library could not be found.");
LABEL_12:
      v11 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v8,
                "localizedStringForKey:value:table:",
                v10,
                &stru_1000BA220,
                0LL));
      objc_release(v9);
      goto LABEL_13;
    }
  }
  v11 = &stru_1000BA220;
  switch ( -[DeviceSettingsErrorViewController mediaDomain](self, "mediaDomain") )
  {
    case 1uLL:
      v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v9 = v8;
      v10 = CFSTR("The Music library could not be opened.");
      goto LABEL_12;
    case 2uLL:
      v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v9 = v8;
      v10 = CFSTR("The TV library could not be opened.");
      goto LABEL_12;
    case 4uLL:
      v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v9 = v8;
      v10 = CFSTR("The Podcasts library could not be opened.");
      goto LABEL_12;
    case 8uLL:
      v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v9 = v8;
      v10 = CFSTR("The Books library could not be opened.");
      goto LABEL_12;
    default:
      break;
  }
LABEL_13:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}