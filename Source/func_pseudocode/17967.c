-[WACEAService homeManagerDidUpdateHomes:]
void __cdecl -[WACEAService homeManagerDidUpdateHomes:](WACEAService *self, SEL a2, id a3)
{
  __int64 v3; // [xsp+18h] [xbp-178h]
  __int64 v4; // [xsp+20h] [xbp-170h]
  __int64 v5; // [xsp+28h] [xbp-168h]
  void *v6; // [xsp+30h] [xbp-160h]
  id v7; // [xsp+38h] [xbp-158h]
  id v8; // [xsp+40h] [xbp-150h]
  WACEAService *v9; // [xsp+48h] [xbp-148h]
  HMHome *v10; // [xsp+50h] [xbp-140h]
  id v11; // [xsp+58h] [xbp-138h]
  HMHomeManager *v12; // [xsp+60h] [xbp-130h]
  id obj; // [xsp+68h] [xbp-128h]
  void *v14; // [xsp+78h] [xbp-118h]
  void *v15; // [xsp+90h] [xbp-100h]
  _QWORD __b[8]; // [xsp+98h] [xbp-F8h] BYREF
  id v17; // [xsp+D8h] [xbp-B8h]
  id location[2]; // [xsp+E0h] [xbp-B0h] BYREF
  WACEAService *v19; // [xsp+F0h] [xbp-A0h]
  _BYTE v20[128]; // [xsp+F8h] [xbp-98h] BYREF

  v19 = self;
  location[1] = (id)a2;
  location[0] = 0LL;
  objc_storeStrong(location, a3);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(location[0], "currentHome"));
  objc_release(v15);
  if ( v15 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(location[0], "currentHome"));
    -[WACEAService setCurrentHome:](v19, "setCurrentHome:");
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(location[0], "currentHome"));
    NSLog(&CFSTR("### WAC XPC: Current Home: %@").isa, v8);
    objc_release(v8);
    v9 = v19;
    v10 = objc_retainAutoreleasedReturnValue(-[WACEAService currentHome](v19, "currentHome"));
    -[HMHome setDelegate:](v10, "setDelegate:", v9);
    objc_release(v10);
    memset(__b, 0, sizeof(__b));
    v12 = objc_retainAutoreleasedReturnValue(-[WACEAService homeManager](v19, "homeManager"));
    v11 = objc_retainAutoreleasedReturnValue(-[HMHomeManager primaryHome](v12, "primaryHome"));
    obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "accessories"));
    objc_release(v11);
    objc_release(v12);
    v14 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", __b, v20, 16LL);
    if ( v14 )
    {
      v4 = *(_QWORD *)__b[2];
      v5 = 0LL;
      v6 = v14;
      while ( 1 )
      {
        v3 = v5;
        if ( *(_QWORD *)__b[2] != v4 )
          objc_enumerationMutation(obj);
        v17 = *(id *)(__b[1] + 8 * v5);
        objc_msgSend(v17, "setDelegate:", v19);
        ++v5;
        if ( v3 + 1 >= (unsigned __int64)v6 )
        {
          v5 = 0LL;
          v6 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", __b, v20, 16LL);
          if ( !v6 )
            break;
        }
      }
    }
    objc_release(obj);
  }
  objc_storeStrong(location, 0LL);
}