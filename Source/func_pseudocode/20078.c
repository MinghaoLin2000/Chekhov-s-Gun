-[PKNANSubscriber subscriber:lostDiscoveryResultForPublishID:address:]
void __cdecl -[PKNANSubscriber subscriber:lostDiscoveryResultForPublishID:address:](
        PKNANSubscriber *self,
        SEL a2,
        id a3,
        unsigned __int8 a4,
        id a5)
{
  NSString *v7; // x21
  void *v8; // x24
  __int64 v9; // x21
  __int64 v10; // x22
  void *v11; // x26
  void *v12; // x23
  void *v13; // x25
  void *v14; // x27
  void *v15; // x28
  void *v16; // x19
  unsigned __int8 v17; // w20
  id v18; // x23
  id v19; // x21
  dispatch_queue_s *v20; // x20
  void *v21; // x19
  PKNANSubscriber *v22; // [xsp+10h] [xbp-170h]
  id v23; // [xsp+18h] [xbp-168h]
  NSMutableSet *obj; // [xsp+20h] [xbp-160h]
  unsigned int v25; // [xsp+2Ch] [xbp-154h]
  _QWORD block[4]; // [xsp+30h] [xbp-150h] BYREF
  id v27; // [xsp+50h] [xbp-130h]
  id v28; // [xsp+58h] [xbp-128h]
  __int128 v29; // [xsp+60h] [xbp-120h] BYREF
  __int128 v30; // [xsp+70h] [xbp-110h]
  __int128 v31; // [xsp+80h] [xbp-100h]
  __int128 v32; // [xsp+90h] [xbp-F0h]
  _BYTE v33[128]; // [xsp+A0h] [xbp-E0h] BYREF

  v25 = a4;
  v23 = objc_retain(a5);
  v7 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  NSLog(&CFSTR("%@: %@").isa, self, v7);
  objc_release(v7);
  v31 = 0u;
  v32 = 0u;
  v29 = 0u;
  v30 = 0u;
  v22 = self;
  obj = objc_retain(self->_endpoints);
  v8 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
         obj,
         "countByEnumeratingWithState:objects:count:",
         &v29,
         v33,
         16LL);
  if ( v8 )
  {
    v9 = *(_QWORD *)v30;
LABEL_3:
    v10 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v30 != v9 )
        objc_enumerationMutation(obj);
      v11 = *(void **)(*((_QWORD *)&v29 + 1) + 8 * v10);
      v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "discoveryResult"));
      if ( (unsigned int)objc_msgSend(v12, "publishID") == v25 )
      {
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "discoveryResult"));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "publisherAddress"));
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "data"));
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "data"));
        v17 = (unsigned __int8)objc_msgSend(v15, "isEqualToData:", v16);
        objc_release(v16);
        objc_release(v15);
        objc_release(v14);
        objc_release(v13);
        objc_release(v12);
        if ( (v17 & 1) != 0 )
        {
          v18 = objc_retain(v11);
          objc_release(obj);
          if ( !v18 )
            goto LABEL_17;
          v19 = objc_retainAutoreleasedReturnValue(-[PKNANSubscriber endpointLostHandler](v22, "endpointLostHandler"));
          if ( v19 )
          {
            v20 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue(-[PKNANSubscriber queue](v22, "queue"));
            block[0] = _NSConcreteStackBlock;
            block[1] = 3254779904LL;
            block[2] = sub_100031B8C;
            block[3] = &unk_100091950;
            v28 = objc_retain(v19);
            v27 = objc_retain(v18);
            dispatch_async(v20, block);
            objc_release(v20);
            objc_release(v27);
            objc_release(v28);
          }
          -[NSMutableSet removeObject:](v22->_endpoints, "removeObject:", v18);
          objc_release(v19);
          objc_release(v18);
          v21 = v23;
          goto LABEL_18;
        }
      }
      else
      {
        objc_release(v12);
      }
      if ( v8 == (void *)++v10 )
      {
        v8 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
               obj,
               "countByEnumeratingWithState:objects:count:",
               &v29,
               v33,
               16LL);
        if ( v8 )
          goto LABEL_3;
        break;
      }
    }
  }
  objc_release(obj);
LABEL_17:
  v21 = v23;
  NSLog(&CFSTR("Can't find endpoint publish id %d, addr %@").isa, v25, v23);
LABEL_18:
  objc_release(v21);
}