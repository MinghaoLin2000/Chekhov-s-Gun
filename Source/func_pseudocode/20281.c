-[ipp_t _deleteAttribute:]
void __cdecl -[ipp_t _deleteAttribute:](ipp_t *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = -[NSMutableArray indexOfObject:](self->_attrs, "indexOfObject:", v4);
  if ( v5 != (void *)0x7FFFFFFFFFFFFFFFLL )
    -[NSMutableArray removeObjectAtIndex:](self->_attrs, "removeObjectAtIndex:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}