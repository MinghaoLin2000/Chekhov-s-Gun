-[BrowseService addEntity:]
void __cdecl -[BrowseService addEntity:](BrowseService *self, SEL a2, id a3)
{
  id v4; // x19
  PrintInfoSet *browseInfos; // x21
  PrintInfoSet *v6; // x0
  PrintInfoSet *v7; // x8
  void *v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( ((unsigned int)-[NSMutableSet containsObject:](self->_entities, "containsObject:", v4) & 1) == 0 )
  {
    -[NSMutableSet addObject:](self->_entities, "addObject:", v4);
    browseInfos = self->_browseInfos;
    if ( !browseInfos )
    {
      v6 = objc_opt_new(&OBJC_CLASS___PrintInfoSet);
      v7 = self->_browseInfos;
      self->_browseInfos = v6;
      objc_release(v7);
      browseInfos = self->_browseInfos;
    }
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "browseInfo"));
    -[PrintInfoSet addInfo:](browseInfos, "addInfo:", v8);
    objc_release(v8);
    -[BrowseService _checkSync](self, "_checkSync");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}