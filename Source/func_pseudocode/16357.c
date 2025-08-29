-[EAFirmwareUpdater validateAsset]
id __cdecl -[EAFirmwareUpdater validateAsset](EAFirmwareUpdater *self, SEL a2)
{
  FirmwareBundle *v3; // x0
  FirmwareBundle *v4; // x20
  FirmwareBundle *v5; // x0
  char *v6; // x22
  __int64 v7; // x0
  unsigned __int16 *v8; // x21
  unsigned __int64 v9; // x25
  char *v10; // x27
  NSString *v11; // x0
  void *v12; // x19
  char *v14; // x0
  unsigned __int64 v15; // x26
  unsigned __int64 v16; // x24
  unsigned __int64 v17; // x8
  bool v18; // w8
  id v19; // x0
  unsigned __int64 v20; // x8
  unsigned __int64 firmwareVersionMajor; // x8
  unsigned __int64 firmwareVersionMinor; // x8
  const __CFString *v23; // x2
  const __CFString *v24; // x2
  __int64 v25; // x1
  const __CFString *v26; // x2
  __int64 v27; // x1
  unsigned __int64 v28; // [xsp+40h] [xbp-70h]
  char *v29; // [xsp+48h] [xbp-68h] BYREF
  unsigned __int8 *v30; // [xsp+50h] [xbp-60h] BYREF
  unsigned int v31; // [xsp+58h] [xbp-58h] BYREF
  unsigned int v32; // [xsp+5Ch] [xbp-54h] BYREF

  if ( !-[EAFirmwareUpdater asset](self, "asset") )
  {
    v24 = CFSTR("NoAsset");
    v25 = 2LL;
LABEL_53:
    v12 = (void *)sub_100009A6C(0LL, v25, v24);
    v4 = 0LL;
    goto LABEL_19;
  }
  v3 = (FirmwareBundle *)objc_msgSend(-[EAFirmwareUpdater asset](self, "asset"), "getLocalFileUrl");
  v4 = v3;
  if ( !v3 )
  {
    v26 = CFSTR("No local URL for asset");
    v27 = 5LL;
LABEL_58:
    v12 = (void *)sub_100009A6C(0LL, v27, v26);
    goto LABEL_19;
  }
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater validateAsset]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("validating MobileAsset [localURL=%@] attributes=%@\n"),
        v3,
        objc_msgSend(-[EAFirmwareUpdater asset](self, "asset"), "attributes"))));
  -[EAFirmwareUpdater setFirmwareBundleURL:](
    self,
    "setFirmwareBundleURL:",
    objc_msgSend(
      -[FirmwareBundle URLByAppendingPathComponent:](
        v4,
        "URLByAppendingPathComponent:",
        -[EAFirmwareUpdater firmwareBundleFilename](self, "firmwareBundleFilename")),
      "filePathURL"));
  if ( !-[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL") )
  {
    v24 = CFSTR("Couldn't build firmware update URL");
    v25 = 4LL;
    goto LABEL_53;
  }
  if ( !-[NSFileManager isReadableFileAtPath:](
          +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
          "isReadableFileAtPath:",
          -[NSURL path](-[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL"), "path")) )
  {
    -[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL");
    v24 = CFSTR("No firmware bundle: %@");
    v25 = 6LL;
    goto LABEL_53;
  }
  if ( !-[EAFirmwareUpdater updateRequiresSuperBinary](self, "updateRequiresSuperBinary") )
  {
    v4 = 0LL;
    v12 = 0LL;
    goto LABEL_19;
  }
  v5 = -[FirmwareBundle initWithBundlePath:](
         objc_alloc(&OBJC_CLASS___FirmwareBundle),
         "initWithBundlePath:",
         -[NSURL path](-[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL"), "path"));
  v4 = v5;
  if ( !v5 )
  {
    v26 = CFSTR("Couldn't read firmware bundle");
LABEL_57:
    v27 = 4LL;
    goto LABEL_58;
  }
  if ( !-[FirmwareBundle firmwareImage](v5, "firmwareImage")
    && -[FirmwareBundle firmwareLocalURL](v4, "firmwareLocalURL") )
  {
    -[FirmwareBundle loadFirmwareImage](v4, "loadFirmwareImage");
  }
  v6 = -[NSData bytes](-[FirmwareBundle firmwareImage](v4, "firmwareImage"), "bytes");
  v7 = parseSuperBinaryAndPayloadHeaders(
         v6,
         -[NSData length](-[FirmwareBundle firmwareImage](v4, "firmwareImage"), "length"));
  if ( !v7 )
  {
    v26 = CFSTR("Couldn't parse SuperBinary header");
    goto LABEL_57;
  }
  v8 = (unsigned __int16 *)v7;
  if ( *(_WORD *)(v7 + 16) )
  {
    v9 = 0LL;
    v10 = (char *)(v7 + 20);
    while ( 1 )
    {
      v11 = +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%c%c%c%c"),
              *v10,
              v10[1],
              v10[2],
              v10[3]);
      if ( !v11 )
        break;
      if ( -[NSString isEqualToString:](v11, "isEqualToString:", CFSTR("sbmd")) )
      {
        v32 = 0;
        v31 = 0;
        v29 = 0LL;
        v30 = 0LL;
        v14 = &v6[*((unsigned int *)v10 + 3)];
        while ( (unsigned int)metadataTLVGetNext(
                                v14,
                                &v6[*((_DWORD *)v10 + 4) + *((_DWORD *)v10 + 3)],
                                &v32,
                                &v31,
                                &v30,
                                &v29) )
        {
          if ( v32 - 1 > 1 )
          {
            v19 = objc_alloc((Class)&OBJC_CLASS___NSString);
            -[EAFirmwareUpdater log:format:](
              self,
              "log:format:",
              5LL,
              CFSTR("%s %@"),
              "-[EAFirmwareUpdater validateAsset]",
              objc_autorelease(objc_msgSend(v19, "initWithFormat:", CFSTR("Warning: Unsupported TLV type found in metadata: %d"), v32)));
          }
          else
          {
            if ( v31 < 4 )
            {
              v23 = CFSTR("TLV length not large enough to support Version");
              goto LABEL_47;
            }
            v15 = *v30;
            v16 = v30[1];
            v28 = *((unsigned __int16 *)v30 + 1);
            if ( v32 == 2 && !self->_skipVersionCheck )
            {
              -[EAFirmwareUpdater log:format:](
                self,
                "log:format:",
                5LL,
                CFSTR("%s %@"),
                "-[EAFirmwareUpdater validateAsset]",
                objc_autorelease(
                  objc_msgSend(
                    objc_alloc((Class)&OBJC_CLASS___NSString),
                    "initWithFormat:",
                    CFSTR("Checking Curr FW Version=%llu.%llu.%llu >= Min FW Version=%llu.%llu.%llu"),
                    self->_firmwareVersionMajor,
                    self->_firmwareVersionMinor,
                    self->_firmwareVersionRelease,
                    v15,
                    v16,
                    v28)));
              firmwareVersionMajor = self->_firmwareVersionMajor;
              if ( firmwareVersionMajor <= v15 )
              {
                if ( firmwareVersionMajor != v15
                  || (firmwareVersionMinor = self->_firmwareVersionMinor, firmwareVersionMinor <= v16)
                  && (firmwareVersionMinor != v16 || v28 > self->_firmwareVersionRelease) )
                {
                  v23 = CFSTR("Current FW Version does not meet MinRequiredVersion");
                  goto LABEL_47;
                }
              }
            }
            else
            {
              -[EAFirmwareUpdater log:format:](
                self,
                "log:format:",
                5LL,
                CFSTR("%s %@"),
                "-[EAFirmwareUpdater validateAsset]",
                objc_autorelease(
                  objc_msgSend(
                    objc_alloc((Class)&OBJC_CLASS___NSString),
                    "initWithFormat:",
                    CFSTR("Checking Curr FW Version=%llu.%llu.%llu >= LastUrgent FW Version=%llu.%llu.%llu"),
                    self->_firmwareVersionMajor,
                    self->_firmwareVersionMinor,
                    self->_firmwareVersionRelease,
                    v15,
                    v16,
                    v28)));
              v17 = self->_firmwareVersionMajor;
              if ( v17 >= v15 )
              {
                if ( v17 == v15 )
                {
                  v20 = self->_firmwareVersionMinor;
                  v18 = v20 < v16 || v20 == v16 && v28 > self->_firmwareVersionRelease;
                }
                else
                {
                  v18 = 0;
                }
              }
              else
              {
                v18 = 1;
              }
              self->_firmwareUpdateIsUrgent = v18;
            }
          }
          v14 = v29;
          if ( !v29 )
            break;
        }
LABEL_16:
        v12 = 0LL;
        goto LABEL_18;
      }
      ++v9;
      v10 += 20;
      if ( v9 >= v8[8] )
        goto LABEL_16;
    }
    v23 = CFSTR("Couldn't parse SuperBinary header tag");
LABEL_47:
    v12 = (void *)sub_100009A6C(0LL, 4LL, v23);
  }
  else
  {
    v12 = 0LL;
  }
LABEL_18:
  free(v8);
LABEL_19:
  objc_release(v4);
  return v12;
}