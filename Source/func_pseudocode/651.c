-[FileSharingListItem removeAllChildren]
void __cdecl -[FileSharingListItem removeAllChildren](FileSharingListItem *self, SEL a2)
{
  NSMutableArray *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  -[NSMutableArray removeAllObjects](v2, "removeAllObjects");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}