-[TrackListViewController toggleTableColumn:]
void __cdecl -[TrackListViewController toggleTableColumn:](TrackListViewController *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "representedObject"));
  objc_msgSend(v3, "setState:", objc_msgSend(v3, "state") != (void *)1);
  objc_msgSend(v4, "setHidden:", objc_msgSend(v3, "state") == 0LL);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}