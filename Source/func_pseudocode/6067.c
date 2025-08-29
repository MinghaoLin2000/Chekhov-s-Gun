-[PAMediaConversionServiceResourceURLCollectionAccessProvider validateAccessForURL:role:]
id __cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider validateAccessForURL:role:](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  id v7; // x19
  NSURL *v8; // x20
  NSURL *v9; // x22
  PAMediaConversionServiceResourceURLCollectionAccessProvider *v10; // x21
  NSURL *v11; // x23
  NSDictionary *v12; // x22
  NSURL *blastDoorSourceURL; // x0
  id v14; // x22
  NSURL *v15; // x0
  NSURL *v16; // x8
  id v18; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (NSURL *)objc_retain(v6);
  v9 = v8;
  if ( -[PAMediaConversionServiceResourceURLCollectionAccessProvider isBlastDoorAccessRequired](
         self,
         "isBlastDoorAccessRequired") )
  {
    v9 = v8;
    if ( (unsigned int)objc_msgSend(v7, "isEqualToString:", CFSTR("PAMediaConversionResourceRoleMainResource")) )
    {
      v10 = objc_retain(self);
      objc_sync_enter(v10);
      if ( !v10->_blastDoorSourceURL )
      {
        if ( v10->_isImageMedia )
        {
          v18 = 0LL;
          v11 = (NSURL *)objc_retainAutoreleasedReturnValue(
                           -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorURLWithImageSourceURL:properties:](
                             v10,
                             "_blastDoorURLWithImageSourceURL:properties:",
                             v8,
                             &v18));
          v12 = (NSDictionary *)objc_retain(v18);
          blastDoorSourceURL = v10->_blastDoorSourceURL;
          v10->_blastDoorSourceURL = v11;
          objc_release(blastDoorSourceURL);
          -[PAMediaConversionServiceResourceURLCollectionAccessProvider setBlastDoorMainSourceProperties:](
            v10,
            "setBlastDoorMainSourceProperties:",
            v12);
        }
        else
        {
          v14 = objc_retainAutoreleasedReturnValue(
                  -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorMetadataWithSourceURL:](
                    v10,
                    "_blastDoorMetadataWithSourceURL:",
                    v8));
          -[PAMediaConversionServiceResourceURLCollectionAccessProvider setBlastDoorMainSourceProperties:](
            v10,
            "setBlastDoorMainSourceProperties:",
            v14);
          objc_release(v14);
          v12 = objc_retainAutoreleasedReturnValue(
                  -[PAMediaConversionServiceResourceURLCollectionAccessProvider blastDoorMainSourceProperties](
                    v10,
                    "blastDoorMainSourceProperties"));
          v15 = (NSURL *)objc_retainAutoreleasedReturnValue(
                           -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorURLWithVideoSourceURL:sourceMetadata:](
                             v10,
                             "_blastDoorURLWithVideoSourceURL:sourceMetadata:",
                             v8,
                             v12));
          v16 = v10->_blastDoorSourceURL;
          v10->_blastDoorSourceURL = v15;
          objc_release(v16);
        }
        objc_release(v12);
      }
      v9 = objc_retain(v10->_blastDoorSourceURL);
      objc_release(v8);
      objc_sync_exit(v10);
      objc_release(v10);
    }
  }
  objc_release(v7);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}