+[TSPTemporaryObjectContextDelegate temporaryObjectContextDelegateWithPackageDataForWrite:additionalDocumentPropertiesForWrite:]
id __cdecl +[TSPTemporaryObjectContextDelegate temporaryObjectContextDelegateWithPackageDataForWrite:additionalDocumentPropertiesForWrite:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x20
  TSPTemporaryObjectContextDelegateWithPackageDataForWrite *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = -[TSPTemporaryObjectContextDelegateWithPackageDataForWrite initWithPackageDataForWrite:additionalDocumentPropertiesForWrite:](
         objc_alloc(&OBJC_CLASS___TSPTemporaryObjectContextDelegateWithPackageDataForWrite),
         "initWithPackageDataForWrite:additionalDocumentPropertiesForWrite:",
         v5,
         v6);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}