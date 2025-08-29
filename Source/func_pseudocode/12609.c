-[TSUUUIDPath isEqual:]
bool __cdecl -[TSUUUIDPath isEqual:](TSUUUIDPath *self, SEL a2, id a3)
{
  _QWORD *v4; // x19
  __int64 v5; // x0
  NSArray *uuids; // x20
  __int64 v7; // x21
  bool v9; // w20
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___TSUUUIDPath);
  if ( (objc_opt_isKindOfClass(v4, v5) & 1) != 0 )
  {
    uuids = self->_uuids;
    v7 = v4[1];
    objc_release(v4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (unsigned __int8)-[NSArray isEqual:](uuids, "isEqual:", v7);
  }
  else
  {
    v10.receiver = self;
    v10.super_class = (Class)&OBJC_CLASS___TSUUUIDPath;
    v9 = -[TSUUUIDPath isEqual:](&v10, "isEqual:", v4);
    objc_release(v4);
    return v9;
  }
}