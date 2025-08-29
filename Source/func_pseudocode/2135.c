-[AMPPhotoKitImporter createRootMediaGroup]
void __cdecl -[AMPPhotoKitImporter createRootMediaGroup](AMPPhotoKitImporter *self, SEL a2)
{
  AMPPHMediaGroup *v3; // x21
  id v4; // x19
  AMPPHMediaGroup *v5; // x21
  NSDictionary *v6; // x19
  NSArray *v7; // x21
  AMPPHMediaGroup *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc(&OBJC_CLASS___AMPPHMediaGroup);
  v4 = objc_retainAutoreleasedReturnValue((id)sub_10004C2D4(CFSTR("All Photos")));
  v5 = -[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:](
         v3,
         "initWithName:uuid:mediaLibraryTypeIdentifier:",
         v4,
         CFSTR("allPhotosAlbum"),
         CFSTR("com.apple.Photos.RootGroup"));
  -[AMPPhotoKitImporter setRootMediaGroup:](self, "setRootMediaGroup:", v5);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter masterImageDictionary](self, "masterImageDictionary"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSDictionary allValues](v6, "allValues"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter rootMediaGroup](self, "rootMediaGroup"));
  -[AMPPHMediaGroup setMediaObjects:](v8, "setMediaObjects:", v7);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}