-[BonjourBrowse_Entity txtRecordDictionary]
id __cdecl -[BonjourBrowse_Entity txtRecordDictionary](BonjourBrowse_Entity *self, SEL a2)
{
  id v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[BonjourBrowse_Entity nw_txt_record](self, "nw_txt_record"));
  v3 = objc_retainAutoreleasedReturnValue(
         +[PKTXTRecord txtRecordDictionaryForTxtRecord:](
           &OBJC_CLASS___PKTXTRecord,
           "txtRecordDictionaryForTxtRecord:",
           v2));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}