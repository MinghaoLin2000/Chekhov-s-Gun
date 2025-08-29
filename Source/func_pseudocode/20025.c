-[BonjourBrowse_Entity nw_txt_record]
id __cdecl -[BonjourBrowse_Entity nw_txt_record](BonjourBrowse_Entity *self, SEL a2)
{
  nw_txt_record_t v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( self->_browseResult )
    v2 = nw_browse_result_copy_txt_record_object(self->_browseResult);
  else
    v2 = nw_endpoint_copy_txt_record(self->_endpoint);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}