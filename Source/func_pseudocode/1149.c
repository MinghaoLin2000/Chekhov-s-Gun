-[DeviceSettingsPhotosViewController albumIDWithIdentifier:]
unsigned __int64 __cdecl -[DeviceSettingsPhotosViewController albumIDWithIdentifier:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  unsigned int v5; // w21
  id v6; // x20
  const char *v7; // x19
  CC_LONG v8; // w0
  unsigned __int64 v9; // x8
  unsigned __int8 md[16]; // [xsp+8h] [xbp-38h] BYREF

  v4 = objc_retain(a3);
  v5 = -[DeviceSettingsPhotosViewController isEnglishUUIDText:](self, "isEnglishUUIDText:", v4);
  v6 = objc_retainAutorelease(v4);
  v7 = (const char *)objc_msgSend(v6, "UTF8String");
  objc_release(v6);
  if ( v5 )
  {
    v8 = strlen(v7);
    CC_MD5(v7, v8, md);
    v9 = *(_QWORD *)md;
  }
  else
  {
    v9 = *(_QWORD *)v7;
  }
  return bswap64(v9);
}