-[DeviceHeaderViewController deviceDetailsStringForMode:]
id __cdecl -[DeviceHeaderViewController deviceDetailsStringForMode:](
        DeviceHeaderViewController *self,
        SEL a2,
        signed __int64 a3)
{
  __int64 v3; // x29
  __int64 v4; // x30
  __CFString *v5; // x0

  switch ( a3 )
  {
    case 0LL:
      v5 = (__CFString *)objc_retainAutoreleasedReturnValue(
                           -[DeviceHeaderViewController deviceDetailsStringModeDescription](
                             self,
                             "deviceDetailsStringModeDescription",
                             v3));
      goto LABEL_10;
    case 1LL:
      v5 = (__CFString *)objc_retainAutoreleasedReturnValue(
                           -[DeviceHeaderViewController deviceDetailsStringModeSerialModel](
                             self,
                             "deviceDetailsStringModeSerialModel",
                             v3));
      goto LABEL_10;
    case 2LL:
      v5 = (__CFString *)objc_retainAutoreleasedReturnValue(
                           -[DeviceHeaderViewController deviceDetailsStringModeIdentifiers](
                             self,
                             "deviceDetailsStringModeIdentifiers",
                             v3));
      goto LABEL_10;
    case 3LL:
      v5 = (__CFString *)objc_retainAutoreleasedReturnValue(
                           -[DeviceHeaderViewController deviceDetailsStringModePhone1](
                             self,
                             "deviceDetailsStringModePhone1",
                             v3));
      goto LABEL_10;
    case 4LL:
      v5 = (__CFString *)objc_retainAutoreleasedReturnValue(
                           -[DeviceHeaderViewController deviceDetailsStringModePhone2](
                             self,
                             "deviceDetailsStringModePhone2",
                             v3));
LABEL_10:
      if ( ((v4 ^ (2 * v4)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      break;
    default:
      v5 = &stru_1000BA220;
      if ( ((v4 ^ (2 * v4)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      break;
  }
  return objc_autoreleaseReturnValue(v5);
}