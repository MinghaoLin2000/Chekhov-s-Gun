-[BrowseService startBrowsing:provenance:]
void __cdecl -[BrowseService startBrowsing:provenance:](BrowseService *self, SEL a2, id a3, unsigned __int64 a4)
{
  NSMutableSet *v6; // x0
  NSMutableSet *entities; // x8
  Browse_Bonjour *v8; // x0
  Browse_Bonjour *bonjour; // x8
  Browse_CUPS *v10; // x0
  Browse_CUPS *cups; // x8
  NSUserDefaults *v12; // x20
  unsigned int v13; // w21
  Browse_NAN *v14; // x0
  Browse_NAN *nan; // x8
  Browse_NAN *v16; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_opt_new(&OBJC_CLASS___NSMutableSet);
  entities = self->_entities;
  self->_entities = v6;
  objc_release(entities);
  if ( !a4 || (a4 & 4) != 0 )
  {
    v8 = -[Browse_Bonjour initWithQueue:](objc_alloc(&OBJC_CLASS___Browse_Bonjour), "initWithQueue:", self->_queue);
    bonjour = self->_bonjour;
    self->_bonjour = v8;
    objc_release(bonjour);
    -[BrowseService _setupBrowser:](self, "_setupBrowser:", self->_bonjour);
    if ( (a4 & 0x10) == 0 )
    {
LABEL_4:
      if ( (a4 & 0x20) != 0 )
        goto LABEL_10;
LABEL_8:
      if ( a4 )
        return;
      v12 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
      v13 = -[NSUserDefaults boolForKey:](v12, "boolForKey:", CFSTR("PrintKitBrowseNAN"));
      objc_release(v12);
      if ( !v13 )
        return;
      goto LABEL_10;
    }
  }
  else if ( (a4 & 0x10) == 0 )
  {
    goto LABEL_4;
  }
  v10 = -[Browse_CUPS initWithQueue:](objc_alloc(&OBJC_CLASS___Browse_CUPS), "initWithQueue:", self->_queue);
  cups = self->_cups;
  self->_cups = v10;
  objc_release(cups);
  -[BrowseService _setupBrowser:](self, "_setupBrowser:", self->_cups);
  if ( (a4 & 0x20) == 0 )
    goto LABEL_8;
LABEL_10:
  v14 = -[Browse_NAN initWithQueue:](objc_alloc(&OBJC_CLASS___Browse_NAN), "initWithQueue:", self->_queue);
  nan = self->_nan;
  self->_nan = v14;
  objc_release(nan);
  v16 = self->_nan;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[BrowseService _setupBrowser:](self, "_setupBrowser:", v16);
}