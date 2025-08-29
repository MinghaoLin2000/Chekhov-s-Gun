-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        bool a3,
        id a4,
        id a5,
        bool *a6,
        bool a7,
        bool a8)
{
  _BOOL4 v8; // w23
  _BOOL8 v11; // x26
  id v13; // x19
  id v14; // x21
  void *v15; // x3
  unsigned int v16; // w25
  unsigned int v17; // w20
  unsigned int v18; // w8
  unsigned int v19; // w9
  __int64 v20; // x28
  unsigned int v21; // w0
  unsigned int v22; // w25
  int v23; // w27
  int v24; // w21
  char v25; // w24
  int v26; // w19
  OS_os_log *v27; // x20
  void *v28; // x27
  _BOOL4 v29; // w8
  _BOOL4 v30; // w9
  unsigned int v31; // w8
  OS_os_log *log; // x20
  const char *v33; // x3
  os_log_s *v34; // x1
  uint32_t v35; // w5
  OS_os_log *v36; // x20
  _BOOL4 customerAudienceUsed; // w8
  _BOOL4 internalAudienceUsed; // w10
  int notBootedAudienceUses; // w11
  NSMutableSet *v40; // x20
  int v41; // w8
  char v42; // w8
  _BOOL8 v43; // x19
  OS_os_log *v44; // x20
  OS_os_log *v45; // x20
  __int64 v46; // x8
  id v47; // x26
  OS_os_log *v48; // x20
  os_log_s *v49; // x23
  void *v50; // x19
  void *v51; // x24
  void *v52; // x28
  void *v53; // x25
  void *v54; // x20
  void *v55; // x21
  unsigned __int8 v56; // w0
  OS_os_log *v57; // x20
  NSMutableDictionary *v58; // x20
  id v59; // x0
  bool v60; // w19
  void *v61; // x20
  OS_os_log *v62; // x20
  _BOOL4 v63; // w8
  _BOOL4 v64; // w10
  int v65; // w11
  OS_os_log *v67; // x20
  OS_os_log *v68; // x20
  int v69; // w8
  OS_os_log *v70; // x20
  bool *v71; // [xsp+8h] [xbp-D8h]
  void *v72; // [xsp+10h] [xbp-D0h]
  DisplayMobileAssetUpdater *obj; // [xsp+18h] [xbp-C8h]
  NSMutableDictionary *obja; // [xsp+18h] [xbp-C8h]
  NSMutableDictionary *objb; // [xsp+18h] [xbp-C8h]
  _BOOL4 v76; // [xsp+24h] [xbp-BCh]
  id v77; // [xsp+28h] [xbp-B8h]
  unsigned int v78; // [xsp+34h] [xbp-ACh]
  id v79; // [xsp+38h] [xbp-A8h]
  uint8_t buf[4]; // [xsp+40h] [xbp-A0h] BYREF
  const char *v81; // [xsp+44h] [xbp-9Ch]
  __int16 v82; // [xsp+4Ch] [xbp-94h]
  void *v83; // [xsp+4Eh] [xbp-92h]
  __int16 v84; // [xsp+56h] [xbp-8Ah]
  _BYTE v85[10]; // [xsp+58h] [xbp-88h]
  void *v86; // [xsp+62h] [xbp-7Eh]
  _BYTE v87[10]; // [xsp+6Ah] [xbp-76h]
  __int16 v88; // [xsp+74h] [xbp-6Ch]
  _BOOL4 v89; // [xsp+76h] [xbp-6Ah]
  __int16 v90; // [xsp+7Ah] [xbp-66h]
  int v91; // [xsp+7Ch] [xbp-64h]
  __int16 v92; // [xsp+80h] [xbp-60h]
  unsigned int v93; // [xsp+82h] [xbp-5Eh]
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v8 = a8;
  v76 = a7;
  v11 = a3;
  v13 = objc_retain(a4);
  v14 = objc_retain(a5);
  if ( v13 )
    v15 = objc_msgSend(v13, "internal");
  else
    v15 = 0LL;
  v16 = -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
          self,
          "getDefaultBool:defaultValue:",
          CFSTR("InstallInternalVariant"),
          v15);
  v17 = -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
          self,
          "getDefaultBool:defaultValue:",
          CFSTR("UseInternalAudience"),
          0LL);
  v18 = !+[UARPUpdaterDisplayControllerDelegate hostIsInternal](
           &OBJC_CLASS___UARPUpdaterDisplayControllerDelegate,
           "hostIsInternal");
  v19 = v8 & (v17 ^ 1);
  v78 = v16;
  if ( (v16 & 1) != 0 )
    v19 = v18;
  if ( (v18 & 1) != 0 )
    v20 = v18;
  else
    v20 = v19;
  v79 = v13;
  if ( v14 )
  {
    v72 = objc_msgSend(v14, "unsignedLongLongValue");
    obj = objc_retain(self->_mobileAssetCustomerUpdater);
    objc_sync_enter(obj);
    v21 = -[UARPUpdaterDisplayControllerDelegate consentRequested](self, "consentRequested");
    v22 = v21;
    v77 = v14;
    v71 = a6;
    if ( self->_customerAudienceUsed )
    {
      if ( (v20 & 1) != 0 )
      {
        v23 = 0;
        v24 = 0;
        v25 = 1;
        v26 = 1;
LABEL_29:
        if ( v79 )
        {
          if ( (((unsigned int)-[NSMutableSet containsObject:](self->_checkInfo, "containsObject:", v77) | !v76) & 1) == 0 )
          {
            log = self->_log;
            if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 136315394;
              v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
              v82 = 2048;
              v83 = v72;
              v33 = "%s: _checkInfo entry ecid 0x%llx removed by an audience change";
              v34 = log;
              v35 = 22;
LABEL_74:
              _os_log_impl((void *)&_mh_execute_header, v34, OS_LOG_TYPE_DEFAULT, v33, buf, v35);
              goto LABEL_75;
            }
            goto LABEL_75;
          }
        }
        else
        {
          ++self->_notBootedAudienceUses;
        }
        v36 = self->_log;
        if ( os_log_type_enabled(v36, OS_LOG_TYPE_DEFAULT) )
        {
          customerAudienceUsed = self->_customerAudienceUsed;
          internalAudienceUsed = self->_internalAudienceUsed;
          notBootedAudienceUses = self->_notBootedAudienceUses;
          *(_DWORD *)buf = 136317442;
          v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
          v82 = 2048;
          v83 = v72;
          v84 = 1024;
          *(_DWORD *)v85 = v8;
          *(_WORD *)&v85[4] = 1024;
          *(_DWORD *)&v85[6] = v20;
          LOWORD(v86) = 1024;
          *(_DWORD *)((char *)&v86 + 2) = v79 != 0LL;
          HIWORD(v86) = 1024;
          *(_DWORD *)v87 = v26;
          *(_WORD *)&v87[4] = 1024;
          *(_DWORD *)&v87[6] = customerAudienceUsed;
          v88 = 1024;
          v89 = internalAudienceUsed;
          v90 = 1024;
          v91 = notBootedAudienceUses;
          v92 = 1024;
          v93 = v22;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v36,
            OS_LOG_TYPE_DEFAULT,
            "%s: Device with ecid 0x%llx (%d, %d, %d) (%d, %d, %d, %d, %d)",
            buf,
            0x46u);
        }
        if ( (v23 | v26 ^ 1) != 1 )
          goto LABEL_53;
        if ( (v25 & 1) == 0 )
        {
          if ( self->_consentStage )
          {
            v68 = self->_log;
            if ( os_log_type_enabled(v68, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 136315394;
              v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
              v82 = 2048;
              v83 = v72;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v68,
                OS_LOG_TYPE_DEFAULT,
                "%s: User has already given consent for update, cannot change audience for device with ecid 0x%llx",
                buf,
                0x16u);
            }
            goto LABEL_87;
          }
          -[UARPUpdaterDisplayControllerDelegate revokeUserConsentRequest](self, "revokeUserConsentRequest");
          v40 = objc_retain(self->_checkInfo);
          objc_sync_enter(v40);
          -[NSMutableSet removeAllObjects](self->_checkInfo, "removeAllObjects");
          if ( v79 && v76 )
            -[NSMutableSet addObject:](self->_checkInfo, "addObject:", v77);
          objc_sync_exit(v40);
          objc_release(v40);
          v11 = 1LL;
        }
        -[UARPUpdaterDisplayControllerDelegate setAssetAudience:](self, "setAssetAudience:", v20);
        v41 = self->_customerAudienceUsed ? v24 : 1;
        if ( v41 == 1 )
        {
          if ( self->_internalAudienceUsed )
            v42 = v24;
          else
            v42 = 0;
          v43 = v11;
          if ( (v42 & 1) == 0 )
          {
            v44 = self->_log;
            if ( os_log_type_enabled(v44, OS_LOG_TYPE_ERROR) )
              sub_100013D50(v72, v44);
LABEL_87:
            v28 = 0LL;
            goto LABEL_88;
          }
        }
        else
        {
LABEL_53:
          v43 = v11;
        }
        v45 = self->_log;
        if ( os_log_type_enabled(v45, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315906;
          v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
          v82 = 2048;
          v83 = v72;
          v84 = 1024;
          *(_DWORD *)v85 = v43;
          *(_WORD *)&v85[4] = 1024;
          *(_DWORD *)&v85[6] = v78;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v45,
            OS_LOG_TYPE_DEFAULT,
            "%s: Checking if asset available for device with ecid 0x%llx (remote=%d internal=%d)",
            buf,
            0x22u);
        }
        v46 = 32LL;
        if ( v78 )
          v46 = 24LL;
        v47 = objc_retain(*(id *)((char *)&self->super.isa + v46));
        v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v47, "syncFindAsset:", v43));
        v48 = self->_log;
        if ( v28 )
        {
          v49 = objc_retain(v48);
          if ( os_log_type_enabled(v49, OS_LOG_TYPE_DEFAULT) )
          {
            v50 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "attributes"));
            v51 = objc_retainAutoreleasedReturnValue(objc_msgSend(v50, "objectForKeyedSubscript:", CFSTR("OSVersion")));
            v52 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "attributes"));
            v53 = objc_retainAutoreleasedReturnValue(objc_msgSend(v52, "objectForKeyedSubscript:", CFSTR("Build")));
            v54 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "attributes"));
            v55 = objc_retainAutoreleasedReturnValue(objc_msgSend(v54, "objectForKeyedSubscript:", CFSTR("RestoreVersion")));
            *(_DWORD *)buf = 136316418;
            v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
            v82 = 2048;
            v83 = v72;
            v84 = 2112;
            *(_QWORD *)v85 = v51;
            *(_WORD *)&v85[8] = 2112;
            v86 = v53;
            *(_WORD *)v87 = 2112;
            *(_QWORD *)&v87[2] = v55;
            v88 = 1024;
            v89 = v78;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v49,
              OS_LOG_TYPE_DEFAULT,
              "%s: Asset for device with ecid 0x%llx has version: %@ build: %@ restoreVersion: %@ (internal=%d)",
              buf,
              0x3Au);
            objc_release(v55);
            objc_release(v54);
            objc_release(v53);
            objc_release(v52);
            objc_release(v51);
            objc_release(v50);
          }
          objc_release(v49);
          if ( !v79 )
            goto LABEL_68;
          if ( !v71
            || (v56 = -[UARPUpdaterDisplayControllerDelegate shouldUpdateDevice:withAsset:internal:withECID:](
                        self,
                        "shouldUpdateDevice:withAsset:internal:withECID:",
                        v79,
                        v28,
                        v78,
                        v72),
                *v71 = v56,
                (v56 & 1) != 0) )
          {
            if ( v76 )
            {
              v57 = self->_log;
              if ( os_log_type_enabled(v57, OS_LOG_TYPE_DEFAULT) )
              {
                *(_DWORD *)buf = 136315394;
                v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
                v82 = 2048;
                v83 = v72;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v57,
                  OS_LOG_TYPE_DEFAULT,
                  "%s: Update available, requesting user consent to update device with ecid 0x%llx",
                  buf,
                  0x16u);
              }
              -[UARPUpdaterDisplayControllerDelegate requestUserConsentForAsset:](
                self,
                "requestUserConsentForAsset:",
                v28);
            }
