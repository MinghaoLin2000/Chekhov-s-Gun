-[PAMediaConversionServiceImageConversionJob hasLivePhotoSourceURLs]
bool __cdecl -[PAMediaConversionServiceImageConversionJob hasLivePhotoSourceURLs](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  PAMediaConversionServiceResourceURLCollection *v2; // x20
  NSArray *v3; // x21
  unsigned __int8 v4; // w19
  _QWORD v6[2]; // [xsp+8h] [xbp-38h] BYREF

  v2 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](self, "sourceResourceURLCollection"));
  v6[0] = CFSTR("PAMediaConversionResourceRoleMainResource");
  v6[1] = CFSTR("PAMediaConversionResourceRoleVideoComplement");
  v3 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v6, 2LL));
  v4 = -[PAMediaConversionServiceResourceURLCollection containsAllRoles:](v2, "containsAllRoles:", v3);
  objc_release(v3);
  objc_release(v2);
  return v4;
}