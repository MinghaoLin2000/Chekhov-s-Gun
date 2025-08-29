-[DeviceSettingsErrorViewController explanationForError:]
id __cdecl -[DeviceSettingsErrorViewController explanationForError:](
        DeviceSettingsErrorViewController *self,
        SEL a2,
        id a3)
{
  __CFString *v3; // x20
  NSBundle *v4; // x0
  NSBundle *v5; // x19
  const __CFString *v6; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = &stru_1000BA220;
  switch ( -[DeviceSettingsErrorViewController mediaDomain](self, "mediaDomain", a3) )
  {
    case 1uLL:
      v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v5 = v4;
      v6 = CFSTR("To fix this, open the Music app.");
      goto LABEL_6;
    case 2uLL:
      v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v5 = v4;
      v6 = CFSTR("To fix this, open the TV app.");
      goto LABEL_6;
    case 4uLL:
      v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v5 = v4;
      v6 = CFSTR("To fix this, open the Podcasts app.");
      goto LABEL_6;
    case 8uLL:
      v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v5 = v4;
      v6 = CFSTR("To fix this, open the Books app.");
LABEL_6:
      v3 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v4,
               "localizedStringForKey:value:table:",
               v6,
               &stru_1000BA220,
               0LL));
      objc_release(v5);
      break;
    default:
      break;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}