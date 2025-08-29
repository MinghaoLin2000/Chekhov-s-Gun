-[WACEAService reconfigureAccessory:withReply:]
void __cdecl -[WACEAService reconfigureAccessory:withReply:](WACEAService *self, SEL a2, id a3, id a4)
{
  id v4; // [xsp+8h] [xbp-498h]
  id v5; // [xsp+10h] [xbp-490h]
  id v6; // [xsp+18h] [xbp-488h]
  unsigned __int8 v7; // [xsp+24h] [xbp-47Ch]
  __int64 v8; // [xsp+30h] [xbp-470h]
  __int64 v9; // [xsp+38h] [xbp-468h]
  __int64 v10; // [xsp+40h] [xbp-460h]
  void *v11; // [xsp+48h] [xbp-458h]
  id v12; // [xsp+58h] [xbp-448h]
  void *v13; // [xsp+60h] [xbp-440h]
  __int64 v14; // [xsp+70h] [xbp-430h]
  __int64 v15; // [xsp+78h] [xbp-428h]
  __int64 v16; // [xsp+80h] [xbp-420h]
  void *v17; // [xsp+88h] [xbp-418h]
  HMHomeManager *v18; // [xsp+90h] [xbp-410h]
  id v19; // [xsp+98h] [xbp-408h]
  void *v20; // [xsp+A8h] [xbp-3F8h]
  id v21; // [xsp+C8h] [xbp-3D8h]
  id v22; // [xsp+D8h] [xbp-3C8h]
  HMHomeManager *v23; // [xsp+E0h] [xbp-3C0h]
  dispatch_queue_s *queue; // [xsp+100h] [xbp-3A0h]
  dispatch_group_s *group; // [xsp+110h] [xbp-390h]
  id v26; // [xsp+118h] [xbp-388h]
  id v27; // [xsp+120h] [xbp-380h]
  id v28; // [xsp+128h] [xbp-378h]
  unsigned __int8 v29; // [xsp+134h] [xbp-36Ch]
  __int64 v30; // [xsp+140h] [xbp-360h]
  __int64 v31; // [xsp+148h] [xbp-358h]
  __int64 v32; // [xsp+150h] [xbp-350h]
  void *v33; // [xsp+158h] [xbp-348h]
  id v35; // [xsp+168h] [xbp-338h]
  HMHomeManager *v36; // [xsp+170h] [xbp-330h]
  id v37; // [xsp+178h] [xbp-328h]
  void *v38; // [xsp+190h] [xbp-310h]
  _QWORD v39[8]; // [xsp+1A0h] [xbp-300h] BYREF
  id v40; // [xsp+1E0h] [xbp-2C0h]
  _QWORD v41[8]; // [xsp+1E8h] [xbp-2B8h] BYREF
  id v42; // [xsp+228h] [xbp-278h]
  int v43; // [xsp+234h] [xbp-26Ch]
  void **v44; // [xsp+238h] [xbp-268h] BYREF
  int v45; // [xsp+240h] [xbp-260h]
  int v46; // [xsp+244h] [xbp-25Ch]
  __int64 (__fastcall *v47)(); // [xsp+248h] [xbp-258h]
  void *v48; // [xsp+250h] [xbp-250h]
  id v49; // [xsp+258h] [xbp-248h] BYREF
  dispatch_time_t timeout; // [xsp+260h] [xbp-240h]
  id v51; // [xsp+268h] [xbp-238h] BYREF
  dispatch_group_t v52; // [xsp+270h] [xbp-230h] BYREF
  void **v53; // [xsp+278h] [xbp-228h] BYREF
  int v54; // [xsp+280h] [xbp-220h]
  int v55; // [xsp+284h] [xbp-21Ch]
  __int64 (__fastcall *v56)(); // [xsp+288h] [xbp-218h]
  void *v57; // [xsp+290h] [xbp-210h]
  id v58; // [xsp+298h] [xbp-208h] BYREF
  _QWORD __b[8]; // [xsp+2A0h] [xbp-200h] BYREF
  id v60; // [xsp+2E0h] [xbp-1C0h]
  id v61; // [xsp+2E8h] [xbp-1B8h] BYREF
  id location[2]; // [xsp+2F0h] [xbp-1B0h] BYREF
  WACEAService *v63; // [xsp+300h] [xbp-1A0h]
  _BYTE v64[128]; // [xsp+308h] [xbp-198h] BYREF
  _BYTE v65[128]; // [xsp+388h] [xbp-118h] BYREF
  _BYTE v66[128]; // [xsp+408h] [xbp-98h] BYREF

  v63 = self;
  location[1] = (id)a2;
  location[0] = 0LL;
  objc_storeStrong(location, a3);
  v61 = 0LL;
  objc_storeStrong(&v61, a4);
  memset(__b, 0, sizeof(__b));
  v36 = objc_retainAutoreleasedReturnValue(-[WACEAService homeManager](v63, "homeManager"));
  v35 = objc_retainAutoreleasedReturnValue(-[HMHomeManager currentHome](v36, "currentHome"));
  v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "accessories"));
  objc_release(v35);
  objc_release(v36);
  v38 = objc_msgSend(v37, "countByEnumeratingWithState:objects:count:", __b, v66, 16LL);
  if ( v38 )
  {
    v31 = *(_QWORD *)__b[2];
    v32 = 0LL;
    v33 = v38;
    while ( 1 )
    {
      v30 = v32;
      if ( *(_QWORD *)__b[2] != v31 )
        objc_enumerationMutation(v37);
      v60 = *(id *)(__b[1] + 8 * v32);
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "deviceIdentifier"));
      v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "stringByReplacingOccurrencesOfString:withString:", CFSTR(":"), &stru_100004188));
      v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(location[0], "uppercaseString"));
      v29 = (unsigned __int8)objc_msgSend(v27, "isEqualToString:");
      objc_release(v26);
      objc_release(v27);
      objc_release(v28);
      if ( (v29 & 1) != 0 )
        break;
      ++v32;
      if ( v30 + 1 >= (unsigned __int64)v33 )
      {
        v32 = 0LL;
        v33 = objc_msgSend(v37, "countByEnumeratingWithState:objects:count:", __b, v66, 16LL);
        if ( !v33 )
          goto LABEL_14;
      }
    }
    if ( objc_msgSend(v60, "accessoryReprovisionState") == (void *)1 )
    {
      v23 = objc_retainAutoreleasedReturnValue(-[WACEAService homeManager](v63, "homeManager"));
      v22 = objc_retainAutoreleasedReturnValue(-[HMHomeManager currentHome](v23, "currentHome"));
      v21 = v60;
      v53 = _NSConcreteStackBlock;
      v54 = -1040187392;
      v55 = 0;
      v56 = __47__WACEAService_reconfigureAccessory_withReply___block_invoke;
      v57 = &__block_descriptor_40_e8_32bs_e17_v16__0__NSError_8l;
      v58 = objc_retain(v61);
      objc_msgSend(v22, "reprovisionAccessory:completionHandler:", v21, &v53);
      objc_release(v22);
      objc_release(v23);
      v52 = dispatch_group_create();
      v51 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
      timeout = dispatch_time(0LL, 60000000000LL);
      group = v52;
      queue = (dispatch_queue_s *)v51;
      v44 = _NSConcreteStackBlock;
      v45 = -1040187392;
      v46 = 0;
      v47 = __47__WACEAService_reconfigureAccessory_withReply___block_invoke_7;
      v48 = &__block_descriptor_40_e8_32s_e5_v8__0l;
      v49 = objc_retain(v60);
      dispatch_group_async(group, queue, &v44);
      dispatch_group_wait(v52, timeout);
      if ( objc_msgSend(v60, "accessoryReprovisionState") )
        (*((void (__fastcall **)(id, __int64, _QWORD))v61 + 2))(v61, 0xFFFFFFFFLL, 0LL);
      else
        (*((void (__fastcall **)(id, _QWORD, _QWORD))v61 + 2))(v61, 0LL, 0LL);
      v43 = 1;
      objc_storeStrong(&v49, 0LL);
      objc_storeStrong(&v51, 0LL);
      objc_storeStrong((id *)&v52, 0LL);
      objc_storeStrong(&v58, 0LL);
    }
    else
    {
      (*((void (**)(void))v61 + 2))();
      v43 = 1;
    }
  }
  else
  {
LABEL_14:
    v43 = 0;
  }
  objc_release(v37);
  if ( !v43 )
  {
    memset(v41, 0, sizeof(v41));
    v18 = objc_retainAutoreleasedReturnValue(-[WACEAService homeManager](v63, "homeManager"));
    v19 = objc_retainAutoreleasedReturnValue(-[HMHomeManager homes](v18, "homes"));
    objc_release(v18);
    v20 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", v41, v65, 16LL);
    if ( v20 )
    {
      v15 = *(_QWORD *)v41[2];
      v16 = 0LL;
      v17 = v20;
      while ( 1 )
      {
        v14 = v16;
        if ( *(_QWORD *)v41[2] != v15 )
          objc_enumerationMutation(v19);
        v42 = *(id *)(v41[1] + 8 * v16);
        memset(v39, 0, sizeof(v39));
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "accessories"));
        v13 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", v39, v64, 16LL);
        if ( v13 )
        {
          v9 = *(_QWORD *)v39[2];
          v10 = 0LL;
          v11 = v13;
          while ( 1 )
          {
            v8 = v10;
            if ( *(_QWORD *)v39[2] != v9 )
              objc_enumerationMutation(v12);
            v40 = *(id *)(v39[1] + 8 * v10);
            v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "deviceIdentifier"));
            v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByReplacingOccurrencesOfString:withString:", CFSTR(":"), &stru_100004188));
            v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(location[0], "uppercaseString"));
            v7 = (unsigned __int8)objc_msgSend(v5, "isEqualToString:");
            objc_release(v4);
            objc_release(v5);
            objc_release(v6);
            if ( (v7 & 1) != 0 )
              break;
            ++v10;
            if ( v8 + 1 >= (unsigned __int64)v11 )
            {
              v10 = 0LL;
              v11 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", v39, v64, 16LL);
              if ( !v11 )
                goto LABEL_28;
            }
          }
          (*((void (__fastcall **)(id, __int64, _QWORD))v61 + 2))(v61, 2LL, 0LL);
          v43 = 1;
        }
        else
        {
LABEL_28:
          v43 = 0;
        }
        objc_release(v12);
        if ( v43 )
          break;
        ++v16;
        if ( v14 + 1 >= (unsigned __int64)v17 )
        {
          v16 = 0LL;
          v17 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", v41, v65, 16LL);
          if ( !v17 )
            goto LABEL_32;
        }
      }
    }
    else
    {
LABEL_32:
      v43 = 0;
    }
    objc_release(v19);
    if ( !v43 )
    {
      (*((void (__fastcall **)(id, __int64, _QWORD))v61 + 2))(v61, 3LL, 0LL);
      v43 = 1;
    }
  }
  objc_storeStrong(&v61, 0LL);
  objc_storeStrong(location, 0LL);
}