-[iWorkFileFormat prepareFileForUploadingAtURL:originalURLExtension:inDirectory:destinationSandboxExtension:completionHandler:]
id __cdecl -[iWorkFileFormat prepareFileForUploadingAtURL:originalURLExtension:inDirectory:destinationSandboxExtension:completionHandler:](
        iWorkFileFormat *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v11; // x24
  id v12; // x19
  id v13; // x20
  id v14; // x21
  id v15; // x22
  IWXPCPackageConverter *v16; // x23
  id v17; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v11 = objc_retain(a7);
  v12 = objc_retain(a6);
  v13 = objc_retain(a5);
  v14 = objc_retain(a4);
  v15 = objc_retain(a3);
  v16 = objc_alloc_init(&OBJC_CLASS___IWXPCPackageConverter);
  v17 = objc_retainAutoreleasedReturnValue(
          -[IWXPCPackageConverter prepareFileForUploadingAtURL:originalURLExtension:inDirectory:destinationSandboxExtension:completionHandler:](
            v16,
            "prepareFileForUploadingAtURL:originalURLExtension:inDirectory:destinationSandboxExtension:completionHandler:",
            v15,
            v14,
            v13,
            v12,
            v11));
  objc_release(v11);
  objc_release(v12);
  objc_release(v13);
  objc_release(v14);
  objc_release(v15);
  objc_release(v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v17);
}