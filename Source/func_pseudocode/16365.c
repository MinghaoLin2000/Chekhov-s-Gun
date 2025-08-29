-[EAFirmwareUpdater processPersonalizationInfoFromAccessory:]
void __cdecl -[EAFirmwareUpdater processPersonalizationInfoFromAccessory:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  void *v5; // x0
  void *v6; // x20
  unsigned __int64 manifestIndex; // x22
  NSArray *manifestList; // x0
  void *v9; // x27
  NSNull *v10; // x19
  void *v11; // x19
  NSNull *v12; // x19
  FirmwareBundle *v13; // x23
  FirmwareBundle *v14; // x19
  NSArray *v15; // x0
  NSArray *v16; // x0
  NSArray *buildIdentities; // x0
  void *v18; // x25
  void *v19; // x0
  void *v20; // x26
  void *v21; // x24
  __int64 v22; // x23
  void *i; // x22
  void *v24; // x19
  void *v25; // x0
  void *v26; // x21
  NSData *v27; // x2
  char v28; // w19
  const __CFString *v29; // x2
  __int64 v30; // x22
  const __CFString *v31; // x2
  const __CFString *v32; // x2
  __int64 v33; // x1
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  FirmwareBundle *v35; // [xsp+10h] [xbp-260h]
  EAFirmwareUpdater *v36; // [xsp+28h] [xbp-248h]
  void *v37; // [xsp+30h] [xbp-240h]
  _QWORD block[5]; // [xsp+38h] [xbp-238h] BYREF
  __int128 v39; // [xsp+60h] [xbp-210h] BYREF
  __int128 v40; // [xsp+70h] [xbp-200h]
  __int128 v41; // [xsp+80h] [xbp-1F0h]
  __int128 v42; // [xsp+90h] [xbp-1E0h]
  _OWORD v43[4]; // [xsp+A0h] [xbp-1D0h] BYREF
  __int64 v44; // [xsp+E8h] [xbp-188h] BYREF
  unsigned __int64 v45; // [xsp+F0h] [xbp-180h] BYREF
  const __CFString *v46; // [xsp+F8h] [xbp-178h] BYREF
  const __CFString *v47; // [xsp+100h] [xbp-170h] BYREF
  _BYTE v48[128]; // [xsp+108h] [xbp-168h] BYREF
  char v49[128]; // [xsp+188h] [xbp-E8h] BYREF

  v37 = +[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array");
  v45 = 0LL;
  if ( !a3 )
  {
    v29 = CFSTR("Invalid Info from Accessory");
LABEL_88:
    v30 = sub_100009A6C(0LL, 21LL, v29);
    v6 = 0LL;
    v9 = 0LL;
    v28 = 1;
    goto LABEL_109;
  }
  if ( !self->_personalizationRequestHandler )
  {
    v29 = CFSTR("Invalid _personalizationRequestHandler");
    goto LABEL_88;
  }
  v5 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___FudPersonalizationRequest),
         "initWithName:",
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@_%@"),
           CFSTR("PersonalizationRequest"),
           -[EAFirmwareUpdater protocolString](self, "protocolString")));
  if ( !v5 )
  {
    v29 = CFSTR("Failed to init FudPersonalizationRequest");
    goto LABEL_88;
  }
  v6 = v5;
  if ( -[NSDictionary objectForKey:](self->_deviceOptions, "objectForKey:", CFSTR("PersonalizationResponseFormat")) )
  {
    objc_msgSend(
      v6,
      "setResponseFormat:",
      objc_msgSend(
        -[NSDictionary objectForKey:](self->_deviceOptions, "objectForKey:", CFSTR("PersonalizationResponseFormat")),
        "unsignedIntValue"));
    if ( (unsigned int)objc_msgSend(v6, "responseFormat") >= 3 )
    {
      v31 = CFSTR("Invalid Response format specified");
    }
    else
    {
      if ( (unsigned int)objc_msgSend(v6, "responseFormat") == 1
        && -[NSDictionary objectForKey:](self->_deviceOptions, "objectForKey:", CFSTR("PersonalizationResponseAlign")) )
      {
        objc_msgSend(
          v6,
          "setResponseAlignment:",
          (unsigned __int16)objc_msgSend(
                              -[NSDictionary objectForKey:](
                                self->_deviceOptions,
                                "objectForKey:",
                                CFSTR("PersonalizationResponseAlign")),
                              "unsignedIntValue"));
      }
      if ( self->_manifestIDs )
      {
        manifestIndex = self->_manifestIndex;
        if ( -[NSArray count](self->_manifestList, "count") > manifestIndex )
        {
          manifestList = self->_manifestList;
          ++self->_manifestIndex;
          objc_msgSend(
            v6,
            "setRequestPrefix:",
            -[NSArray objectAtIndexedSubscript:](manifestList, "objectAtIndexedSubscript:"));
        }
      }
      if ( objc_msgSend(a3, "objectForKey:", CFSTR("BoardID")) )
      {
        objc_msgSend(
          v6,
          "setBoardID:",
          objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("BoardID")), "unsignedIntValue"));
        if ( objc_msgSend(a3, "objectForKey:", CFSTR("ChipID")) )
        {
          objc_msgSend(
            v6,
            "setChipID:",
            objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("ChipID")), "unsignedIntValue"));
          if ( objc_msgSend(a3, "objectForKey:", CFSTR("ECID")) )
          {
            if ( objc_msgSend(v6, "requestPrefix")
              && (unsigned int)objc_msgSend(objc_msgSend(v6, "requestPrefix"), "isEqualToString:", CFSTR("Baobab")) )
            {
              v44 = 0LL;
              v45 = bswap64((unsigned __int64)objc_msgSend(
                                                objc_msgSend(a3, "objectForKey:", CFSTR("ECID")),
                                                "unsignedLongValue"));
              v9 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableData), "initWithBytes:length:", &v44, 8LL);
              objc_msgSend(v9, "appendBytes:length:", &v45, 8LL);
              objc_msgSend(v6, "setExtEcID:", v9);
            }
            else
            {
              objc_msgSend(
                v6,
                "setEcID:",
                objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("ECID")), "unsignedLongValue"));
              v9 = 0LL;
            }
            objc_msgSend(v6, "setGlobalSigning:", 0LL);
          }
          else
          {
            objc_msgSend(v6, "setGlobalSigning:", 1LL);
            v9 = 0LL;
          }
          if ( objc_msgSend(a3, "objectForKey:", CFSTR("securityDomain")) )
          {
            objc_msgSend(
              v6,
              "setSecurityDomain:",
              objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("securityDomain")), "unsignedIntValue"));
            if ( objc_msgSend(a3, "objectForKey:", CFSTR("productionMode")) )
            {
              objc_msgSend(
                v6,
                "setProductionMode:",
                objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("productionMode")), "boolValue"));
              if ( objc_msgSend(a3, "objectForKey:", CFSTR("securityMode")) )
              {
                v10 = (NSNull *)objc_msgSend(a3, "objectForKey:", CFSTR("securityMode"));
                if ( v10 != +[NSNull null](&OBJC_CLASS___NSNull, "null") )
                  objc_msgSend(
                    v6,
                    "setSecurityMode:",
                    objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("securityMode")), "boolValue"));
                if ( objc_msgSend(a3, "objectForKey:", CFSTR("nonceHash")) )
                {
                  if ( objc_msgSend(v6, "requestPrefix")
                    && (unsigned int)objc_msgSend(
                                       objc_msgSend(v6, "requestPrefix"),
                                       "isEqualToString:",
                                       CFSTR("Baobab")) )
                  {
                    v11 = objc_msgSend(
                            objc_alloc((Class)&OBJC_CLASS___NSData),
                            "initWithBytes:length:",
                            objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("nonceHash")), "bytes"),
                            16LL);
                    objc_msgSend(v6, "setNonceHash:", v11);
                    objc_release(v11);
                    -[EAFirmwareUpdater log:format:](
                      self,
                      "log:format:",
                      5LL,
                      CFSTR("%s %@"),
                      "-[EAFirmwareUpdater processPersonalizationInfoFromAccessory:]",
                      objc_autorelease(
                        objc_msgSend(
                          objc_alloc((Class)&OBJC_CLASS___NSString),
                          "initWithFormat:",
                          CFSTR("Truncating nonceHash=%@\n"),
                          objc_msgSend(v6, "nonceHash"))));
                  }
                  else
                  {
                    objc_msgSend(v6, "setNonceHash:", objc_msgSend(a3, "objectForKey:", CFSTR("nonceHash")));
                  }
                  v12 = (NSNull *)objc_msgSend(a3, "objectForKey:", CFSTR("chipEpoch"));
                  if ( v12 != +[NSNull null](&OBJC_CLASS___NSNull, "null")
                    && (!objc_msgSend(v6, "requestPrefix")
                     || ((unsigned int)objc_msgSend(objc_msgSend(v6, "requestPrefix"), "isEqualToString:", CFSTR("DMC")) & 1) == 0) )
                  {
                    objc_msgSend(
                      v6,
                      "setChipEpoch:",
                      objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("chipEpoch")), "unsignedIntValue"));
                  }
                  if ( objc_msgSend(a3, "objectForKey:", CFSTR("enableMixMatch")) )
                  {
                    objc_msgSend(
                      v6,
                      "setEnableMixMatch:",
                      objc_msgSend(objc_msgSend(a3, "objectForKey:", CFSTR("enableMixMatch")), "boolValue"));
                    if ( -[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL")
                      || -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle") )
                    {
                      if ( !(unsigned int)objc_msgSend(v6, "responseFormat") )
                      {
                        buildIdentities = self->_buildIdentities;
                        if ( buildIdentities )
                        {
                          v13 = 0LL;
LABEL_50:
                          memset(v43, 0, sizeof(v43));
                          v36 = self;
                          v35 = v13;
                          if ( -[NSArray countByEnumeratingWithState:objects:count:](
                                 buildIdentities,
                                 "countByEnumeratingWithState:objects:count:",
                                 v43,
                                 v49,
                                 16LL)
                            && (v18 = objc_msgSend(**((id **)&v43[0] + 1), "objectForKey:", CFSTR("Manifest")),
                                v39 = 0u,
                                v40 = 0u,
                                v41 = 0u,
                                v42 = 0u,
                                (v19 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v39, v48, 16LL)) != 0LL) )
                          {
                            v20 = v19;
                            v21 = 0LL;
                            v22 = *(_QWORD *)v40;
                            while ( 2 )
                            {
                              for ( i = 0LL; i != v20; i = (char *)i + 1 )
                              {
                                if ( *(_QWORD *)v40 != v22 )
                                  objc_enumerationMutation(v18);
                                v24 = *(void **)(*((_QWORD *)&v39 + 1) + 8LL * (_QWORD)i);
                                if ( v21 )
                                  objc_release(v21);
                                v25 = objc_msgSend(v18, "objectForKey:", v24);
                                if ( !v25 )
                                {
                                  v21 = 0LL;
LABEL_84:
                                  self = v36;
                                  goto LABEL_76;
                                }
                                v26 = v25;
                                if ( objc_msgSend(v6, "requestPrefix")
                                  && !(unsigned int)objc_msgSend(v24, "hasPrefix:", objc_msgSend(v6, "requestPrefix")) )
                                {
                                  v21 = 0LL;
                                }
                                else
                                {
                                  v21 = objc_msgSend(
                                          objc_alloc((Class)&OBJC_CLASS___FudPersonalizationObjectInfo),
                                          "initWithTag:",
                                          v24);
                                  if ( !v21 )
                                    goto LABEL_84;
                                  objc_msgSend(v21, "setDigest:", objc_msgSend(v26, "objectForKey:", CFSTR("Digest")));
                                  if ( objc_msgSend(v26, "objectForKey:", CFSTR("Trusted")) )
                                    objc_msgSend(
                                      v21,
                                      "setTrusted:",
                                      objc_msgSend(objc_msgSend(v26, "objectForKey:", CFSTR("Trusted")), "boolValue"));
                                  objc_msgSend(v21, "setEffectiveProductionMode:", objc_msgSend(v6, "productionMode"));
                                  if ( (unsigned int)objc_msgSend(v6, "isSecurityModeSet") )
                                    objc_msgSend(v21, "setEffectiveSecurityMode:", objc_msgSend(v6, "securityMode"));
                                  objc_msgSend(v37, "addObject:", v21);
                                }
                              }
                              v20 = objc_msgSend(v18, "countByEnumeratingWithState:objects:count:", &v39, v48, 16LL);
                              if ( v20 )
                                continue;
                              break;
                            }
                          }
                          else
                          {
                            v21 = 0LL;
                          }
                          objc_msgSend(v6, "setObjectList:", objc_msgSend(v37, "copy"));
                          if ( (unsigned int)objc_msgSend(v6, "responseFormat") )
                            v27 = -[FirmwareBundle firmwareImage](v35, "firmwareImage");
                          else
                            v27 = 0LL;
                          self = v36;
                          objc_msgSend(v6, "setPayload:", v27);
LABEL_76:
                          (*((void (**)(void))self->_personalizationRequestHandler + 2))();
                          v28 = 0;
                          if ( !v9 )
                            goto LABEL_78;
                          goto LABEL_77;
                        }
                      }
                      v13 = -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle");
                      if ( v13
                        || (v14 = -[FirmwareBundle initWithBundlePath:](
                                    objc_alloc(&OBJC_CLASS___FirmwareBundle),
                                    "initWithBundlePath:",
                                    -[NSURL path](
                                      -[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL"),
                                      "path")),
                            -[iAUPServer setFirmwareBundle:](self->_iAUPServer, "setFirmwareBundle:", v14),
                            objc_release(v14),
                            (v13 = -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle")) != 0LL) )
                      {
                        if ( -[FirmwareBundle buildManifest](v13, "buildManifest") )
                        {
                          if ( !-[FirmwareBundle firmwareImage](v13, "firmwareImage")
                            && -[FirmwareBundle firmwareLocalURL](v13, "firmwareLocalURL") )
                          {
                            -[FirmwareBundle loadFirmwareImage](v13, "loadFirmwareImage");
                          }
                          if ( -[FirmwareBundle firmwareImage](v13, "firmwareImage") )
                          {
                            v15 = -[NSDictionary objectForKey:](
                                    -[FirmwareBundle buildManifest](v13, "buildManifest"),
                                    "objectForKey:",
                                    CFSTR("BuildIdentities"));
                            self->_buildIdentities = v15;
                            if ( v15 )
                            {
                              v16 = objc_retain(v15);
                              buildIdentities = self->_buildIdentities;
                              goto LABEL_50;
                            }
                            v32 = CFSTR("Unable to find BuildIdentities in firmwareBundle.buildManifest");
                          }
                          else
                          {
                            v32 = CFSTR("Unable to find firmwareImage from MobileAsset");
                          }
                        }
                        else
                        {
                          v32 = CFSTR("Unable to find BuildManifest.plist");
                        }
                      }
                      else
                      {
                        v32 = CFSTR("Unable to allocate FirmwareBundle object");
                      }
                    }
                    else
                    {
                      v32 = CFSTR("No firmware bundle URL");
                    }
                    v33 = 6LL;
                    goto LABEL_106;
                  }
                  v32 = CFSTR("Missing kManifestPropertyKeyEnableMixMatch from Accessory");
                }
                else
                {
                  v32 = CFSTR("Missing kManifestPropertyKeyNonceHash from Accessory");
                }
              }
              else
              {
                v32 = CFSTR("Missing kManifestPropertyKeySecurityMode from Accessory");
              }
            }
            else
            {
              v32 = CFSTR("Missing kManifestPropertyKeyProductionMode from Accessory");
            }
          }
          else
          {
            v32 = CFSTR("Missing kManifestPropertyKeySecurityDomain from Accessory");
          }
          v33 = 21LL;
LABEL_106:
          v30 = sub_100009A6C(0LL, v33, v32);
          goto LABEL_107;
        }
        v31 = CFSTR("PersonalizationInfo: Missing kManifestPropertyKeyChipID from Accessory");
      }
      else
      {
        v31 = CFSTR("PersonalizationInfo: Missing kManifestPropertyKeyBoardID from Accessory");
      }
    }
  }
  else
  {
    v31 = CFSTR("No Response format specified");
  }
  v30 = sub_100009A6C(0LL, 21LL, v31);
  v9 = 0LL;
LABEL_107:
  if ( !v30 )
  {
    v21 = 0LL;
    goto LABEL_76;
  }
  v28 = 0;
LABEL_109:
  eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000ACB4;
  block[3] = &unk_1000315C0;
  block[4] = self;
  dispatch_async(eaNotificationDispatchQueue, block);
  v46 = CFSTR("Event");
  v47 = CFSTR("com.apple.fud.updateFailed");
  -[EAFirmwareUpdater updateComplete:error:](
    self,
    "updateComplete:error:",
    +[NSDictionary dictionaryWithObjects:forKeys:count:](
      &OBJC_CLASS___NSDictionary,
      "dictionaryWithObjects:forKeys:count:",
      &v47,
      &v46,
      1LL),
    v30);
  v21 = 0LL;
  if ( v9 )
LABEL_77:
    objc_release(v9);
LABEL_78:
  if ( v21 )
    objc_release(v21);
  if ( (v28 & 1) == 0 )
    objc_release(v6);
}