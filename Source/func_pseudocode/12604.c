-[TSUUUIDPath UUIDPathByAppendingUUID:]
id __cdecl -[TSUUUIDPath UUIDPathByAppendingUUID:](TSUUUIDPath *self, SEL a2, id a3)
{
  NSArray *v3; // x19
  TSUUUIDPath *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSArray arrayByAddingObject:](self->_uuids, "arrayByAddingObject:", a3));
  v4 = -[TSUUUIDPath initWithArray:](objc_alloc(&OBJC_CLASS___TSUUUIDPath), "initWithArray:", v3);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}