-[NSArray tsu_enumerateSnapshotObjectsUsingBlock:]
void __cdecl -[NSArray tsu_enumerateSnapshotObjectsUsingBlock:](NSArray *self, SEL a2, id a3)
{
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = -[NSArray copy](self, "copy");
  objc_msgSend(v4, "enumerateObjectsUsingBlock:", a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}