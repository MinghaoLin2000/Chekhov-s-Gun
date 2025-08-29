-[AMPPhotoKitImporter resetCurrentVideoAssetExport]
void __cdecl -[AMPPhotoKitImporter resetCurrentVideoAssetExport](AMPPhotoKitImporter *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[AMPPhotoKitImporter setCurrentAVAssetExportSession:](self, "setCurrentAVAssetExportSession:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[AMPPhotoKitImporter setCurrentPHImageRequestID:](self, "setCurrentPHImageRequestID:", 0LL);
}