-[BrowseService updateEntity:]
void __cdecl -[BrowseService updateEntity:](BrowseService *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  -[BrowseService removeEntity:](self, "removeEntity:", v4);
  -[BrowseService addEntity:](self, "addEntity:", v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}