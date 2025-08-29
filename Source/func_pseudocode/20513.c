-[BrowseService removeEntity:]
void __cdecl -[BrowseService removeEntity:](BrowseService *self, SEL a2, id a3)
{
  id v4; // x19
  PrintInfoSet *browseInfos; // x22
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( (unsigned int)-[NSMutableSet containsObject:](self->_entities, "containsObject:", v4) )
  {
    -[NSMutableSet removeObject:](self->_entities, "removeObject:", v4);
    browseInfos = self->_browseInfos;
    if ( browseInfos )
    {
      v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "browseInfo"));
      -[PrintInfoSet removeInfo:](browseInfos, "removeInfo:", v6);
      objc_release(v6);
    }
    -[BrowseService _checkSync](self, "_checkSync");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}