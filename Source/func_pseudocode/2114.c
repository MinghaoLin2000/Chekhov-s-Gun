-[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:]
AMPPHMediaGroup *__cdecl -[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:](
        AMPPHMediaGroup *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  id v11; // x21
  AMPPHMediaGroup *v12; // x0
  AMPPHMediaGroup *v13; // x23
  NSMutableArray *v14; // x0
  NSMutableArray *childGroups; // x8
  objc_super v17; // [xsp+0h] [xbp-50h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___AMPPHMediaGroup;
  v12 = -[AMPPHMediaGroup init](&v17, "init");
  v13 = v12;
  if ( v12 )
  {
    objc_storeStrong((id *)&v12->_name, a3);
    objc_storeStrong((id *)&v13->_identifier, a4);
    objc_storeStrong((id *)&v13->_mediaLibraryTypeIdentifier, a5);
    v14 = (NSMutableArray *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    childGroups = v13->_childGroups;
    v13->_childGroups = v14;
    objc_release(childGroups);
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  return v13;
}