LABEL_68:
            objc_release(v47);
            objc_sync_exit(obj);
            objc_release(obj);
            v58 = objc_retain(self->_restoreInfo);
            objc_sync_enter(v58);
            if ( !v79 )
            {
              obja = v58;
              v59 = objc_retainAutoreleasedReturnValue(
                      -[NSMutableDictionary objectForKeyedSubscript:](
                        self->_restoreInfo,
                        "objectForKeyedSubscript:",
                        v77));
              v60 = v59 == 0LL;
              objc_release(v59);
              if ( !v60 )
              {
                v61 = objc_retainAutoreleasedReturnValue(
                        -[NSMutableDictionary objectForKeyedSubscript:](
                          self->_restoreInfo,
                          "objectForKeyedSubscript:",
                          v77));
                objc_msgSend(v61, "setAsset:", v28);
                objc_release(v61);
                v58 = obja;
              }
            }
            goto LABEL_71;
          }
          v67 = self->_log;
          if ( os_log_type_enabled(v67, OS_LOG_TYPE_DEFAULT) )
          {
            *(_DWORD *)buf = 136315394;
            v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
            v82 = 2048;
            v83 = v72;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v67,
              OS_LOG_TYPE_DEFAULT,
              "%s: Update is not ready for device with ecid 0x%llx",
              buf,
              0x16u);
          }
        }
        else if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
        {
          sub_100013CDC(v72, v48);
        }
        objc_release(v47);
