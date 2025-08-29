-[BonjourBrowse_Entity description]
id __cdecl -[BonjourBrowse_Entity description](BonjourBrowse_Entity *self, SEL a2)
{
  nw_txt_record *v3; // x0
  nw_txt_record *v4; // x19
  __CFString *v5; // x20
  const char *bonjour_service_type; // x23
  const char *bonjour_service_domain; // x25
  id v8; // x22
  id v9; // x21
  NSString *v10; // x23
  objc_super v12; // [xsp+30h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v3 = (nw_txt_record *)objc_retainAutoreleasedReturnValue(-[BonjourBrowse_Entity nw_txt_record](self, "nw_txt_record"));
  v4 = v3;
  if ( v3 )
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("(%d keys in txt record"),
             nw_txt_record_get_key_count(v3)));
  else
    v5 = CFSTR("(no txt from browse result)");
  bonjour_service_type = nw_endpoint_get_bonjour_service_type(self->_endpoint);
  bonjour_service_domain = nw_endpoint_get_bonjour_service_domain(self->_endpoint);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___BonjourBrowse_Entity;
  v8 = objc_retainAutoreleasedReturnValue(-[BonjourBrowse_Entity description](&v12, "description"));
  v9 = objc_retainAutoreleasedReturnValue(-[BonjourBrowse_Entity displayName](self, "displayName"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("%@ { %@ / %s / %s (%@) }"),
            v8,
            v9,
            bonjour_service_type,
            bonjour_service_domain,
            v5));
  objc_release(v9);
  objc_release(v8);
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}