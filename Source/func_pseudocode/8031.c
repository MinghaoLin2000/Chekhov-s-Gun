-[SPCloudStorageHelper exposedServiceIdentifierForServiceIdentifier:]
id __cdecl -[SPCloudStorageHelper exposedServiceIdentifierForServiceIdentifier:](
        SPCloudStorageHelper *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  NSDictionary *v4; // x21
  id v5; // x19
  _QWORD v7[2]; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v8[2]; // [xsp+18h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v7[0] = CFSTR("com.apple.Dataclass.Photos");
  v7[1] = CFSTR("com.apple.Dataclass.Ubiquity");
  v8[0] = CFSTR("SPCloudServiceIdentifieriCloudPhotoLibrary");
  v8[1] = CFSTR("SPCloudServiceIdentifieriCloudDesktopAndDocuments");
  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           v8,
           v7,
           2LL));
  v5 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v4, "objectForKeyedSubscript:", v3));
  objc_release(v3);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}