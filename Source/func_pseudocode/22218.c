-[QLSatellite description]
id __cdecl -[QLSatellite description](QLSatellite *self, SEL a2)
{
  __int64 v3; // x21
  NSString *v4; // x22
  NSString *v5; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_opt_class(self);
  v4 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](self->_uuid, "UUIDString"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("<%@ %p %@>"), v3, self, v4));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}