LABEL_88:
        objc_sync_exit(obj);
        objc_release(obj);
        v58 = objc_retain(self->_mobileAssetCustomerUpdater);
        objc_sync_enter(v58);
        if ( !v79 )
        {
          v69 = self->_notBootedAudienceUses - 1;
          self->_notBootedAudienceUses = v69;
          if ( !v69 )
          {
            objb = v58;
            if ( !-[UARPUpdaterDisplayControllerDelegate consentRequested](self, "consentRequested") )
            {
              v70 = self->_log;
              if ( os_log_type_enabled(v70, OS_LOG_TYPE_DEFAULT) )
              {
                *(_DWORD *)buf = 136315138;
                v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v70,
                  OS_LOG_TYPE_DEFAULT,
                  "%s: Asset audience not in use",
                  buf,
                  0xCu);
              }
              *(_WORD *)&self->_customerAudienceUsed = 0;
              v58 = objb;
            }
          }
        }
LABEL_71:
        objc_sync_exit(v58);
        objc_release(v58);
LABEL_76:
        v14 = v77;
        goto LABEL_77;
      }
      v29 = self->_internalAudienceUsed;
      v24 = 1;
      v30 = 1;
    }
    else
    {
      v29 = self->_internalAudienceUsed;
      v30 = self->_internalAudienceUsed;
      v24 = v20 ^ 1;
    }
    if ( v29 )
      v26 = v24;
    else
      v26 = 0;
    v23 = !v30;
    v25 = 1;
    if ( v30 && (v26 & 1) == 0 )
    {
      if ( v79 )
        v31 = v21;
      else
        v31 = 0;
      if ( self->_notBootedAudienceUses > 0 || v31 )
      {
        v62 = self->_log;
        if ( os_log_type_enabled(v62, OS_LOG_TYPE_DEFAULT) )
        {
          v63 = self->_customerAudienceUsed;
          v64 = self->_internalAudienceUsed;
          v65 = self->_notBootedAudienceUses;
          *(_DWORD *)buf = 136316930;
          v81 = "-[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:]";
          v82 = 2048;
          v83 = v72;
          v84 = 1024;
          *(_DWORD *)v85 = v20;
          *(_WORD *)&v85[4] = 1024;
          *(_DWORD *)&v85[6] = v63;
          LOWORD(v86) = 1024;
          *(_DWORD *)((char *)&v86 + 2) = v64;
          HIWORD(v86) = 1024;
          *(_DWORD *)v87 = v79 != 0LL;
          *(_WORD *)&v87[4] = 1024;
          *(_DWORD *)&v87[6] = v65;
          v88 = 1024;
          v89 = v22;
          v33 = "%s: Device with ecid 0x%llx blocked by pending update with different audience (%d, %d, %d, %d, %d, %d)";
          v34 = v62;
          v35 = 58;
          goto LABEL_74;
        }
LABEL_75:
        objc_sync_exit(obj);
        objc_release(obj);
        v28 = 0LL;
        goto LABEL_76;
      }
      v25 = 0;
      v23 = 0;
      v26 = 0;
    }
    goto LABEL_29;
  }
  v27 = self->_log;
  if ( os_log_type_enabled(v27, OS_LOG_TYPE_ERROR) )
    sub_100013C64(v27);
  v28 = 0LL;
LABEL_77:
  objc_release(v14);
  objc_release(v79);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v28);
}