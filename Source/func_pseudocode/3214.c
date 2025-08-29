+[MediaPickerNode mediaPickerNode]
id __cdecl +[MediaPickerNode mediaPickerNode](id a1, SEL a2)
{
  MediaPickerNode *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = objc_alloc_init(&OBJC_CLASS___MediaPickerNode);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}